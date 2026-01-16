class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        
        unordered_map<int,int>hashmap;
        
        for(int i=0;i<arr.size();i++) {
            hashmap.insert({arr[i],i});
        }
        // code here
         for(int i=0;i<arr.size();i++) {
                 if(hashmap.find(target-arr[i])!=hashmap.end() && hashmap[target-arr[i]]!=i) {
                     return true;
                 }
         }
         return false;
    }
};