//https://www.geeksforgeeks.org/problems/three-way-partitioning/1


//User function template for C++

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int i=0,j=0,k=array.size()-1;
        while(i<=k){
            if(array[i]<a){
                swap(array[i++],array[j++]);
            }
            else if(array[i]>b){
                swap(array[i],array[k--]);
            }
            else i++;
        }
    }
};