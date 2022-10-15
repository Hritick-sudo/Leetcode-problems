class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = nums.size();
        for(int i = 0 ; i < nums.size();i++)
        {
            if(nums[i] == val)
            {
                nums[i] = INT_MAX;
                count--;
            }
        }
        int i = 0;
        int j = nums.size()-1;
        while(i < j)
        {
            if(nums[i] != INT_MAX && i<j)
            {
                i++;
            }
            if(nums[j] == INT_MAX && i < j)
            {
                j--;
            }
            if(nums[i] == INT_MAX && nums[j] != INT_MAX)
            {
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        return count;
    }
};
