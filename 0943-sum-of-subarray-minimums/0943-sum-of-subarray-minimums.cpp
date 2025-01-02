class Solution {
public:
    vector<int> findNSE(vector<int>arr,int n)
    {
        vector<int>ans(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])st.pop();
            ans[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> findPSE(vector<int>arr,int n)
    {
        vector<int>ans(n);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>arr[i])st.pop();
            ans[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> NSE(n);
        NSE=findNSE(arr,n);
        vector<int>PSE(n);
        PSE=findPSE(arr,n);
        long long sum=0;
        int mod = 1e9 + 7;
        for(int i=0;i<n;i++)
        {
            long long left = i - PSE[i]; // Number of subarrays ending at i
            long long right = NSE[i] - i; // Number of subarrays starting at i
            long long contribution = (left * right) % mod; 
            sum = (sum + (contribution * arr[i]) % mod) % mod;
        }
        return (int)sum;

    }
};