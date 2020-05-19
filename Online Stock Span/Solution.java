class StockSpanner {
    Stack<Integer> prices,ans;

    public StockSpanner() {
        prices = new Stack();
        ans = new Stack();
    }

    public int next(int price) {
       int curr=1;
        while(!prices.isEmpty() && prices.peek()<=price){
            prices.pop();
            curr+=ans.pop();
        }
        prices.push(price);
        ans.push(curr);
        return curr;
    }
}