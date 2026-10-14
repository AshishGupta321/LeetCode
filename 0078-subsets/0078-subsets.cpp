class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        function<void(int)> backtrack=[&] (int index){
            if(index==nums.size()){
                ans.push_back(curr);
                return;
            }
            backtrack(index+1);
            curr.push_back(nums[index]);
            backtrack(index+1);
            curr.pop_back();
        };
        backtrack(0);
        return ans;
    }
};