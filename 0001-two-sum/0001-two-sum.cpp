class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int a,b;
        for(int i=0;i<nums.size();i++)
        {
            a=nums[i];
            b=target-a;
            if(mpp.find(b)!=mpp.end()) return {mpp[b],i};
            mpp[a]=i;  
        }
        return {};
        
    }
};