#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number Which you want to ckeck: ";
    cin>>n;

    // here, using and (&) operator to check  the last bit 
    // of the given number 

    if(n & 1 == 0){ 
        cout<<"Given number is Odd";
    }
    else{
        cout<<"Given NUmber Is Even";
    }
    return 0;
}
