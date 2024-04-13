//https://www.geeksforgeeks.org/problems/reverse-bits3556/1


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        string s="";
        for(int i=0;i<=31;i++){
            if(x & (1<<i)){
                s='1'+s;
            }
            else{
                s='0'+s;
            }
        }
        
        long long ans=0;
        for(int i=0;i<=31;i++){
            if(s[i]=='1'){
                ans+=pow(2,i);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends