class Solution {
public:
    int maximumSwap(int num) {
       string s=to_string(num);
        int nums[10]={0};
        int x;
        if(num<=10)
        {
            return num;
        }
        for(int i=0;i<s.size();i++)
        {
            nums[s[i]-'0']=i;
        }
        for(int j=0;j<s.size();j++)
        {
            for(int h=9;h>s[j]-'0';h--)
            {
                if(nums[h]>j)
                {
                    swap(s[j],s[nums[h]]);
                    x=stoi(s);
                    return x;
                }
            }
        }
        x=stoi(s);
        return x;
    }
};