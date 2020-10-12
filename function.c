#include <stdio.h>
#include <stdlib.h>

int factorial(int number)

{

    int factorial =1;
    for (int i = number; i>1; i--)
    {
        factorial= factorial*i;
    }

}

void outputFactorial(int input)
{
    printf("The factorial of %d is %d\n",input,factorial(input));
}


int main()
{
    int A,B;
    printf("Input the number you want to find its factorial:");
    scanf("%d",&A);
    printf("\nFactorial of %d is %d\n\n\n\n",A, factorial(A));

    printf("\ntest void fucntion:\n");
    for (int m=0;m<=10;m++)
    {
        outputFactorial(m);
    }

}
