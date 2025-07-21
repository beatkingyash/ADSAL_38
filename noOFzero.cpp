//Implement the problem of NO. Of Zeroes

/* Statement : Given an array of 1s and 0s which has all 1s first followed by all 0s.  Find the number of Zeroes.
   [In array first all 1's is there and then 0's are there] / We have to count number of Zeroes. */


#include<iostream>
using namespace std;

int countZeroes(int arr[], int n) 
{
    int low = 0, high = n - 1;
    int firstZeroIndex = -1;      // variable for first zero index

    while (low <= high) 
    {
        int mid = (low + high) / 2;      // claculate mid

        if (arr[mid] == 0) 
        {
            firstZeroIndex = mid;        // if mid position no. is 0 then set midindex as first zero index
            high = mid - 1;
        } 
        else 
        {
            low = mid + 1;
        }
    }

        if (firstZeroIndex == -1) 
        {
           return 0;
        } 
        else 
        {
           return n - firstZeroIndex;    // return (size of array - first zero index)
        }

}

int main() 
{
    int arr[] = {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int n = sizeof(arr) / sizeof(arr[0]);

    int result = countZeroes(arr, n);
    cout << "Number of zeroes: " << result << endl;

    return 0;
}
