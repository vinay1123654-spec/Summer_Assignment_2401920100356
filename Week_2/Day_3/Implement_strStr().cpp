class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        if(m>n){
            return -1;
        }
        string s="";
        for(int i=0;i<m;i++){
            s+=haystack[i];
        }
        int j=0;
        for(int i=m;i<n;i++){
            if(s==needle){
                return j;
            }
            else{
                s.erase(0,1);
                s+=haystack[i];
                j++;
            }
        }
        if(s==needle) return j;
        return -1;
        
    }
};
