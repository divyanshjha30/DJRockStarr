#include <stdio.h>

int fibonacci(int j){
        if(j==0) return 0;
        else if(j==1) return 1;
        else return(fibonacci(j-1)+fibonacci(j-2));
    }

int main()
{

    int j;

    printf("\nEnter nth term: ");
    scanf("%d", &j);

    printf("\nnth term of the Fibonacci series is: ");
    printf("%d ", fibonacci(j));
 
   
   return 0;
}
