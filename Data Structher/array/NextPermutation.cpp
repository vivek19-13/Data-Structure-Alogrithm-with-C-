/*
Problem Statement  ->  Find the Next Permutation

Discription -> Implement next permutation, which rearranges numbers into the lexicographically 
next greater permutation of numbers.
If such an arrangement is not possible, it must rearrange it as the lowest possible order 
(i.e., sorted in ascending order).
The replacement must be in place and use only constant extra memory.
*/

#include<iostream>
using namespace std;

void revArr(int *arr, int l , int r)
{
    while(l < r )
    {
        swap(arr[l] , arr[r]);
    }
}
void NextPurmut(int arr[] , int n)
{
    int i = n - 2;

    // 1 -  Find the number with is minimum of it's right element

    while(i >= 0 && arr[i] >= arr[i + 1])
    {
        i--;
    }

    // 2   -  find the number which is greter the arr[i]
    if(i >= 0)
    {
        int j = n - 1;
        while( j>=0 && arr[j] <= arr[i])
        {
            j--;
        }
         // 3   -  swap them 
        swap(arr[i] , arr[j]);
    }

    // 4 -- reverse the array from i to end
    revArr(arr , i + 1 , n - 1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }    
    NextPurmut(arr , n);
    return 0;
}