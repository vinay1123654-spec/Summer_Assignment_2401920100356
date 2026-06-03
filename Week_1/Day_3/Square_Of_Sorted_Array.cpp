class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int left=0;
        int right=n-1;
        int pos=n-1;
        while(left<=right){
            long long temp=nums[left]*nums[left];
            long long var=nums[right]*nums[right];
            if(temp>var){
                ans[pos]=temp;
                left++;
            }
            else{
                ans[pos]=var;
                right--;
            }
            pos--;
        }
        return ans;
    }
};
