#include<iostream>
using namespace std;
main(){
    string book ="";
    int choice;
    for(int x=1;x<=10;x++)
    {
    cout<<"1 Add books\n";
    cout<<"2 View books\n";
    cout<<"3 Borrow books\n";
    cout<<"4 Issue books\n";
    cout<<"5 Exit\n";
    cout<<"Enter Choice: ";
    cin>>choice;
        if(choice==1)
        {
        cout<<"Enter Book Name: ";
        cin>>book;
        cout<<"Book Added Succesfully\n\n";
        }
        else if(choice==2)
        {
        cout<<"Book: "<<book<<endl<<endl;
        }
        else if(choice==3)
        {
        if(book!="")
            {
            cout<<"Book Borrowed: "<<book<<endl;
            book="";
            }
            else
            {
            cout<<"No book is available\n\n";
            }
        }
        else if(choice==4)
        {
            if(book!="")
            {
            cout<<"Book issued: "<<book<<endl;
            book="";
            }
            else
            {
             cout<<"No Book Available\n\n";
            }
        }
        else if(choice==5)
        {
        cout<<"Program End\n\n";
        break;
        }
        else
        {
        cout<<"Invalid Choice\n\n";
        }
    }
}