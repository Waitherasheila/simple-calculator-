/*

simple calculator

created by DIT-O1-0501/2022

on July, 2022

C89 compiler

DIT License

*/



#include<stdio.h>


int main()

{

int num1, num2, sum, diffent, product;

float quotient;



printf("simple calculator!\n");

scanf("%d%d", &num1, &num2);



//computations

sum = num1 + num2;

diff = num1 - num2;

product = num1 * num2;



//output

printf("%d+%d=%d/n", num1, num2, sum);

printf("%d-%d=%d/n", num1, num2, diff);

printf("%d*%d=%d/n", num1, num2, product);

printf("%d/%d=%d/n", num1, num2, quotient);



return 0;

}
