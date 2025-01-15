class Solution {
public:
   int largestRectangleArea(vector<int>arr)
   {
        int n=arr.size();
        int maxArea=0;
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>arr[i])
            {
                int h=st.top();
                st.pop();
                int pse=st.empty()?-1:st.top();
                maxArea=max(maxArea,((i-pse-1)*arr[h]));

            }
            st.push(i);
        }
        while(!st.empty())
        {
            int h=st.top();
            st.pop();

            int pse=st.empty()?-1:st.top();
            
            maxArea=max(maxArea,((n-pse-1)*arr[h]));
        }
        return maxArea;
   }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
         vector<vector<int>> mt(n, vector<int>(m, 0));
        for(int i=0;i<m;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                if (matrix[j][i] == '1')sum += 1; 
                else sum = 0; 
                mt[j][i] = sum;   
            }
        }
        int maxArea=0;
        for(int i=0;i<n;i++)
        {
            maxArea=max(maxArea,largestRectangleArea(mt[i]));
        }
        return maxArea;
    }
};