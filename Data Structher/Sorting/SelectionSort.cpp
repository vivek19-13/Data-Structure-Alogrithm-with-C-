#include<iostream>
using namespace std;
void selectSort(int arr[] , int n){

    int i , j , k;
    for(int i=0; i<n; i++)
    {
        for(int j = i = k; j<n; j++)
        {
            if(arr[j] < arr[k]){
                k = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[k];
        arr[k] = tmp;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[n];
    }
    selectSort(arr , n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}