class Solution {
public:
    void permute(vector<int>& nums,int i,vector<vector<int>>& ans) {
        if(i>=nums.size()){
            ans.push_back(nums);   //yha pe cout nhi likhna h ****
            return;
        }
        for(int j=i;j<nums.size();j++){
            //choose(do it by yourself)
            swap(nums[i],nums[j]);
            //recursion will do
            permute(nums,i+1,ans);
            //backtrack
            swap(nums[i],nums[j]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(nums, 0, ans);
        return ans;
    }
};