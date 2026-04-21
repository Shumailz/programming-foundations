#include<iostream>
using namespace std;
const int MAX = 100;
bool login();
void menu();
void add_student(string names[], int ages[], int& count);
void view_students(string names[], int ages[], int count);
void add_course(string courses[], int& course_count);
int main(){
    if (login()) 
    return 0;
    string stud_names[MAX];
    int stud_ages[MAX];
    string courses[MAX];
    int stud_count = 0;
    int course_count = 0;
    int choice;
    while(true)
    {
        menu();
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice==1) {
            add_student(stud_names, stud_ages, stud_count);
        }
        else if (choice==2){
            view_students(stud_names, stud_ages, stud_count);
        }
        else if (choice==3){
            add_course(courses, course_count);
        }
        else if (choice==4){
            cout << "Exiting the program." << endl;
            return 0;
        }
        else{
            cout << "Not a valid choice. Please try again." << endl;
        }
    }

}
bool login() 
{
    string user_name, pass;

    for(int i=0; i<3; i++) {
        cout << "Enter username: ";
        cin >> user_name;
        cout << "Enter password: ";
        cin >> pass;

        if (user_name == "shumail_z" && pass == "1234") {
            cout << "Login successful!" << endl;
            return true;
        }
        else  {
            cout << "Invalid credentials. Please try again." << endl;
        }
    }
    cout << "Too many failed attempts.Exiting the program." << endl;
    return false;
}
void menu(){
    cout << "-----------------------------" << endl;
    cout << "University Management System" << endl;
    cout << "-----------------------------" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Add Course" << endl;
    cout << "4. Exit" << endl;
    cout<< "Enter your choice: ";
}
void add_student(string name[], int age[], int& count)
{
    if(count >= MAX){
        cout << "Student limit has reached. Cannot add more students." << endl;
        return;
    }
    cout << "Enter the student name: ";
    cin >> name[count];
    cout << "Enter the student age: ";
    cin >> age[count];
    count++;
    cout << "Student added successfully!" << endl;
}
void view_students(string name[], int age[], int count)
{
    if(count == 0){
        cout << "There are no students to display." << endl;
        return;
    }
    cout << "Student List:" << endl;
    for(int i=0; i<count; i++) {
        cout << "Student" <<i+1<<endl;
        cout << "Name: " << name[i] << endl;
        cout << "Age: " << age[i] << endl;
        cout << "-----------------------------" << endl;
    }
}
void add_course(string course[], int& course_count)
{
    if(course_count >= MAX){
        cout << "Course limit has been reached. Cannot add more courses." << endl;
        return;
    }
    cout << "Enter course name: ";
    cin >> course[course_count];
    course_count++;
    cout << "Course added successfully!" << endl;
}   