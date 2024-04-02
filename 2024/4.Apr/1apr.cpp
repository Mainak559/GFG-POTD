//https://www.geeksforgeeks.org/problems/pairs-violating-bst-property--212515/1



 //{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// A Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}

Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User function Template for C++

/*// A Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
  public:

     long long int merge(vector<int>&arr, long long low, long long mid, long long high){
        long long temp[high-low+1];
        long long int k=0;
        long long int i=low;
        long long int j=mid+1;
        long long int inv=0;
        
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
            }
            else{
                inv+= mid-i +1;
                temp[k++]=arr[j++];
            }
        }
        
        while(i<=mid){
            temp[k++]=arr[i++];
        }
        
        while(j<=high){
            temp[k++]=arr[j++];
        }
        
        for(int x=low; x<=high; x++){
            arr[x]=temp[x-low];
        }
        
        return inv;
    }
    
    long long int mergeSort(vector<int>&arr, long long int low, long long int high){
        if(low>=high) return 0;
        long long int inv=0;
        
        long long mid= (low+high)/2;
        
        inv += mergeSort(arr, low, mid);
        inv += mergeSort(arr, mid+1, high);
        inv += merge(arr, low, mid, high);
        
        return inv;
    }
    
    long long int inversionCount(vector<int>&arr, long long N)
    {
        // Your Code Here
        
        long long int ans= mergeSort(arr, 0, N-1);
        
        return ans;
        
        
    }
    void inorder(Node*root, vector<int>&arr){
        if(root){
            inorder(root->left, arr);
            arr.push_back(root->data);
            inorder(root->right, arr);
        }
        return;
    }

    /*You are required to complete below function */
    int pairsViolatingBST(int n, Node *root) {
        // your code goes here
        // store inorder traversal
        vector<int>arr;
        inorder(root, arr);
        
        // i just want to retun count inversion of arr
        long long N=n;
        return int(inversionCount(arr, N));
        
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    getchar();

    while (t--) {

        int n;
        cin >> n;
        getchar();

        string inp;
        getline(cin, inp);

        struct Node* root = buildTree(inp);

        Solution ob;
        int ans = ob.pairsViolatingBST(n, root);
        cout << ans << endl;
    }

    return 0;
}
// } Driver Code Ends