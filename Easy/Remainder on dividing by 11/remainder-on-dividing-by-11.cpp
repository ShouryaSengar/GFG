//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{
    // #pragma GCC optimize("Ofast")
    // #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
    // #pragma GCC optimize("unroll-loops")
public:
    int xmod11(string x)
    {
        // ios_base::sync_with_stdio(0);
        // cin.tie(NULL);
        
        int res = 0;
        for (int i = 0; i < x.length(); i++)
        {
            res = (res * 10)%11 + x[i] - '0';
        }
        return res%11;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends