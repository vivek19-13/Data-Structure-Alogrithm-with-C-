// Add two number without using + (arthmetic opretion) opreter

#include<iostream>
using namespace std;
int Sum(int x, int y){

    while(y)
    {
        // find the carrry 
        int carry = x & y;

        // do the addition
        x = x ^ y;

        // hold the left sifted carray
        y = carry << 1;
    }   
    return x;
}
int main(){
    int x , y;
    cin>>x>>y;
    cout<<Sum(x , y)<<endl;
    return 0;
}