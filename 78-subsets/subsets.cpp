class Solution {
public:
void solve(vector<int>&nums,int i,vector<int>&temp,vector<vector<int>>&ans){
    //base case
    if(i==nums.size()){
        ans.push_back(temp);
        return;
    }
    //include case
    temp.push_back(nums[i]);
    solve(nums,i+1,temp,ans);
    //backtrack
    temp.pop_back();
    //exclude
    solve(nums,i+1,temp,ans);
}
     
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(nums,0,temp,ans);
        return ans;
        
    }
};