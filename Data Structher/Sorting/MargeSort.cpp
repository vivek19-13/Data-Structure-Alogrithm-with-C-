#include<iostream>
using namespace std;

void Merge(int res [] , int start , int mid , int end){

    int n1 = mid - start + 1;
    int n2 = end - mid;

    int arr1[n1];
    int arr2[n2];
    
    for(int i=0; i<n1; i++)
    {
        arr1[i] = res[start  + i];
    }
    for(int i=0; i<n2; i++){
        arr2[i] = res[mid + 1 + i];
    }

    int i = 0;
    int j = 0;


    int k = start;
    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
        {
            res[k++] = arr1[i];
            i++;
        }
        else{
            res[k++] = arr2[j];
            j++;
        }
    }
    while(i < n1){
        res[k++] = arr1[i];
        i++;
    }
    while(i < n2){
        res[k++] = arr2[j];
        j++;
    }
}
void MergeSort(int arr [], int start , int end)
{
    if(start < end){
        int mid = (end + start)/ 2;
        MergeSort(arr, start , mid);
        MergeSort(arr , mid + 1 , end);

        Merge(arr , start , mid , end);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    MergeSort(arr , 0 , n - 1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}