#include<all_include.h>
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        multiset<int> hs;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(hs.count(nums[i])>0)
                ans = nums[i];
            else hs.insert(nums[i]);
        }
        return ans;
    }
};