class Solution {
public:
    
    string reverseWords(string s) {
        int left = 0;
        int right = s.length()-1;
        
        string temp="";
        string ans="";
        
        
        while (right>=0) {
            while(right>=0 && s[right]==' ')right--;
            while(right>=0 &&s[right]!=' ')
            {
                temp+=s[right];
                right--;
            }
            if(temp!="")
            {
                reverse(temp.begin(),temp.end());
                if(ans!="")ans+=' '+temp;
        
                else ans+=temp;
            }
            temp="";
           
        }
        
        //If not empty string then add to the result(Last word is added)
        if (temp!="") {
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
        }
        return ans;    
    }

};