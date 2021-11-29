// time - O(n)
// space - O(1)

#include<iostream>
using namespace std;

int MaxProfit(int arr[] , int n){

    int i=0;
    int profit = 0;

   
    while(i < n){

         // Find the index where we can buy 
        while((i < n -1) && arr[i] >= arr[i + 1]){
            i++;
        }
        int buy = i++;
    
    // Find the index where we can sell  

        while((i < n) && arr[i] > arr[i - 1]){
            i++;
        }
        int sell = i - 1;

        profit += (arr[sell] - arr[buy]);
    }
    return profit;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<MaxProfit(arr , n)<<endl;
    return 0;
}