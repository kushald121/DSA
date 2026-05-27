class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int h=0;
        long long water= INT_MIN;
         int start=0;
         int end = n-1;

        while(start<end) {
            h = min(height[start],height[end]);
            long long temp_water = 1LL*h*(end-start);
            water = max(water,temp_water);

            if(height[start]<height[end]) {
                start++;           
                 }
            else {
                end--;
            };
        }

        return water;
    }
};

//TC => O(N) , SC=> O(1)
