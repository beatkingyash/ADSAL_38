// Implement a problem of smallest number with at least n trailing zeroes in factorial.
   
/*  Statement: Given a number n. The task is to find the smallest number 
               whose factorial contains at least n trailing zeroes.        */


#include <iostream>
using namespace std;

int countZeros(int mid) 
{
    int count = 0;
    while (mid > 0) 
    {
        mid = mid / 5;
        count += mid;
    }
    return count;
}

int smallNO(int n) 
{
    int start = 0;
    int end = n * 5;

    while (start < end) 
    {
        int mid = (start + end) / 2;

        if (countZeros(mid) < n) 
        {
            start = mid + 1;
        } 
        else 
        {
            end = mid;
        }
    }

    return start;
}

int main() 
{
    int n;
    cout << "Enter the number of trailing zeros: ";
    cin >> n;
    cout << "The Factorial of " << smallNO(n) <<" Contains "<< n <<" Trailing 0's." << endl;
    return 0;
}
