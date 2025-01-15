class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
        int maxArea=0;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>heights[i])
            {
                int h=st.top();
                st.pop();
                int pse=st.empty()?-1:st.top();
                maxArea=max(maxArea,((i-pse-1)*heights[h]));
            }
            st.push(i);
        }
        while(!st.empty())
        {
            int h=st.top();
            st.pop();

            int pse=st.empty()?-1:st.top();
            
            maxArea=max(maxArea,((n-pse-1)*heights[h]));
        }
        return maxArea;
    }
};