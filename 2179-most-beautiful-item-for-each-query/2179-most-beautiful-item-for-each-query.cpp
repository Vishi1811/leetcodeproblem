class Solution {
public:
    
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
         int m=items.size();
        int n=queries.size();
        vector<int>ans(n,0);
       
      
        sort(items.begin(),items.end());
        int maxBeautyTillIndex=items[0][1];
        for(int i=0;i<m;i++)
        {
            maxBeautyTillIndex=max(maxBeautyTillIndex,items[i][1]);
            items[i][1]=maxBeautyTillIndex;
        }
        for(int i=0;i<n;i++)
        {
            int maxBeauty=0;
           int s=0;
           int e=m-1;
           while(s<=e)
           {
                int mid=s+(e-s)/2;
                if(items[mid][0]>queries[i])
                {
                    e=mid-1;
                }
                else 
                {
                    maxBeauty=items[mid][1];
                    s=mid+1;
                }
                
           }
           ans[i]=maxBeauty;
        }
        

        return ans;
    }
};