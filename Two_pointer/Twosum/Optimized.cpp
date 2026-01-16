//Only works if original indices are not asked

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        
        sort(nums.begin(),nums.end());
        int start =0;
        int end = nums.size()-1;

        while(start<=end) {
            int sum = nums[start]+nums[end];
            if(sum==target) {
                return {start,end};
            }

            if(sum>target) {
                end--;
            }

            else {
                start++;
            }
        }
        return {-1,-1}; 
    }
     
};