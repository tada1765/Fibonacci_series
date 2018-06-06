#include "Fibonacci.h"
#include <stdio.h>

//char mallocFibonacci_Series
char* Fibonacci_main(int num)
{
	char Fibonacci_Series[20];
    int t1 = 0, t2 = 1, nextTerm = 0;

    //printf("Enter a number: ");
    //scanf("%d", &num);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= num; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
		Fibonacci_Series[i-1] = t1; 
    }
	
	
    return Fibonacci_Series;
}