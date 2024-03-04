//https://www.geeksforgeeks.org/problems/need-some-change/1

//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

/*Function to swap array elements
 * arr : array input
 * n : number of elements in array
 */
class Solution
{
public:
    void swapElements(int arr[], int n)
    {

        // Your code here
        int i = 0;
        int j = i + 2;
        while (i < n && j < n)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
};

//{ Driver Code Starts.

// Driver code to test swapElements
int main()
{

    int testcase;

    cin >> testcase;

    while (testcase--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        // calling function to swap the array swap elements
        obj.swapElements(arr, n);

        // Printing the modified array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
// } Driver Code Ends