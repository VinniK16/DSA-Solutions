//Problem link: https://www.geeksforgeeks.org/problems/min-cost-climbing-stairs/1

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        if(n == 0) return 0;
        if(n == 1) return cost[0];
        if(n == 2) return min(cost[0], cost[1]);
        
        vector<int> dp(n, 0);
        
        dp[0] = cost[0]; //start from 0th index
        dp[1] = cost[1];  //strat from 1st index
        
        for(int i = 2; i < n; i++) {
            
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
            
        }
        
        //The top can be reached from either of the last two steps
        return min(dp[n-2], dp[n-1]);
        
    }
};