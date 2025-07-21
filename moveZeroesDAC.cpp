//In the Given array We have 1s and 0s in between. We need to Move all zeros to last of the array.

#include <iostream>
using namespace std;


void merge(int arr[], int temp[], int left, int mid, int right)        // Function to merge two halves
 {
    int i = left;       // Starting index of left half
    int j = mid + 1;    // Starting index of right half
    int k = left;       // Starting index for merged array

    // First, copy all non-zero elements

    while (i <= mid)
     {
        if (arr[i] != 0)
        { 
             temp[k++] = arr[i];
        }
        i++;
    }

    while (j <= right)
     {
        if (arr[j] != 0)
        {  
            temp[k++] = arr[j];
        }
        j++;
    }

    // Count zeros in both halves

    int zeroCount = (right - left + 1) - (k - left);  // Where k is next empty location in merged array
 
   
    while (zeroCount--)             // Append zeros at the end
    {
        temp[k++] = 0;
    }

   
    for (int m = left; m <= right; m++)     // Copy temp back to original array
    {   
        arr[m] = temp[m];
    }
}

// Recursive function using divide and conquer
void moveZeros(int arr[], int temp[], int left, int right)
 {
    if (left >= right)
    { 
         return;
    }

    int mid = (left + right) / 2;

    moveZeros(arr, temp, left, mid);
    moveZeros(arr, temp, mid + 1, right);
    merge(arr, temp, left, mid, right);
}

int main() 
{
    int arr[] = {0, 15, 0, 1, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];                            // Temporary array for merging

    moveZeros(arr, temp, 0, n - 1);

    cout << "Array after moving zeros to end: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}



