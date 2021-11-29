#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ans;
    ans.push_back(1);
    for(int x = 2; x<=n; x++)
    {
        // take one element and multiply that with whole array 
        
        int carry = 0;
        for(int i=0; i<ans.size(); i++)
        {
            int sum = ans[i] * x + carry; 
            ans[i] = sum%10;
            carry = sum/10;
        }
        // add remaining carry into the array
        while(carry)
        {
            ans.push_back(carry%10);
            carry = carry / 10;
        }
    }

    // now reverse the whole array

    reverse(ans.begin() , ans.end());
    for(int i=0; i<ans.size() ; i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
}