#include <iostream>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray

	long long maxProduct(int *arr, int n)
	{ 
        long long product = 1, ans = 0;
        for(int i = 0; i < n; ++i) 
        {
            if(arr[i] != 0)
                product *= arr[i];
            else
                product = 1;
                ans = max(ans, product);
        }
        product = 1;
        long long ans1 = 0;
        for(int i = n-1; i >= 0; --i) 
        {
                if(arr[i] != 0)
                    product *= arr[i];
                else
                    product = 1;
                    ans1 = max(ans1, product);
        }
        return max(ans, ans1);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  