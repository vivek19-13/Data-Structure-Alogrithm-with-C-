// you need to find floor element form the array 
//  Explanetion - floor element is the element with cmaes emigiate samaller then key

#include<iostream>
using namespace std;

int Search(int arr[] , int l, int r, int key){
    while(l <= r){
        int mid = (l + r)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            if((arr[mid - 1] < key) && ((mid - 1) <= l ))
            {
                return mid - 1;
            } 
            else
            {
                r = mid - 1;
            }
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<Search(arr , 0, n -1, key)<<endl;
    return 0;
}