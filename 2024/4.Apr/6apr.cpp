//https://www.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter1322/1




class Solution {
  public:
    // Function to count number of ways to reach the nth stair
    // when order does not matter.
    long long countWays(int n) {
        // your code here
        // your code here
        long long res[n+1];
        res[0]=1;
        res[1]=1;
        
        for(int i=2;i<=n;i++){
            res[i]=res[i-2]+1;
        }
        return res[n];
    }
};