#include<iostream>
using namespace std;

int InsertSort(int *arr , int n)
{
    for(int i=1; i<n; i++)
    {
        int k = i -1;
        int x = arr[i];
        while(k > -1 && arr[k] > x)
        {
            arr[k + 1] = arr[k];
            k--;
        }
        arr[k+1] = x;
    }
    return *arr;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    InsertSort(arr , n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}