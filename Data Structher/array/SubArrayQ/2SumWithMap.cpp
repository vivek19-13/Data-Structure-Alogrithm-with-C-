#include<iostream>
#include<unordered_map>
using namespace std;
void FindPair(int arr[] , int n , int target){
    
    int start = 0;
    int end = -1;
    unordered_map<int , int>map;
    for(int i=0; i<n; i++)
    {
        if(map.find(target - arr[i]) != map.end()){

            start = map[target - arr[i]];
            end = i;
            break;
        }
        map[arr[i]] = i; 
    }
    cout<<start<<" "<<end<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    FindPair(arr , n , target);
    return 0;
}