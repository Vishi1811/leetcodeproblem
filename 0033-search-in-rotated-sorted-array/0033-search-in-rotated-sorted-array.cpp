class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0;
        int high=arr.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]==target) return mid;
            //left part if sorted
            else if(arr[low]<=arr[mid])
            {
                //check target is laying in sorted part if it is ,then trim unsorted part
                if(arr[low]<=target && target<=arr[mid]) high=mid-1;
                //if target is not laying in sorted part then trim sorted part
                else low=mid+1;

            }
            //right part is sorted
            else
            {
                //check target is laying in sorted part if it is ,then trim unsorted part
                if(arr[mid]<=target && target<=arr[high]) low=mid+1;
                //if target is not laying in sorted part then trim sorted part
                else high=mid-1;
            }

        }
        return -1;
        
    }
};