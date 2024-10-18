class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
       int mxor=0;
        int ans=0;
        for(int i=0;i<nums.size();++i)
        {
            mxor|=nums[i];
        }
 
        int total=pow(2,(int)nums.size());
        int orr=0;
        for(int i=0;i<total;++i)
        {
            int orr=0;
            for(int j=0;j<nums.size();++j)
            {
                if(i&(1<<j)){
                    orr|=nums[j];
                }
            }
 
            if(orr==mxor)
                ans++;
        }
 
        return ans;
    }
    
    
};