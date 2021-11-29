#include<iostream>
using namespace std;
int fab(int n)
{
    if(n == 0)
    {
         return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    return (fab(n - 1) + fab(n - 2)); 
}
void PrintNumber(int n){
    if(n == 0){
        return;
    }
    PrintNumber(n - 1);
    cout<<n<<" ";
}
void PrintNumberRev(int n){
    if(n == 0)
    {
        return;
    }
    cout<<n<<" ";
    PrintNumberRev(n - 1);
}
int main(){
    int n;
    cin>>n;
    cout<<fab(n)<<endl;
    PrintNumber(n);
    cout<<endl;
    PrintNumberRev(n);
    cout<<endl;
}