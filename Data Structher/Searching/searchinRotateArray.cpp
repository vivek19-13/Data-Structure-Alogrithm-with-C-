#include<iostream>
using namespace std;
int Search(int left , int right , int arr [] , int key , int n)
{
    while(left <= right){
        int mid = left + (right - left)/2;
        if(key == arr[mid]){
            return mid;
        }
        else if(key < arr[mid]){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return -1;
}
int FindStart(int arr [], int n){
    for(int i=1; i<n; i++)
    {
        if(arr[i - 1] > arr[i]){
            return i;
        }
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    int k = FindStart(nums , n);
    int key;
    cin>>key;
    int x = Search(0 , k - 1 , nums , key , n);
    int y = Search(k , n - 1 , nums , key , n);
    if(x == -1 ){
        if(y == -1){
            cout<<-1<<endl;
        }
        else{
            cout<<y<<endl;
        }
    }
    else{
        cout<<x<<endl;
    }
    return 0;
}