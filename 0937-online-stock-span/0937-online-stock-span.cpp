class StockSpanner {
public:
    stack<int> s;         // stack mein index rakhenge
    vector<int> prices;   // saare prices store kar lenge
    int day; 
    StockSpanner() {
        day = -1;
    }
    
    int next(int price) {
        day++;                  // naya din
        prices.push_back(price);

        // chhote ya equal piche ke din nikal do
        while(!s.empty() && prices[day] >= prices[s.top()]){
            s.pop();
        }

        int span;
        if(s.empty()){
            span = day + 1;     // matlab sabse bada ab tak
        } else {
            span = day - s.top();
        }

        s.push(day);            // current din stack mein daal do
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */