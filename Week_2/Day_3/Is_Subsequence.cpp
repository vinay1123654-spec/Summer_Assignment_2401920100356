class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n>m) return false;
        int j=0,i=0;
        while(i<m){
            if(j<n&&s[j]==t[i]){
                j++;
            }
            i++;
        }
        if(j==n) return true;
        return false;
    }
};
