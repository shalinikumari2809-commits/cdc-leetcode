class Solution {
public:
void solve(int i,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans,int target){
    if(target==0){
        ans.push_back(temp);
        return;
    }
    if(i==arr.size()||target<0){
        return;
    }
    //take
    temp.push_back(arr[i]);
    solve(i+1,arr,temp,ans,target-arr[i]);
    //backtrack
    temp.pop_back();
    //skip duplicate
    while(i+1<arr.size()&& arr[i]==arr[i+1]){
        i++;
    }
    solve(i+1,arr,temp,ans,target);
}
    vector<vector<int>> combinationSum2(vector<int>arr, int target) {
        sort(arr.begin(),arr.end());
        vector<int>temp;
        vector<vector<int>>ans;
        solve(0,arr,temp,ans,target);
        return ans;
        
    }
};