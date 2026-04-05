class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        int zeroes = mpp[0];
        int ones = mpp[1];
        int twos = mpp[2];

        for (int i = 0; i < zeroes; i++) {
            nums[i] = 0;
        }

        for (int i = 0 + zeroes; i < zeroes + ones; i++) {
            nums[i] = 1;
        }

        for (int i = 0 + zeroes + ones; i < nums.size(); i++) {
            nums[i] = 2;
        }
    }
};
