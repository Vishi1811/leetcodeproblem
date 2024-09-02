class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // if(nums.size()<=2) 
        //     return nums;
        int cnt1=0,cnt2=0,el1=INT_MIN,el2=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]!=el2 && cnt1==0)
           {
                cnt1=1;
                el1=nums[i];
           }
           else if(cnt2==0 && el1!=nums[i])
           {
                cnt2=1;
                el2=nums[i];
           }
           else if(el1==nums[i]) cnt1++;
           else if(el2==nums[i])cnt2++;
           else{
                cnt1--;
                cnt2--;
           }
        }
        cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(el1==nums[i])cnt1++;
            if(el2==nums[i])cnt2++;
        }
        int mejority=(int)nums.size()/3;
    vector<int>ls;
    if(cnt1>mejority) ls.push_back(el1);
    if(cnt2>mejority) ls.push_back(el2);
    return ls; 
    }
};