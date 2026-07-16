class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans= "";

        while(columnNumber>0){

            // Excel columns are 1-based (A=1, ..., Z=26),
            // but % 26 works with 0-based values (A=0, ..., Z=25).
            // So subtract 1 before modulo to handle 'Z' correctly.
            columnNumber--;

            char ch = 'A'+ (columnNumber % 26);

            ans+=ch;
            columnNumber=columnNumber/26;
            

        }
         

         reverse(ans.begin(),ans.end());
         return ans ;
    }
};
   \