// Problem Link - https://leetcode.com/problems/binary-search/

#define ll int

class Solution {
public:
    int search(vector<int>& nums, int target) {
        ll start = 0, end = nums.size()-1;
        while(start<=end)
        {
            ll mid = start + (end-start)/2;
            if(nums[mid]>target)
                end = mid-1;
            else if(nums[mid]<target)
                start=mid+1;
            else
                return mid;
        }
        return -1;
    }
};