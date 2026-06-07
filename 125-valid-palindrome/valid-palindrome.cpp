class Solution {
public:
    bool isPalindrome(string s) {
        int st=0;
        int e=s.size()-1;
        while(st<e){
            if(!isalnum(s[st])){    //isAlphaNumeric ki jgh isalnum use kro(
                st++;
                continue;            //continue func ka isiliye use hua h taki aage v agr alnumeric character aati h to usko v ignore krke aage bdh jayega
            }
            if(!isalnum(s[e])){
                e--;
                continue;
            }
            if(tolower(s[st])!=tolower(s[e])){    //tolower jo h ye show krega A & a are same
                return false;
            }else{
                st++;
                e--;
            }
        }
        return true;  //isko while loop ke bahr rkhna hoga nhi to andr rkhne pe first iteration ke baad hi fun return kr dega
    }   
    
};