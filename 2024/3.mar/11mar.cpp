//https://www.geeksforgeeks.org/problems/count-pairs-sum-in-matrices4332/1


//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    int ans=0;
	    int r1=0, c1=0; // top left
	    int r2=n-1, c2=n-1; // bottom right
	    
	    while(r1<n && r2>=0){
	        int sum=mat1[r1][c1] + mat2[r2][c2];
	        if(sum==x){
	            ans++;
	            c1++;
	            c2--;
	        }
	        else if(sum<x){
	            c1++;
	        }
	        else{
	            c2--;
	        }
	        
	        if(c1==n){
	            r1++;
	            c1=0;
	        }
	        if(c2<0){
	            r2--;
	            c2=n-1;
	        }
	    }
	    
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
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends



