#include<iostream>
#include<unordered_map>
using namespace std;

 void FindSubArray(int arr [] , int n , int target){

    unordered_map<int , int>map;
    int start = 0;
    int end = -1;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == target){
            end = i;
        }
        else{
            if(map.find(sum - target) != map.end()){
                start = map[sum - target] + 1;
                end = i;
            }
        }
        map[sum] = i;
    }
    cout<<start<<"to"<<end<<endl;
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
    int target;
    cin>>target;
    FindSubArray(arr , n , target);
    return 0; 
}