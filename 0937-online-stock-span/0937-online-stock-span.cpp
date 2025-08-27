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
/*class StockSpanner {
public:
    stack<pair<int,int>> s;  // {price, span}

    StockSpanner() {}

    int next(int price) {
        int span = 1;  // khud ka din to count hoga hi

        // piche ke chhote/baraabar prices hatao
        while(!s.empty() && s.top().first <= price) {
            span += s.top().second;  // unka span add kar lo
            s.pop();
        }

        // ab current price + span stack me daalo
        s.push({price, span});
        return span;
    }
};*/

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */