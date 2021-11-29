/*
Problem Statment -> find  subarray With maximum Product
*/

#include<iostream>
using namespace std;

int findProduct(int arr[] , int n)
{
    int pro = 1;
    int count_neg = 0;
    int max_neg = 0;
    int count_zero = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            continue;
            count_zero++;
        }
        if(arr[i] < 0)
        {
            count_neg++;
            max_neg = max(max_neg , arr[i]);
        }
        pro = pro * arr[i];
    }
    if(count_zero == n)
    {
        return 0;
    }
    if(count_neg & 1)
    {
        if(count_neg == 1 && count_zero > 0 && count_zero + count_neg == n)
        {
            return 0;
        }
        pro = pro / max_neg;
    }
    return pro;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int maxProduct = findProduct(arr , n);
    cout<<maxProduct;
}



