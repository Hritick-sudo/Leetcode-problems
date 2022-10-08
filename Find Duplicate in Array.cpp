class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans1 = 0;
        int n = nums.size();
        vector<int> ans(n,0);
        for(int i = 0 ; i < n ; i++)
        {
            ans[nums[i]]+=1;
        }
        for(int i = 0 ; i < n; i++)
        {
            if(ans[i] > 1)
            {
                return i;
            }
        }
        return ans1;        
    }
};
