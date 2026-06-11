class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int n=s.size();
        string result="";
        while(i<n){
            string t="";
            while(i<n&&s[i]!=' '){
                t+=s[i];
                i++;
            }
            //reverse(t.begin(),t.end());
            for(int i=0;i<t.size()/2;i++){
                swap(t[i],t[t.size()-1-i]);
            }
            result+=t;
            if(i<n) {
                result+=' ';
                i++;
            }
        }
        return result;
    }
};
