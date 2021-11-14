//C Program to Implement Newton Raphson Method

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

#define f(x)  x *x *x - 3 * x - 1
#define d(x) 3*x*x -3

void main()
{
    float x0, x1, f0, f1, d0, e; int step = 1;
    

    printf("Enter initial guess:\n");
    scanf("%f", &x0);
    printf("Enter tolerable error:\n");
    scanf("%f", &e);

    printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
    do
    {
        d0 = d(x0);
        f0 = f(x0);
          if(d(0)== 0.0)
		  {
            printf("Mathematical Error!");
            exit(0);
		  }

		
		  x1 = x0 - (f0/d0);

		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
		  x0 = x1;
		  
		  step = step+1;
		
		  
		  f1 = f(x1);

    } while (fabs(f1) >= e);

    printf("Root is: %f", x1);
    getch();
}

