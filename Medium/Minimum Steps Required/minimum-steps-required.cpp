//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    long long counta=0,countb=0;
    if(str[0]=='a'){
        counta++;
    }
    else{
        countb++;
    }
    for(int i=1;i<str.length();i++){
        if((str[i]==str[i-1])){
            continue;
        }
        else{
            if(str[i]=='a'){
                counta++;
            }
            else{
                countb++;
            }
        }
    }
    return min(counta,countb) +1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends