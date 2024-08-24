class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //this is most optimum solution for this question take O(n)time complexity and O(1) space 
        // int ans=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     ans=ans^nums[i];
        // }
        // return ans;

        //second method take O(nlon (n/2)+1)+n/2+1 tc and n/2+1 sc 
        map<int, int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            if(it.second==1)
                return it.first;
        }
        return 0;
        
    }
};