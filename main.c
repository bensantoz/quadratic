/*
  Project: Quadratic Equation Solution
  Author:  Haron Limo
  Date:    26th Oct, 2021
  Compiler: GCC
  Language: C99
  License:  MIT
  inputs-> a,b,c
outputs->x1,x2
  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //variable declaration
    int a,b,c;
    float x1,x2;

    //capture input
    printf("\tQuadratic Equation Solver!\n");
    printf("enter the values of a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    //processing or computation
    if((b*b-4*a*c)==0){
        x1=x2=(-b +sqrt(b*b-4*a*c))/(2*a);
    }if((b*b-4*a*c)>0){
        x1=x2=(-b +sqrt(b*b-4*a*c))/(2*a);
        x1=x2=(-b -sqrt(b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c)<0){
        printf("The equation has no roots\n");
        exit(1);

    }

    //output
    printf("The values of x are %f and f\n",x1,x2);

    return 0;
}
