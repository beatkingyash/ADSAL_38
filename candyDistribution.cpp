// Candy Distribution

/*  Statement : Distribute candies such that each kid with a higher score gets more than neighbors.
    Input :    ratings = [1, 0, 2]
    Output :   Candies needed : 5  */

#include<iostream>
using namespace std;

int candy(int rat[], int n)
{
    int candies[100];

    for(int i = 0; i < 100; i++)  // Initialize 1 candle for each
    {
        candies[i] = 1;
    }


    for(int i = 1; i < n; i++)   // Check for Left - Right
    {
        if(rat[i] > rat[i - 1])
        {
            candies[i] = candies[i - 1] + 1;
        }
    }

    for(int i = n - 2; i >= 0; i--)    // Check for Right - Left
    {
        if(rat[i] > rat[i + 1])
        {
            if(candies[i] < candies[i + 1] + 1)
            {
                candies[i] = candies[i + 1] + 1;
            }
        }
    }


    // Sum of Total Candies
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += candies[i];
    }


    return sum;
}

int main()
{
    int rat[] = {1, 0, 2, 4};
    int n = sizeof(rat) / sizeof(rat[0]);

   // candy(rat, n);

    cout<<"\nCandies Needed : "<<candy(rat, n);



    return 0;
}