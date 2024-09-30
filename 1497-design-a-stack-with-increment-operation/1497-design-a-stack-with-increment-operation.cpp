class CustomStack {
private:
    vector<int>st;
    vector<int>incrVal;
    int capacity;
    int curId;
public:
    CustomStack(int maxSize) {
        st.resize(maxSize,0);
        incrVal.resize(maxSize,0);
        capacity = maxSize;
        curId = -1;
    }
    
    void push(int x) {
        if(curId<(capacity-1)){
            st[++curId]=x;
        }
    }
    
    int pop() {
        if(curId<0){
            return -1;
        }
        int actualVal = st[curId]+incrVal[curId];
        
        if(curId>0){
            incrVal[curId-1]+=incrVal[curId];
        }
        
        incrVal[curId]=0;
        curId--;
        return actualVal;
    }
    
    void increment(int k, int val) {
        if(curId>=0){
            int limitId = min(k-1, curId);
            incrVal[limitId]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */