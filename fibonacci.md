- š Hi, Iām @DJRockStarr
- š Iām interested in ...
- š± Iām currently learning ...
- šļø Iām looking to collaborate on ...
- š« How to reach me ...

<!---
DJRockStarr/DJRockStarr is a āØ special āØ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->


#include <stdio.h>

int fibonacci(int j){
        if(j==0) return 0;
        else if(j==1) return 1;
        else return(fibonacci(j-1)+fibonacci(j-2));
    }

int main()
{

    int j;
    int n;

    printf("\nEnter number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci series is: ");

   for(j = 0; j<n; j++)
   {
       printf("%d ", fibonacci(j));
   } 
   
   return 0;
}
