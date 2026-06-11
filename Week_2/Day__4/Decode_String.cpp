class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> strs;

        string newstr = "";
        int num = 0;

        for(char ch : s) {
            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if(ch == '[') {
                nums.push(num);
                strs.push(newstr);

                num = 0;
                newstr = "";
            }
            else if(ch == ']') {
                string temp = newstr;

                newstr = strs.top();
                strs.pop();

                int k = nums.top();
                nums.pop();

                while(k--) {
                    newstr += temp;
                }
            }
            else {
                newstr += ch;
            }
        }

        return newstr;
    }
};
