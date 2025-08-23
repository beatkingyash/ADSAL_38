/*    Implement a problem of maximizing Profit by trading stocks based on 
given rate per day.

Statement: Given an array arr[] of N positive integers which denotes 
the cost of selling and buying stock on each of the N days. The task is 
to find the maximum profit that can be earned by buying a stock on or 
selling all previously bought stocks on a particular day. 

Input : arr[2, 3, 5]    Output : 5
Input : arr[8, 5, 1]    Output : 0

*/

#include <iostream>
using namespace std;

int maxProfit(int arr[], int n) 
{
    int maxProfit = 0;

    for (int i = 0; i < n; i++) 
    {
        int profit = 0;
        for (int j = 0; j <= i; j++) 
        {
            int diff = arr[i] - arr[j];
            
            if (diff > 0)
            {
                profit += diff;
            }
        }

        if (profit > maxProfit) 
        {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main() 
{
    int arr[] = {5, 3, 4, 6, 4};  // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Profit: " << maxProfit(arr, n) << endl;
    return 0;
}