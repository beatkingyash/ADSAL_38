// Coin Change (Minimum Coins)

/*  Statement : Make value V with minimum Coins
    Input : coins[] = {1, 2, 5, 10, 20}   V = 43
    Output : coins used : 20 20 2 1           */

#include<iostream>
using namespace std;

int minCoins(int coins[], int n, int V)
{
    int count = 0;
    
    cout<<"\nCoins Used : ";

    for(int i = n-1; i >= 0; i--)        // start from max coin if array is sorted
    {

        while(V >= coins[i])             
        {
            V -= coins[i];
            cout<<coins[i]<<" ";

            count++;                    // variable for count the no. of coins
        }

    }
        
    cout<<"\nMinimum no. of Coins Required : ";
    return count;

}

int main()
{

    int coins[] = {1, 2, 5, 10, 20};
    int n = sizeof(coins) / sizeof(coins[0]);
    int V = 102;

    cout<<minCoins(coins, n, V)<<"\n\n";

    return 0;

}