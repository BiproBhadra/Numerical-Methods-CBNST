//C program to implent both Simpons 1/3 and 3/8 method

#include <math.h>
#include <stdio.h>

float fun(float a)
{
    float f = (2000 * (log(140000 / (140000 - (2100 * a))))) - (9.8 * a);
    return (f);
}


void main()
{
    printf("Enter b = ");
    float a = 0, b = 0, h = 0, sum = 0;
    scanf("%f", &b);
    printf("Enter a = ");
    scanf("%f", &a);
    int c = 0;
    printf("Enter 1 for Simpson's 1/3rd rule and 2 for 3/8th rule: \n");
    scanf("%d", &c);
    
    if (c == 1)
    {
        h = (b - a) / 2;            //here n=2
        sum = (h / 3) * (fun(a) + (4 * fun((a + b) / 2)) + fun(b));
        printf("Answer : %f m", sum);
    }
    
    else
    {
        h = (b - a) / 3;            //here n=3
        sum = (3 * h / 8) * (fun(a) + (3 * fun(a + h)) + (3 * fun(a + 2 * h)) + fun(b));
        printf("Answer : %f m", sum);
    }
}
