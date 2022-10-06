// Brute Force
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> a;
        for(int i = 0; i <nums.size();)
        {
            if((i+1<nums.size()) && (nums[i] == nums[i+1]))
            {
                a.push_back(nums[i]);
                i = i + 2;
            }
            else
            {
                i++;
            }
        }
        return a;
    }
};
