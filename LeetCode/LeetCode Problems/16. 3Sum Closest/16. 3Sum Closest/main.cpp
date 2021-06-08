//
//  main.cpp
//  16. 3Sum Closest
//
//  Created by Aarnav Gupta on 09/06/21.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = INT8_MAX, ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int l = i+1, r = nums.size() - 1;
            
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                int diff = abs(target - sum);
                if (diff < closest) {
                    closest = diff;
                    ans = sum;
                }
                if (sum < target) l++;
                else r--;
            }
        }
        return ans;
    }
};
