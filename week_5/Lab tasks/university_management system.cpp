#include <iostream>
using namespace std;
int main(){
string user_name,student_Name,course_Name;
int password,choice,studentAge;
for(int x=1;x<=3;x+=1)
{
    cout<<"Enter Username: ";
    cin>>user_name;
    cout<<"Enter Password: ";
    cin>>password;
    if(user_name=="admin" && password==1234)
    {
        cout<<"Login Successful \n\n";
        break;
    }
    else
    {
        if(x==3)
        {
            cout<<"Too Many Wrong Attempts. Program End.\n\n";
            return 0;
        }
        cout<<"Wrong Login/Password \n";
    }

}
for(int x=1;x<=4;x+=1)
{
    cout<<"-------University Management System--------\n";
    cout<<"1- Add Student \n";
    cout<<"2- View Student \n";
    cout<<"3- Add Course \n";
    cout<<"4- Exit \n\n";
    cout<<"Enter Choice: ";
    cin>>choice;

if(choice==1)
{
    cout<<"Enter Student Name: ";
    cin>>student_Name;
    cout<<"Enter Student Age: ";
    cin>>student_Age;
    cout<<"Student Added Succesfully \n\n";
}
else if(choice==2)
{
    string check_Name;
    cout<<"Enter Student Name: ";
    cin>>check_Name;
    if(check_Name==student_Name)
    {
        cout<<"Student Name: "<<student_Name<<endl;
        cout<<"Student Age: "<<student_Age<<endl;
    }
    else
    {
        cout<<"No Student Found Record \n\n";
    }
}
else if(choice==3)
    {
        cout<<"Enter Course name: ";
        cin>>course_Name;
        cout<<"Course Add successfuly. \n\n";
    }
else if(choice==4)
{
    cout<<"Program Exit\n\n";
    break;
}    
else 
{
    cout<<"invalid Choice \n\n";
}
}
}