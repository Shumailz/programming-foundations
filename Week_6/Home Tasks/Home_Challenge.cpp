#include<iostream>
#include<string>
using namespace std;
int main(){
    string username = "admin";
    string password = "1234";
    string users[3];
    string pass;
    string studs[3];
    int ages[3];
    string courses[3];
    int sCount = 0;
    int cCount = 0;
    bool logged = false;
    for(int k=0; k<3; k++){
        cout<<"Enter Username: ";
        cin>>users[k];
        cout<<"Enter Password: ";
        cin>>pass;
        if(users[k]==username && pass==password){
            cout<<"Login Successful!"<<endl;
            logged = true;
            break;
        }
        else{
            cout<<"Invalid credentials. Attempts left: "<<(2-k)<<endl;
        }
    }
    if(logged){
        int opt;
        while(true){
            cout<<"\n--- University Management System ---\n";
            cout<<"1 -> Add Student\n";
            cout<<"2 -> View Students\n";
            cout<<"3 -> Add Course\n";
            cout<<"4 -> View Courses\n";
            cout<<"5 -> Exit\n";
            cout<<"Enter your choice: ";
            cin>>opt;
            if(opt==1){
                if(sCount<3){
                    cout<<"Enter student name: ";
                    cin.ignore();
                    getline(cin,studs[sCount]);
                    cout<<"Enter student age: ";
                    cin>>ages[sCount];
                    sCount++;
                    cout<<"Student added successfully!"<<endl;
                }
                else{
                    cout<<"Storage full! Cannot add more than 3 students."<<endl;
                }
            }
            else if(opt==2){
                cout<<"\n--- Student List ---\n";
                for(int i=0; i<sCount; i++){
                    cout<<"Name: "<<studs[i]<<", Age: "<<ages[i]<<endl;
         }
            }
            else if(opt==3){
                if(cCount<3){
                    cout<<"Enter course name: ";
                    cin>>courses[cCount];
                    cCount++;
                    cout<<"Course added successfully!"<<endl;
                }
                else{
                    cout<<"Storage full! Cannot add more than 3 courses."<<endl;
                }
            }
            else if(opt==4){
                cout<<"\n--- Course List ---\n";
                for(int i=0; i<cCount; i++){
                    cout<<i+1<<". "<<courses[i]<<endl;
                }
            }
            else if(opt==5){
                cout<<"Terminating program..."<<endl;
                break;
            }
            else{
                cout<<"Invalid choice! Please try again."<<endl;
            }
        }
    }
    else{
        cout<<"Login Failed. Program Terminated."<<endl;
    }
    return 0;
}