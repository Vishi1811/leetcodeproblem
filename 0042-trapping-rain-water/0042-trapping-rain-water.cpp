class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int lmax=0,rmax=0;
        int ans=0;
        while(l<r)
        {
            if(height[l]<=height[r])
            {
                if(lmax>height[l])
                {
                    ans+=lmax-height[l];
                }
                else lmax=height[l];
                l++;

            }
            else
            {
                if(rmax>height[r]) ans+=(rmax-height[r]);
                else rmax=height[r];
                r--;
            }
        }
        return ans;
        
    }
};