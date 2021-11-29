#include<iostream>
#include<string>
using namespace std;

void findstr(string str)
{
    int maxlen = 1;
    int l , r ;
    int start = 0;
    int end = str.length();
    for(int i=0; i<end; i++)
    {
        l = i - 1;
        r = i;
        while(l >= 0 && r < end && str[l] == str[r])
        {
            if((r - l + 1) > maxlen)
            {
                start = l;
                maxlen = (r - l + 1);
            }
            l--;
            r++;
        }

        // for Even number of size string

        l = i - 1;
        r = i + 1;
        while(l >= 0 && r < end && str[l] == str[r])
        {
            if((r - l + 1) > maxlen)
            {
                start = l;
                maxlen = (r - l + 1);
            }
            l--;
            r++;
        }
    }
    for(int i=start; i<end; i++)
    {
        cout<<str[i];
    }
    cout<<endl;
}
int main()
{
    string str;
    getline(cin, str);
    findstr(str);
    return 0;
}