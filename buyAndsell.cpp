int buyAndSell(int * prices[]){
    int mini = prices[0], profit=0, cost;
    for(int i=0;i<prices.size();i++){
        cost = prices[i] - mini;
        profit=max(proft, cost);
        mini = min(mini, arr[i]);
    }
    return profit;
}