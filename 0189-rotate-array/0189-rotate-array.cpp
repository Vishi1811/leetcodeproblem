class Solution {
public:
    // void reverse(vector<int>& a,int i,int j)
    // {
    //     while(i<j)
    //     {
    //         swap(a[i],a[j]);
    //         i++;
    //         j--;
    //     }
    // }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
       
};