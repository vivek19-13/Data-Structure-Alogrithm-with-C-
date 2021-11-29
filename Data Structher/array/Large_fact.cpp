#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> tmp;
    tmp.push_back(1);
    for(int x=2; x<=n; x++)
    {
        int carry =0;
        for(int i=0; i<tmp.size(); i++)
        {
            int p = tmp[i] * x + carry;
            tmp[i] = p%10;
            carry = p/10;
        }
        while(carry)
        {
            tmp.push_back(carry%10);
            carry = carry/10;
        }
    }
    for(int i=tmp.size()-1; i>=0; i--)
    {
        cout<<tmp[i];
    }
    return 0;
}
