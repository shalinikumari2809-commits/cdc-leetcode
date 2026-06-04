class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    sum=sum+arr[i][j];
                }
                else if(i==n-1-j){
                    sum=sum+arr[i][j];
                }
            }
        }
        return sum;
        
    }
};