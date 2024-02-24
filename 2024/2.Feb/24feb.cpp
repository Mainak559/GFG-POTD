//https://www.geeksforgeeks.org/problems/maximum-sum-problem2211/1



//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            if(n==0)
                return 0;
           vector<int> maxSum(n+1 ,0);
           
           for(int i=1 ; i <= n ;i++)
           {
               maxSum[i] = max(i , maxSum[i/2] + maxSum[i/3] + maxSum[i/4]);
           }
           
           return maxSum[n];
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends