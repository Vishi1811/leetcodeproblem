class Solution {
public:
    void reverse(vector<int>& a,int i,int j)
    {
        while(i<j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%nums.size();
        reverse( nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
       
};