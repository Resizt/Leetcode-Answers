// Leet Code: 88. Merg Soreted Array
// Language: C++

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = 0; i + m < nums1.size(); i++)
            nums1[i + n] = nums2[i];
        sort(nums1.begin(), nums1.end());
    }
};