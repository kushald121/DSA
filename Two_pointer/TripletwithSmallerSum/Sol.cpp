class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
        // Your code goes here
        sort(arr,arr+n);
        int count = 0;
        int size = n-1;
        
        for(int i=0;i<=size-2;i++) {
            int left = i+1;
            int right = size;
            
            while(left<right) {
                int sum2 = arr[i]+arr[left]+arr[right];
                
                if(sum2<sum) {
                    count+=(right-left);
                    left++;
                }

                else {
                    right--;
                }
                
                
                
            }
            
        }
        return count;
    }
};
