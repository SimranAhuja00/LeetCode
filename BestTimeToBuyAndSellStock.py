class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        buy = prices[0]
        max_profit = 0
        n = len(prices)
        for i in range(1, n):
            # Checking for lower buy value
            if (buy > prices[i]):
                buy = prices[i]
 
            # Checking for higher profit
            elif (prices[i] - buy > max_profit):
                  max_profit = prices[i] - buy
        return max_profit
 
 
