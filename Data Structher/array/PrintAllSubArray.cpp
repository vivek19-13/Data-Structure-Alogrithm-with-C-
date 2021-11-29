//   vivek kumar (19mcmc13)
//  print all posible subarray of an array 
// O(n^2) with constanat space using recursion 

#include<iostream>
#include<climits> // for using INT_MIN or INT_MAX
using namespace std;

void PrintSubArray(int arr[], int start , int end , int n)
{
    if(end == n)
    {
        return;
    }
    else if(start > end)
    {
        PrintSubArray(arr , 0 , end + 1 , n);
    }
    else
    {
        for(int i = start; i <= end; i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<endl;
        PrintSubArray(arr , start + 1 , end, n);
    }
    return;
}
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    PrintSubArray(arr , 0 , 0 , n);
    return 0;
}