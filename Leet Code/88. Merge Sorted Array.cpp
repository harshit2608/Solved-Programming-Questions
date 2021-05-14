class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        std::vector<int> ans;
        ans.reserve(m + n);
        int i = 0, j = 0, k = 0;
        while (i < m && j < n)
        {
            if (nums1[i] <= nums2[j])
            {
                ans[k++] = nums1[i++];
            }
            else
            {
                ans[k++] = nums2[j++];
            }
        }
        while (i < m)
        {
            ans[k++] = nums1[i++];
        }
        while (j < n)
        {
            ans[k++] = nums2[j++];
        }
        for (k = 0; k < (m + n); k++)
        {
            nums1[k] = ans[k];
        }
    }
};