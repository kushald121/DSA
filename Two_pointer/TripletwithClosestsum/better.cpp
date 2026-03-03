class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        int closest= INT_MAX;
        int sum=0;
        int closestsum = INT_MAX;
        
        for(int i=0; i<=n-2; i++) {
            
            int left = i+1;
            int right = n;

            while(left<right) {

                sum= nums[i]+nums[left]+nums[right];
                int diff = abs(target-sum);
                if(diff<closest) {
                  closest = diff;
                  closestsum = sum;
                }

                if(sum==target) {
                    return sum;
                }

                else if(sum<target) {
                left++;
                }
                else {
                    right--;
                }
            }
        }
               

        return closestsum;
    }
};
