class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int sum=1,i=1;
        while(i<n)
        {
            if(ratings[i]==ratings[i-1])
            {
                sum+=1;
                i++;
            }
            int peak=1;
            while(i<n && ratings[i]>ratings[i-1])
            {
                peak+=1;
                sum+=peak;
                i++;

            }
            int down=1;
            while(i<n && ratings[i]<ratings[i-1])
            {
                sum+=down;
                down+=1;
                i++;
            }
            if(down>peak)
            {
                sum+=(down-peak);
            }
        }
        return sum;










        // vector<int>left(n,1);
        // vector<int>right(n,1);
        
        // for(int i=1;i<n;i++)
        // {
        //     if(ratings[i]>ratings[i-1])
        //     {
        //         left[i]=left[i-1]+1;
                
        //     }
           
        // }
        // for(int i=n-2;i>=0;i--)
        // {
        //     if(ratings[i]>ratings[i+1])
        //     {
        //         right[i]=right[i+1]+1;
                
        //     }
          
        // }
        // int candy=0;
        // for(int i=0;i<n;i++)
        // {
        //     candy+=max(left[i],right[i]);
        // }
        // return candy;
    }
};