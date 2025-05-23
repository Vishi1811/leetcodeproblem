class Solution {
private:
    void reverse(vector<int>&arr,int s, int e)
    {
        while(s<e)
        {
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            e--;
            s++;
        }
    }
public:

    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        k = k % n; 
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }
};