// Power Function

/* Compute x^n using recursive halving x.   */

#include <iostream>
using namespace std;


double computePow(double x, int n)                          // Function to compute x^n using exponentiation by squaring
{
    double ans = 1.0;
    int originalN = n;                                      // Store original value of n for later

        
    if (n < 0)                                              // Convert negative exponent to positive
    {
        n = -n;
    }

    while (n > 0) 
    {
       
        if (n % 2 == 1)                                      // If n is odd, multiply x once into the answer
        {
            ans *= x;
        }

       
        x *= x;                                              // Square the base

       
        n /= 2;                                              // Halve the exponent
    }

    
   // return (originalN < 0) ? (1.0 / ans) : ans;            // If original exponent was negative, return reciprocal

   if(originalN < 0)
   {
    return (1.0 / ans);
   }
   else
   {
    return ans;
   }

}

int main() 
{
    double x;
    int n;

    cout<<"\nEnter the x: ";
    cin>>x;

    cout<<"Enter the n: ";
    cin>>n;

    cout <<"\n"<< x << "^" << n << " = " << computePow(x, n) << endl;

    return 0;
}
