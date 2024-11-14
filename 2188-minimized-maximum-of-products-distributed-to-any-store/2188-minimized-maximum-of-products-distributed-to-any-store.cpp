class Solution {
public:
    bool possibleDistribution( vector<int>& q,int d,int shop)
    {
        for(int i=0;i<q.size();i++)
        {
            shop-=(q[i] + d - 1) / d;
            if(shop<0)return false;
        }
        return true;
    }

    int minimizedMaximum(int n, vector<int>& quantities) {

        int length=quantities.size();
        int start=1;
        int end=*max_element(quantities.begin(),quantities.end());
        while(start<=end)
        {
            int mid=start+(end-start)/2;
             if (possibleDistribution(quantities, mid, n))
                end = mid - 1;
            else 
                start = mid + 1;
        }
        return start;
        
    }
};