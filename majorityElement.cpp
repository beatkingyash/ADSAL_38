//Majority Element

/*  Find the element appearing more than n/2 times in an array (Where n is the number of elements)
    using divide and conquere approach                    */


#include<iostream>
using namespace std;

int mejorityElement(int nums[], int n)
{
   

    int freq = 0, ans = 0;

    for(int i = 0; i < n; i++)
    {
        if(freq == 0)
        {
            ans = nums[i];
        }

        if(ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    return ans;


}




int main()
{
    int nums[] = {1, 2, 2, 1, 2, 1};
     int n = sizeof(nums)/sizeof(nums[0]);

    int result = mejorityElement(nums, n);

    cout<<"the mejority element is: "<<result;

    return 0;

}