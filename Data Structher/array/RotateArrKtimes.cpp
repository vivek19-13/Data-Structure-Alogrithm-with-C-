// Rotate a given Array with k times

#include<iostream>
using namespace std;
int main()
{
    int n , k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }   
    cin>>k;
    k = k%n;
    int key = n - k;
    for(int i=0; i < (n - k + 2); i++)
    {
        swap(arr[i] , arr[key++]);
        if(key >= n)
        {
            key = n - k;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}