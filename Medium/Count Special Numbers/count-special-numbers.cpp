//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> a) {
        // Code here
        int ctn=0;
        unordered_map<int,int>m;
        for(int i=0;i<N;i++)
        {
            m[a[i]]++;
        }
        for(int i=0; i<N; i++)
        {
            m[a[i]]--;
            if(m[a[i]]==0)
            {
                m.erase(a[i]);
            }    
            for(int j=1; j<=sqrt(a[i]); j++)
            {
                if(a[i]%j==0)
                {
                    if((m.find(j) != m.end()) || (m.find(a[i] / j) != m.end()))
                    {
                        ctn++;
                        break;
                    }
                }
            }
            m[a[i]]++;
        }
        return ctn;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends