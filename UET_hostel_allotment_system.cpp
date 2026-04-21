#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main() {
    int max = 100;
    int exec_capacity = 2;
    int standard_capacity = 5;
   // using parallel arrays
    string stud_name[100];
    int stud_roll[100]; 
    int stud_sem[100];  
    float stud_matric[100];
    float stud_fsc[100];
    float stud_ecat[100];
    float stud_gpa[100];
    float stud_meritScore[100];
    int stud_pref[100];        
    string stud_room[100];
    int stud_mess[100];     
    float stud_bill[100];   
    int count = 0; 
    int main_opt;
    while (true) {
        system("CLS");
		cout<<"------------------------------------------------"<<endl;
        cout << "--- UET HOSTEL MERIT & ALLOCATION SYSTEM ---" << endl;
	    cout<<"----------------------------------------------"<<endl;
        cout << "1. Admin Portal (Warden)" << endl;
        cout << "2. Student Portal" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose one option: ";
        cin >> main_opt;
        // ADMIN wala SECTION
        if (main_opt == 1) {
            system("CLS");
            string user_name, pass;
            cout << "Admin Username: ";
            cin >> user_name;
            cout << "Password: ";
            cin >> pass;
            //login 
            if (user_name == "Hitler" && pass == "123") {
                cout << endl;
				cout << "Login successful. Press any key to continue..." << endl;
                getch();
                int admin_opt;
                while (true) {
                    system("CLS");
                    cout << "--- ADMIN DASHBOARD ---" << endl;
                    cout << "Rooms Available -> Executive: " << exec_capacity << " | Standard: " << standard_capacity << endl;
                    cout << "----------------------------------------" << endl;
                    cout << "1. View all Allocations" << endl;
                    cout << "2. Search & Print Fee Challan" << endl;
                    cout << "3. Generate Official Merit List " << endl;
                    cout << "4. Reject/Remove Applicant" << endl;
                    cout << "5. Logout" << endl;
                    cout << "Choose option: ";
                    cin >> admin_opt;
                    if (admin_opt == 1) {
                        system("CLS");
                        cout << "RollNO      Name        Sem      Merit %      Room        Total Bill" << endl;
                        cout << "------------------------------------------------------------------" << endl;
                        for (int i = 0; i < count; i++) {
                            if (stud_name[i] != "") {
                                cout << stud_roll[i] << "        " << stud_name[i] << "        " << stud_sem[i] << "      " 
                                     << stud_meritScore[i] << "%      " << stud_room[i] << "      Rs " << stud_bill[i] << endl;
                            }
                        }
                        cout << endl << "Press any key..." << endl;
                        getch();
                    }
                    else if (admin_opt == 2) {
                        system("CLS");
                        int search_roll;
                        bool found = false;
                        cout << "Enter Roll Number to search: ";
                        cin >> search_roll;
                        
                        for (int i = 0; i < count; i++) {
                            if (stud_roll[i] == search_roll && stud_name[i] != "") {
                                cout << endl;
                                cout << "======================================" << endl;
                                cout << "        UET HOSTEL FEE CHALLAN        " << endl;
                                cout << "======================================" << endl;
                                cout << " Name: " << stud_name[i] << "   Roll No: " << stud_roll[i] << endl;
                                cout << " Semester: " << stud_sem[i] << "        Merit: " << stud_meritScore[i] << "%" << endl;
                                cout << " Allocated: " << stud_room[i] << endl;
                                cout << "--------------------------------------" << endl;
                                float r_cost = 0;
                                float m_cost = 0;
                                if (stud_room[i] == "Executive Cubicle") r_cost = 6000;
                                else if (stud_room[i] == "Standard Cubicle") r_cost = 4500;
                                else r_cost = 3000;
                                if (stud_mess[i] == 1) m_cost = 9000;
                                else m_cost = 13500;
                                cout << " Room Charges:      Rs " << r_cost << endl;
                                cout << " Mess Plan:         Rs " << m_cost << endl;
                                cout << "--------------------------------------" << endl;
                                cout << " TOTAL PAYABLE:     Rs " << stud_bill[i] << endl;
                                cout << "======================================" << endl;           
                                found = true;
                                break;
                            }
                        }
                        if (found == false) cout << "Not found." << endl;
                        cout << endl << "Press any key to continue..." << endl;
                        getch();
                    }
                    else if (admin_opt == 3) {
                        system("CLS");
                        for (int i = 0; i < count; i++) {
                            for (int j = i + 1; j < count; j++) {
                                if (stud_meritScore[i] < stud_meritScore[j]) {     

                                    float tMerit = stud_meritScore[i];
                                    stud_meritScore[i] = stud_meritScore[j];
                                    stud_meritScore[j] = tMerit;
                                    string tName = stud_name[i];
                                    stud_name[i] = stud_name[j];
                                    stud_name[j] = tName;
                                    int tRoll = stud_roll[i];
                                    stud_roll[i] = stud_roll[j];
                                    stud_roll[j] = tRoll;
                                    int tSem = stud_sem[i];
                                    stud_sem[i] = stud_sem[j];
                                    stud_sem[j] = tSem;
                                    string tRoom = stud_room[i];
                                    stud_room[i] = stud_room[j];
                                    stud_room[j] = tRoom;
                                    float tBill = stud_bill[i];
                                    stud_bill[i] = stud_bill[j];
                                    stud_bill[j] = tBill;
                                }
                            }
                        }
                        
                        cout << "--- OFFICIAL UET HOSTEL MERIT LIST ---" << endl;
                        for (int i = 0; i < count; i++) {
                            if (stud_name[i] != "") {
                                cout << (i + 1) << ". " << stud_name[i] << " (Sem " << stud_sem[i] << ") - Merit: " 
                                     << stud_meritScore[i] << "% -> " << stud_room[i] << endl;
                            }
                        }
                        cout << endl << "Press any key to continue..." << endl;
                        getch();
                    }
                    else if (admin_opt == 4) {
                        system("CLS");
                        int search_roll;
                        bool found = false;
                        cout << "Enter student Roll Number to reject/remove: ";
                        cin >> search_roll;
                        
                        for (int i = 0; i < count; i++) {
                            if (stud_roll[i] == search_roll && stud_name[i] != "") {
                                
                                if (stud_room[i] == "Executive Cubicle") exec_capacity++;
                                else if (stud_room[i] == "Standard Cubicle") standard_capacity++;
                                
                                stud_name[i] = ""; 
                                stud_roll[i] = 0;
                                stud_sem[i] = 0;
                                stud_meritScore[i] = 0.0;
                                stud_room[i] = "";
                                stud_bill[i] = 0.0;
                                cout << "Applicant removed. Room given back to hostel administration. " << endl;
                                found = true;
                                break;
                            }
                        }
                        if (found == false) cout << "Not found." << endl;
                        cout << endl << "Press any key to continue..." << endl;
                        getch();
                    }

                    else if (admin_opt == 5) {
                        break; 
                    }
                }
            } else {
                cout << endl << "Invalid login. Press any key to continue..." << endl;
                getch();
            }
        }
        // student section
        else if (main_opt == 2) {
            int stud_opt;
            while(true) {
                system("CLS");
                cout << "--- STUDENT PORTAL ---" << endl;
                cout << "1. Apply for Hostel Allotment" << endl;
                cout << "2. Check Merit Status" << endl;
                cout << "3. Go Back" << endl;
                cout << "Choose option: ";
                cin >> stud_opt;
                if (stud_opt == 1) {
                    system("CLS");
                    cout << "--- REGISTRATION FORM ---" << endl;
                    cout << "Enter your First Name: ";
                    cin >> stud_name[count];
                    cout << "Enter your Roll Number: ";
                    cin >> stud_roll[count];
                    cout << "Enter Current Semester (1 to 8): ";
                    cin >> stud_sem[count];
                    // check if  freshers or senior
                    if (stud_sem[count] == 1) {
                        cout << endl << "--- FIRST YEAR DATA ---" << endl;
                        cout << "Enter Matric Marks (out of 1100): ";
                        cin >> stud_matric[count];
                        cout << "Enter FSc Marks (out of 1100): ";
                        cin >> stud_fsc[count];
                        cout << "Enter ECAT Marks (out of 400): ";
                        cin >> stud_ecat[count];
                        // uet aggregate calculation      
                        float matric_pct = (stud_matric[count] / 1100.0) * 25.0;
                        float fsc_pct = (stud_fsc[count] / 1100.0) * 45.0;
                        float ecat_pct = (stud_ecat[count] / 400.0) * 30.0;
                        stud_meritScore[count] = matric_pct + fsc_pct + ecat_pct;
                    } else {
                        cout << endl << "--- SENIOR Students ---" << endl;
                        cout << "Enter your latest CGPA (out of 4.0): ";
                        cin >> stud_gpa[count];
                        stud_meritScore[count] = (stud_gpa[count] / 4.0) * 100.0;
                    }
                    cout << endl << "--- ROOM PREFERENCE ---" << endl;
                    cout << "1. Executive Cubicle (Requires  atleast 80% Merit)" << endl;
                    cout << "2. Standard Cubicle  (Requires atleast  70% Merit)" << endl;
                    cout << "3. Shared Dorm "<< endl;
                    cout << "Select your preference (1-3): ";
                    cin >> stud_pref[count];
                    cout << endl << "--- MESS PREFERENCE ---" << endl;
                    cout << "1. Basic Plan (Rs 9000)" << endl;
                    cout << "2. Full Plan (Rs 13500)" << endl;
                    cout << "Choose mess plan (1 or 2): ";
                    cin >> stud_mess[count];
                    cout << endl << "System calculating your merit and checking allocation..." << endl;
                    float room_cost = 0.0;
                    float mess_cost = 0.0;
                    // allotment logic start
                    if (stud_pref[count] == 1 && stud_meritScore[count] >= 80.0 && exec_capacity > 0) {
                        stud_room[count] = "Executive Cubicle";
                        room_cost = 6000.0;
                        exec_capacity--; 
                    } 
                    else if ((stud_pref[count] == 1 || stud_pref[count] == 2) && stud_meritScore[count] >= 70.0 && standard_capacity > 0) {
                        stud_room[count] = "Standard Cubicle";
                        room_cost = 4500.0;
                        standard_capacity--;
                    } 
                    else {
                        stud_room[count] = "Shared Dorm";
                        room_cost = 3000.0;
                    }
                    
                    if (stud_mess[count] == 1) mess_cost = 9000.0;
                    else mess_cost = 13500.0;
                    
                    stud_bill[count] = room_cost + mess_cost;
                    
                    count++; 
                    cout << endl << "Application submitted! Check 'Merit Status' to see your allotment." << endl;
                    cout << "Press any key to continue..." << endl;
                    getch();
                }
                else if (stud_opt == 2) {
                    system("CLS");
                    int check_roll;
                    bool found = false;
                    cout << "--- CHECK STATUS ---" << endl;
                    cout << "Enter your Roll Number to view your allocation: ";
                    cin >> check_roll;
                    
                    for (int i = 0; i < count; i++) {
                        if (stud_roll[i] == check_roll && stud_name[i] != "") {
                            cout << endl << "Hello, " << stud_name[i] << "!" << endl;
                            cout << "Your Merit is : " << stud_meritScore[i] << "%" << endl;
                            if (stud_pref[i] == 1 && stud_room[i] != "Exec Cubicle") {
                            cout << "Note: Executive Cubicle denied. (Low Merit or No Space Left)" << endl;
                            }
                            else if (stud_pref[i] == 2 && stud_room[i] != "Std Cubicle") {
                            cout << "Note: Standard Cubicle denied. (Low Merit or No Space Left)" << endl;
                            }
                            cout << "Allocated Room: " << stud_room[i] << endl;
                            cout << "Total Monthly Dues: Rs " << stud_bill[i] << endl;
                            found = true;
                            break;
                        }
                    }
                    
                    if (found == false) cout << endl << "Roll Number not found." << endl;
                    cout << endl << "Press any key to continue..." << endl;
                    getch();
                }
                else if (stud_opt == 3) {
                    break; 
                }
                else {
                    cout << "Invalid option. Press any key to try again ..." << endl;
                    getch();
                }
            }
        }
        else if (main_opt == 3) {
            cout << "Shutting down the system..." << endl;
            break;
        }
        else {
            cout << "Invalid option. Press any key to continue..." << endl;
            getch();
        }
    }
    return 0;
}