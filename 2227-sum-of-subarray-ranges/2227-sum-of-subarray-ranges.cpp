class Solution {
public:
     vector<int>findNGE(vector<int>&arr,int n)
    {
        stack<int>st;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]<=arr[i])st.pop();
            ans[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int>findPGE(vector<int>&arr,int n)
    {
        stack<int>st;
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]<arr[i])st.pop();
            ans[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;
    }
    long long sumSubarrayMax(vector<int>&arr,int n)
    {
        vector<int> NGE(n);
        vector<int> PGE(n);
        NGE=findNGE(arr,n);
        PGE=findPGE(arr,n);
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            long long contribution=(NGE[i]-i)*(i-PGE[i]);
            sum+=(contribution*arr[i]);
        }
        return sum;
    }
    vector<int>findNSE(vector<int>&arr,int n)
    {
        stack<int>st;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])st.pop();
            ans[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int>findPSE(vector<int>&arr,int n)
    {
        stack<int>st;
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>arr[i])st.pop();
            ans[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;
    }
    long long sumSubarrayMin(vector<int>&arr,int n)
    {
        vector<int> NSE(n);
        vector<int> PSE(n);
        NSE=findNSE(arr,n);
        PSE=findPSE(arr,n);
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            long long contribution=(NSE[i]-i)*(i-PSE[i]);
            sum+=(contribution*arr[i]);
        }
        return sum;
    }
    
    
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        return (sumSubarrayMax(nums,n)-sumSubarrayMin(nums,n));
    }
};