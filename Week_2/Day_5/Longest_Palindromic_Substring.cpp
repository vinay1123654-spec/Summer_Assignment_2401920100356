class Solution {
public:
    string longestPalindrome(string s) {
        int maxlen=0,start=0;
        for(int i=0;i<s.size();i++){
            int len1=extend(s,i,i);
            int len2=extend(s,i,i+1);
            int len=max(len1,len2);
            if(len>maxlen){
                maxlen=len;
                start=i-(len-1)/2;
            }
        }
        return s.substr(start,maxlen);
    }
    int extend(string s,int left,int right){
        while(left>=0&&right<s.size()&&s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
};
