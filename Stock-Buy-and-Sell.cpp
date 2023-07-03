int maxProfit(vector<int>& prices) {
       int profit =0;
       int mini = prices[0];
       for(int i=1; i<prices.size();i++){
           int cost = prices[i]-mini;
           profit = max(profit,cost);
           mini = min(mini, prices[I]); // find the minimum to the left of every element
       }
       return profit; 
    }

