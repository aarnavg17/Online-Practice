//
//  main.cpp
//  76. Minimum Window Substring
//
//  Created by Aarnav Gupta on 27/04/21.
//

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length() == 0 or t.length() == 0)
            return "";
        
        unordered_map<char, int> D;
        unordered_map<char, int> win;
        
        for(char c: t)
            D[c]++;
        
        int l = 0, r = 0, formed = 0, req = D.size();
        
        int ans[] = {-1, 0, 0};
        
        while(r < s.size()) {
            win[s[r]]++;
            
            if(D.count(s[r]) && D[s[r]] == win[s[r]])
                formed++;
            
            while(l <= r and formed == req) {
                win[s[l]]--;
                
                if(ans[0] == -1 or ans[0] > r - l + 1) {
                    ans[0] = r - l +1;
                    ans[1] = l;
                    ans[2] = r;
                }
                
                if(D.count(s[l]) and D[s[l]] > win[s[l]])
                    formed--;
                l++;
            }
            r++;
        }
        
        return ans[0] == -1 ? "" : s.substr(ans[1], ans[0]);
    }
};
