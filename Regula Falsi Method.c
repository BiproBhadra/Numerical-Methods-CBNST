//C Program to Implement Regula Falsi Method

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) x *x *x - 3 * x - 1
#define e 0.001

void main()
{
   float a, b, c, fa, fb, fc, root;
   int i = 1;
   printf("Regula Falsi Method to find root of equation x^3-3x-1=0\n");
   printf("Enter values of a and b:\n");

   printf("a: ");
   scanf("%f", &a);
   printf("b: ");
   scanf("%f", &b);
   fa = f(a);
   fb = f(b);
   c = ((a * fb) - (b * fb)) / (fb - fa);
   fc = f(c);

   do
   {
      if ((fc * fa) < 0)
      {
         b = c;
         fb = fc;
      }
      else
      {
         a = c;
         fa = fc;
      }
      i++;
      printf("No. of iteration=%d\t", i);
      printf("root=%f\t", c);
      printf("Value of function=%f\n", fc);
   } while (fabs(fc) < e);
   getch();
}
#include <conio.h>
#include <stdio.h>
#include <math.h>
#define f(x) x *x*x - 3 * x - 1
#define e 0.001
void main()
{
   float x0, x1, x2, f0, f1, f2, root;
   int i = 1;
   
   printf("Regula Falsi Method to find root of equation x^3-3x-1=0!\n");
   printf("Enter values of x1 and x2:\n");
   a:
   printf("x1: ");
   scanf("%f", &x1);
   printf("x2: ");
   scanf("%f", &x2);
   f1 = f(x1);
   f2 = f(x2);
   if ((f1 * f2) > 0)
   {
      printf("Enter Again\n");
      goto a;
   }
   else
   {
      printf("steps\tx0\tf0\tx1\tf(x1)\tx2\tf(x2)\n");
   b:
      x0 = ((x1*f2)-(x2*f1)) / (f2 - f1);
      f0 = f(x0);
      printf("%d\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\n", i, x0, f0, x1, f1, x2, f2);
      i++;
   }
   if ((f1 * f0) < 0)
   {
      x2 = x0;
      f2 = f0;
   }
   else
   {
      x1 = x0;
      f1 = f0;
   }
   if (fabs(f(x0)) <= e)
   {
      root = x0;
      printf("The root is %.6f", root);
      goto c;
   }
   else
   {
      goto b;
   }
c:
   getch();
}
