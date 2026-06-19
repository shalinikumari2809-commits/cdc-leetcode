class Solution {
public:
void solve(int i , vector<int> & nums , vector<int> & temp , vector<vector<int>> & ans){
    //base case h ye
    if(i>=nums.size()){
        ans.push_back(temp);
        return;
    }
    //include
    temp.push_back(nums[i]);
    solve(i+1,nums,temp,ans);
    //backtracking 
    temp.pop_back();
    //skip duplicate 
    while(i+1<nums.size()&&nums[i]==nums[i+1]){                 //****imp
        i++;
    }
    solve(i+1,nums,temp,ans);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());    //sorting yha isiliye kiye h so that duplicate number adjacent mea ho.(MUST USE)
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,nums,temp,ans);
        return ans;
        
    }
};