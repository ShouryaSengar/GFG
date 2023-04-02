//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	     priority_queue<int> pq;
	     for(int i=0;i<n;i++)
	     {
	         pq.push(arr[i]);
	     }
	     int maxi=pq.top();
	     pq.pop();
	     int maxi2;
	     while(!pq.empty())
	     {
	         if(pq.top()==maxi)
	         {
	             pq.pop();
	         }
	         else
	         {
	             maxi2 = pq.top();
	             break;
	         }
	     }
	     if(pq.empty())
	     {
	         return -1;
	     }
	     else
	     {
	         return maxi2;
	     }
	     
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends