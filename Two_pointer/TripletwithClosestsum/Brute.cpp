#include <bits/stdc++.h> 
int closest3Sum(vector<int> &arr, int n, int target)
{
    // Write your code here
        sort(arr.begin(),arr.end());
        int closest= INT_MAX;
        int sum=0;
        int smallersum=INT_MAX;

        for(int i=0; i<n-2; i++) {
            for(int j=i+1; j<n-1;j++) {
                for(int k=j+1;k<n;k++) {
                    sum = arr[i]+arr[j]+arr[k];
                    int value = abs(target-sum);

                    if(value<closest || (value==closest && sum<smallersum))
                        {
                        closest=value;
                        smallersum=sum;

                    }
                }
            }
            
           

        
    }
    return smallersum;

}
