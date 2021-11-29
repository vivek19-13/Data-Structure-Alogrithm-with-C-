#include<iostream>
#include<set>
using namespace std;

int FindDiff(int arr [] , int n){
    int target = 2 * n;
    int i = 0;
    int j = 1;
    while(i < n && j < n){
        if(i != j && (arr[i] - arr[j] == target || arr[j] - arr[i] == target))
        {
            return 1;
        }
        else if(arr[i] - arr[j] < target)
        {
            i++;
        }
        else{
            j++;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<FindDiff(arr , n)<<endl;
    return 0;
}
