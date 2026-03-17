#include <iostream>
using namespace std;
int main(){
    cout<<"\n";
    cout<<"Multiplication Table: 50"<<endl;
    for(int x=50;x<51;x+=1)
    {
        for(int y=1;y<=10;y+=1)
        {
            int z=x*y;
            cout<<x<<" * "<<y<<"="<<z<<endl;
        }
    }
    cout<<"\n";
    cout<<"Multiplication Table : 29"<<endl;
    for(int x=29;x<30;x+=1)
    {
        for(int y=1;y<=10;y+=1)
        {
            int z=x*y;
            cout<<x<<" * "<<y<<"="<<z<<endl;
        }
    } cout<<"Multiplication table : 24"<<endl;
     for(int x=24;x<25;x=x+1)
    {
        for(int y=1;y<=10;y+=1)
      {
       int z=x*y;
        cout<<x<<" * "<<y<<"="<<z<<endl;
      }
    }
}