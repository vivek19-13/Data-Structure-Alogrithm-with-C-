#include<iostream>
using namespace std;
int main(){
    int n = 10;
    char s = 'a';
    //cout<<&n;

    int *arr  = new int[n];
    //cout<<arr<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
}