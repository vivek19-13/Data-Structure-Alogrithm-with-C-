#include<iostream>
using namespace std;

void print(string input , string output)
{
    if(input.empty())
    {
        cout<<output<<endl;
        return;
    }
    print(input.substr(1) , output);
    print(input.substr(1) , output + input[0]);
}
int main()
{
    string input;
    getline(cin , input);
    string output;

    print(input , output);

    return 0;
}
