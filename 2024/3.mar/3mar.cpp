// https://www.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

     static bool comparator(string first,string second)
    {
       
        return first + second > second + first;
    }
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(int n, vector<string> &arr) {
	    // code here
	  
	  
	   
	   sort(arr.begin(),arr.end(),comparator);
	    string temp="";
	    for(int i = 0 ; i < arr.size() ;i++)
	    {
	        temp += arr[i];
	    }
	    
	   return temp;
	   
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(n, arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends