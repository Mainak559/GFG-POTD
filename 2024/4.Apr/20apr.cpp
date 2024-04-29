//https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//arr1,arr2 : the arrays
// n, m: size of arrays
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    
    // int size =0;
    // if(n>m)
    //     {
    //         size =n; 
    //     }
    // else
    //     size = m;
    
    // int i=0,j=0,k=0;
    // vector<int> ans(size);
    
    // while(i<n && j < m)
    // {
    //     if(arr1[i] < arr2[j]){
    //         ans[k] =arr1[i];
    //         k++;
    //     }
    //     else if(arr2[j] < arr1[i]) {
    //         ans[k] = arr2[j];
    //         k++;
    //     }
        
    //     i++;
    //     j++;
    // }
    
    // while(i<m)
    //     {
    //         ans[k] = arr1[i];
    //         i++;
    //         k++;
            
    //     }
        
    //     while(j<n)
    //     {
    //         ans[k] = arr2[j];
    //         j++;
    //         k++;
    //     }
        
        
    //     return ans;
    
    
    
    
    int i = 0, j = 0; 
    vector<int> ans;
    while (i < n && j < m) 
    { 
        while(  i+1<n  &&  arr1[i]==arr1[i+1]  )
            i++;
            // avoiding identical elements in arr1
        
        while(  j+1<m  &&  arr2[j]==arr2[j+1]  )
            j++;
            // avoiding identical elements in arr2
      
        if (arr1[i] < arr2[j]) 
            ans.push_back(arr1[i++]);
            //cout << arr1[i++] << " ";
            // printing the smaller number
            // to mantain ascending order
      
        else if (arr2[j] < arr1[i]) 
            ans.push_back(arr2[j++]);
            //cout << arr2[j++] << " ";
      
        else
        {
            ans.push_back(arr2[j++]);
            //cout << arr2[j++] << " "; 
            i++;
            // if arr1[i] is same as arr2[j], number is
            // printed once and i and j are incremented
        }
    } 
    // loop breaks when either i or j reach end of
    // arr1 or arr2 respectively
    
    while(i < n)
    // printing elements of arr1 (if any left)
    {
        while(  i+1<n  &&  arr1[i]==arr1[i+1]  )
            i++;
            // avoiding repetition
        ans.push_back(arr1[i++]);
        //cout << arr1[i++] << " "; 
    }
  
    while(j < m)
    // printing elements of arr2 (if any left)
    {
        while(  j+1<m  &&  arr2[j]==arr2[j+1]  )
            j++;
            // avoiding repetition
        ans.push_back(arr2[j++]);
        //cout << arr2[j++] << " "; 
    }
    return ans;
    
    
    
    
    
    
}

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends