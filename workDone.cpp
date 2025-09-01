/*  Implement a problem of minimum work to be done per day to CO2 
finish given tasks within D days problem.   
Statement: Given an array task [] of size N denoting amount of work to 
be done for each task, the problem is to find the minimum amount of 
work to be done on each day so that all the tasks can be completed in 
at most D days. 
Note: On one day work can be done for only one task.   

Test Cases :

Input: task[] = [3, 4, 7, 15],  D = 10                     
Output: 4 
Input: task[] = [30, 20, 22, 4, 21], D = 6              
Output: 22

*/



#include<iostream>
#include<algorithm>
using namespace std;


int minWorkperDay(int task[], int n, int D)
{
   int ans = 0;
   

      int curr = task[0];

      while(ans <= D)
      {   
        for(int j = 0; j < n; j++)
        {

          if(task[j] % curr == 0)
          {
            ans += task[j] / curr;
          }
          else
          {
            ans += (task[j] / curr) + 1;
          }
          
        }

        if(ans <= D)
        {
          return curr;
        }

        curr++;
        ans = 0;
      }

      return curr;
}


int main()
{
    int task[] = {3, 4, 7, 15};
    int n = sizeof(task) / sizeof(task[0]);
    int D = 10;


    sort(task, task + n);

    cout << "Minimum work per day = " << minWorkperDay(task, n, D) << endl;

    return 0;



}