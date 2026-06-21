class Solution {
public:
void solve(int open,int close,int n,string &temp,vector<string>&ans){   // **ans string hoga
    if(temp.size()==2*n){
        ans.push_back(temp);
        return;
    }
    //take "("
    if(open<n){
        temp.push_back('(');           //mistake(""nhi, use'')
        solve(open+1,close,n,temp,ans);
        temp.pop_back();
    }
    //take ")"
    if(close<open){
        temp.push_back(')');
        solve(open,close+1,n,temp,ans);
        temp.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        solve(0,0,n,temp,ans);
        return ans;
        
    }
};