class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int n= nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                maxi=max(maxi,count);    //ensures it always store the max consecutive 1s
            }else{
                count=0;
            }
        }
        return maxi;
    }
};