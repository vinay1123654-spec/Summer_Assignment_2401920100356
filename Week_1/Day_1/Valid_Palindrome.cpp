class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()<=1){
            return true;
        }
        string str="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        for(int i=0;i<str.size();i++){
            if(str[i]!=str[str.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};
