class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int index=0;
        while(i<n){
            int count=0;
            char current_char=chars[i];
            while(i<n&&current_char==chars[i]){
                   count++;
                   i++;
            }
            chars[index]=current_char;
            index+=1;
            if(count>1){
                string count_str=to_string(count);
                for(char ch:count_str){
                    chars[index++]=ch;
                }
            }
            


        }
        return index;
    }
};
