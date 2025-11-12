//Problem link: https://www.geeksforgeeks.org/problems/cricket-average2031/1

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
  public:
    int Average(vector<int> run, vector<string> status) {
        
        int l = run.size();
        int totalRuns = 0;
        int totalOuts = 0;
        
        for(int i = 0; i < l; i++) {
            totalRuns += run[i];
            if(status[i] == "out") {
                totalOuts++;
            }
        }
        
        if(totalOuts == 0) return -1;
        
        int avg = static_cast<int>(ceil(static_cast<double>(totalRuns) / totalOuts));
        
        return avg;
    }
};