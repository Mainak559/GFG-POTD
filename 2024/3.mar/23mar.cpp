//https://www.geeksforgeeks.org/problems/fibonacci-series-up-to-nth-term/1



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        vector<int>ans(n+1);
        ans[0]=0;
        ans[1]=1;
        
        int mod=1e9+7;
        for(int i=2;i<=n;i++){
            int x= ans[i-1]+ans[i-2];
            x%=mod;
            ans[i]=x;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends