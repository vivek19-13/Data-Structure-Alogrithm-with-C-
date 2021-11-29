#include<iostream>
#include<algorithm>
using namespace std;

bool com(int a , int b){ // function to give your own function to compair
    return (a > b);
}

int main(){
    int n = 9;
    int arr[] ={3, 4, 4, 4, 4, 4, 5, 1, 2};
    int key;
    cin>>key;

//  find function returns memory address   

     int * it = find(arr, arr + n, key);
    
    int index = it - arr;     // just subtract new address to previous address
    if(index >= n - 1){
        cout<<"key not found"<<endl;
    }
    else{
        cout<<index<<endl;
    }
   
   // binary_search function to search any given key 

    bool f = binary_search(arr, arr + n , key);  // function return boolen (true or false) value. 
    if(f){
        cout<<"Elemen found";
    }
    else{
        cout<<"Element not found";
    }

    // To get the index of a present Element 

    // two function are there lower_bound(start , end , key) , upper_bound(start, end, key) 

    int* x = lower_bound(arr, arr + n, key); // function returns the first accurence of key in array;

    int* y = upper_bound(arr, arr+ n, key); // function reurns the Just Greter Element accurence of key in array;

    cout<<x-arr<<endl;
    cout<<y-arr<<endl;

    // sort Function by which you can sort a array in a O(nlogn) time complexity e.g: sort(start , end);

    sort (arr , arr+n , com); // here com is not a function call it's just function passing to another function 
                                // as a perameter
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";    
    }
}