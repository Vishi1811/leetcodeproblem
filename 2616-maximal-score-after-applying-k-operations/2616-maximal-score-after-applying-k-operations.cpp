class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto it:nums)
        {
            pq.push(it);
        }
        long long ans=0;
        while(k--)
        {
            int top=pq.top();
            ans+=top;
            pq.pop();
            pq.push(top%3==0?top/3:(top/3)+1);
        }
        return ans;
        
    }
};