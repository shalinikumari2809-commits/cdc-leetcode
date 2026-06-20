class Solution {
public:
void solve(vector<int>&arr,int i,vector<int>&temp,vector<vector<int>>&ans,int target){
    //base  case
    if(target==0){
        ans.push_back(temp);
        return;
    }
    if(i==arr.size()||target<0){
        return;
    }
    //take
    temp.push_back(arr[i]);
    solve(arr,i,temp,ans,target-arr[i]);
    //becktack
    temp.pop_back();
    //skip
    solve(arr,i+1,temp,ans,target);
}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(arr,0,temp,ans,target);
        return ans;
        
    }
};