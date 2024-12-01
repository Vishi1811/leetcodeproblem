class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=i;
        }
        for(int j=0;j<n;j++)
        {
            if(mp.find(arr[j]*2)!=mp.end() && mp[arr[j] * 2] != j)return true;
        }
        return false;
        
    }
};