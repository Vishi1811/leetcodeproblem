class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        for(int i=0;i<n;i++)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            while( i<n-1 && end>=intervals[i+1][0] )
            {
                i++;
                // start=min(start,intervals[i][0]);
                end=max(end,intervals[i][1]);
            }
            ans.push_back({start,end});
        }
        return ans;
    }
};