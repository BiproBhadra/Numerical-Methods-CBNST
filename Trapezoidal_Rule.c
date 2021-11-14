//C Program to Implement Trapezoidal Rule

#include<stdio.h>
#include<math.h>
 
void main()
{
 
 float x0,xn,h,sum;
 int n,i;
 
 float f(float);
 printf("Enter the upper and lower limit of x0, xn:");
 scanf("%f%f",&x0,&xn);
 printf("Enter the value of intervals n: ");
 scanf("%d",&n);
 
 h=(xn-x0)/n;
 sum=(f(x0)+f(x0+n*h))/2;    //we have taken yo and yn and we are lefting h here remember
 
 for(i=1;i<n;i++)            //upto n-1 we will take loop 
 sum+=f(x0+i*h);             //we will add rest summation here y1 y2 y3.....y(n-1)
 sum=sum*h;                  //we have multipied h here 
 printf("The value of the integration is %f: ",sum);

}

 
float f(float x)
{
 return(sin(x)*sin(x));
}
