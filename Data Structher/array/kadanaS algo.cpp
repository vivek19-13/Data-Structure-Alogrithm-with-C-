#include<iostream>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    /*int LMax = 0;
    int GMax = 0;
    for(int i=0; i<n; i++)
    {
        LMax = max(arr[i] , arr[i]+LMax);
        if(LMax > GMax)
        {
            GMax  = LMax;
        }
    }
    return GMax;*/
    int currSum = arr[0];
    int maxSum = arr[0];
    for(int i=0; i<n; i++)
    {
        currSum += arr[i];
        if(currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum , currSum);
    }
    return maxSum;
}

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}