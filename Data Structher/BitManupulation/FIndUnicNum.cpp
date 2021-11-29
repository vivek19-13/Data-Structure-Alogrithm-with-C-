#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int count = 0;
    while(n--)
    {

        int a; 
        cin >> a;
        count = count^a; 
    }
    cout<<count<<endl;

    // cout<<__builtin_pospcount(n)<<endl; //

    return 0;
}