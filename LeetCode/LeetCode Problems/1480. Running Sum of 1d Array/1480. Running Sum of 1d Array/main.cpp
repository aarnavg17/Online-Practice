//
//  main.cpp
//  1480. Running Sum of 1d Array
//
//  Created by Aarnav Gupta on 13/04/21.
//

#include <iostream>

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++)
            nums[i] += nums[i-1];
        return nums;
    }
};

