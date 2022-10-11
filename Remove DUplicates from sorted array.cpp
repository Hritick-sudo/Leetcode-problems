class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = i + 1;
        int count = 1;
        int maxValue = INT_MAX;
        while(i<nums.size() && j < nums.size())
        {
            if(nums[i] == nums[j])
            {
                nums[j] = maxValue;
                j++;
            }
            else
            {
                count = count + 1;
                i = j;
                j++;
            }
        }
        sort(nums.begin(),nums.end());
        return count;
    }
};
