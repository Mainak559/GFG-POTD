//https://www.geeksforgeeks.org/problems/game-with-string4100/1


//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char , int> mpp;
        for(auto i:s) mpp[i]++;
        
        multiset<int> st;
        for(auto i:mpp)
        st.insert(i.second);
        
        
        while(k--)
        {
            auto it = st.rbegin();
            int x = *it;
            st.erase(st.find(x));
            
            
            --x;
            st.insert(x);
        }
        
        int p=0;
        for(auto i:st){
            p += i*i;
        }
        
        return p;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends