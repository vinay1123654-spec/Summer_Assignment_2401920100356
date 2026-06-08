class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>fre(26,0);
        for(char c:magazine){
            fre[c-'a']++;
        }
        for(char c: ransomNote){
            if(fre[c-'a']==0){
                return false;
            }
            fre[c-'a']--;
        }
        return true;
    }
};
