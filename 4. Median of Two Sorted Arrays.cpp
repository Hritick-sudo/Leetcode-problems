//Brute Force approach
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        int i = 0;
        int j = 0;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]<=nums2[j])
            {
                a.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                a.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size())
        {
            a.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size())
        {
            a.push_back(nums2[j]);
            j++;
        }
        for(int i = 0; i < a.size() ; i++)
        {
            cout<<a[i]<<" ";
        }
        int s = 0;
        int e = a.size()-1;
        int mid = s + ((e-s)/2);
        double ans = 0.00000;
        if(a.size()%2 != 0)
        {
            ans = a[mid];
        }
        else{
            int secondmid = mid + 1;
            ans = (double)a[mid]+(((double)a[mid+1] - a[mid])/2);
        }
        return ans;
    }
};
