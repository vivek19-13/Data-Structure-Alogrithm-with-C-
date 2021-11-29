#include<iostream>
#include<vector>
using namespace std;

vector<int> Search(int nums [], int target , int n)
{
    int left = 0;
    int right = n - 1;
    int start = -1;
    int end = -1;
    while(left <= right)
    {
        int mid = (left + right)/2;
            
        if(nums[mid] == target)
        {
            if(nums[mid - 1] || mid == left){
                start = mid;
            }
            else if(nums[mid + 1] || mid == right)
            {
                end = mid;
            }
        }else if(nums[mid] < target){
            left = mid + 1;
                
        }else {
            right = mid - 1;
        }
    }
    vector<int> ans;
    ans.push_back(start);
    ans.push_back(end);
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    vector<int> ans = Search(arr, key , n);
    for(int i=0; i<2; i++){
        cout<<ans[i];
    }
    return 0;
}