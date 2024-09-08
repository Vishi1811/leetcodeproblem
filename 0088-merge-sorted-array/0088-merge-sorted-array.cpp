class Solution {
private:
    void Swap(vector<int>& nums1, vector<int>& nums2, int ind1, int ind2) {
        if (nums1[ind1] > nums2[ind2]) {
            swap(nums1[ind1], nums2[ind2]);
        }
    }

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = m + n;  // Total length of the two arrays
        int gap = (l + 1) / 2;  // Initialize the gap
        
        while (gap > 0) {
            int left = 0;
            int right = left + gap;
            
            while (right < l) {
                // First array nums1 indices [0, m-1]
                if (left < m && right < m) {
                    Swap(nums1, nums1, left, right);  // Swap within nums1
                }
                // Swap between nums1 and nums2
                else if (left < m && right >= m) {
                    Swap(nums1, nums2, left, right - m);  // Swap between nums1 and nums2
                }
                // Second array nums2 indices [m, m+n-1]
                else if (left >= m) {
                    Swap(nums2, nums2, left - m, right - m);  // Swap within nums2
                }
                left++;
                right++;
            }

            // Reducing the gap for next pass
            if (gap == 1) break;
            gap = (gap + 1) / 2;
        }
        
        // After sorting, merge nums2 into nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};
