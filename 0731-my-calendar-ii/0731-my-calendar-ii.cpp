class MyCalendarTwo {
public:
    map<int,int>mp;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
         mp[start]++;             // sweepline algo  (raise the start_point by 1)
        mp[end]--;               // lower the (last_included_point + 1) by 1
        
        int booking=0;
        
        for(auto &[first,sec]:mp){
            booking+=sec;
            
            if(booking>2){           
                mp[start]--;         
                mp[end]++;          
                return false;       
            }
        }
        return true; 
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */