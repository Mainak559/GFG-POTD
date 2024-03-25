//https://www.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void help(vector<string> &ans,int zero,int one,string temp,int N){
        if(temp.length()==N){
            ans.push_back(temp);
            return;
        }
        if(one>zero)help(ans,zero+1,one,temp+'0',N);
        help(ans,zero,one+1,temp+'1',N);
        
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string> ans;
	    help(ans,0,1,"1",n);
	    sort(ans.begin(),ans.end());
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends