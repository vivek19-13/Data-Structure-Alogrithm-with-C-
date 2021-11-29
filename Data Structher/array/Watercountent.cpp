#include<iostream>
#include<vector>
using namespace std;

int FindWater(vector<int> &arr){

    int left = 0;
    int right =  arr.size() - 1;
    int ans = 0;
    while(left < right)
    {
        int lh = arr[left];
        int rh = arr[right];

        int minHight = min(lh , rh);

        ans = max(ans, (minHight * (right - left)));
        if(lh  < rh){
            left++;
        }
        else{
            right--;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
   cout<<FindWater(arr)<<endl;
    return 0;
}