// Leet Code: 88. Merg Soreted Array
// Language: C++

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> JJKMerger;
        for (int i = 0; i < m; i++)
            JJKMerger.push_back(nums1[i]), JJKMerger.push_back(nums2[i]);

        sort(JJKMerger.begin(), JJKMerger.end());

        for (int i = 0; i < nums1.size(); i++)
            nums1[i] = JJKMerger[i];
    }
};