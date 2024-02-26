//https://www.geeksforgeeks.org/problems/power-set4302/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		 void solve(string s, int ind, string curr, vector<string>&ans){
	        if(ind==s.length()){
	            if(curr.length()>0){
	                ans.push_back(curr);
	            }
	            return;
	        }
	        
	        //take
	        curr.push_back(s[ind]);
	        solve(s, ind+1, curr, ans);
	        
	        //not take
	        curr.pop_back();
	        solve(s, ind+1, curr, ans);
	        
	        return ;
	    }
	
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    string curr="";
		    vector<string>ans;
		    int ind=0;
		    solve(s, ind, curr, ans);
		    
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends