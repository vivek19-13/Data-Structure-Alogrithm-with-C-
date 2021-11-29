#include<iostream>
using namespace std;

int Partition(int arr [] , int start , int end){
    int i= start - 1;
    int poivt = arr[end];
    for(int j=start; j<end; j++){
        if(arr[j] < poivt){
            i++;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    i++;
    int tmp = arr[i];
    arr[i] = arr[end];
    arr[end] = tmp;
    return i;
}

void QuicSort(int arr[] , int start , int end){

    if(start < end){
        int p = Partition(arr , start , end);
    
        QuicSort(arr , start , p - 1);
        QuicSort(arr , p + 1 , end);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    QuicSort(arr, 0 , n - 1);
    for(int i=0; i<n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}