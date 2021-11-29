#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> tmp;
	tmp.push_back(10);
	tmp.push_back(20);
	for(auto &x : tmp)
	{
		x++;
	}
	for(auto i: tmp)
	{
		cout<<i<<" ";
	}
}