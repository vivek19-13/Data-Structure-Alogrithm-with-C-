#include<iostream>
using namespace std;

/*void Readline(char arr[] , int maxLen)
{
   char st = cin.get(); // cin.get read only one charecter at a time 
    int i=0;
    while(st != '\n')
    {
        arr[i] = st;
        i++;
        if(i == maxLen - 1)
        {
            break;
        }
        st = cin.get();
    }
    // add Null value at the end of the array 
    arr[i] = '\0';
    return;
}*/
int main(){
    char a[100];
    cin.getline(a , 100 , '\n');
    // with the help of left sift (<<) opreter overriding  
    cout<<a;  // cout and print whole char array at a time  
} 
