
#include <iostream>
using namespace std;
int main(){
    int number,digits,count=0;
     cout<<"Enter the Numbers: ";
     cin>>number;
     cout<<"Enter the Digit: ";
     cin>>digits;
     for(int x=number;x>0;x=x/10)
    {
        int num2=x%10;
           if (num2==digits)
        {
            count=count+1;
        }
    }
    cout<<"Frequency of the  "<<digits<<" in "<<number<<" is "<<count;
}
