class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=0;
        for(int x:nums)
        high+=x;
        while(low<high){
            int mid=low+(high-low)/2;
            int parts=1;
            int sum=0;
            for(int x:nums){
                if(sum+x<=mid){
                    sum+=x;
                }
                else{
                    parts++;
                    sum=x;
                }
            }
            if(parts<=k)
            high=mid;
            else
            low=mid+1;
        }
        return low;
    }
};