#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    unordered_set<int> s;
    int sum = 0;
    int f = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        if(sum == 0 || (s.find(sum) != s.end()))
        {
            cout<<"True"<<endl;
            f = 1;
        }
        else
        {
            s.insert(sum);
        }
    }
    if(f == 0)
    {
        cout<<"False"<<endl;
    }
    return 0;
}