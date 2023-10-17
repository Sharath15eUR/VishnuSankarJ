11.1)
#include<stdio.h>
int main()
{
  float t[100]={10,15,18,22,30}, v[100]={22,26,35,48,68};
  float a; //Value of the t to find the respective value of v(t)
  scanf("%f", &a);  // This will be taken from test cases
int isa,j;
float b, c, k =0;
for(isa=0; isa < 5; isa++)
   {
      b=1;
      c=1;
      for(j=0; j < 5; j++)
        {
           if(j!=isa)
             {
               b=b*(a-t[j]);
               c=c*(t[isa]-t[j]);
              }
        }
        k=k+((b/c)*v[isa]);
    }
printf("The respective value of the variable v is: %.2f", k);
  return 0;
}

11.2)
#include<stdio.h>
float func(float x);
int main()
{
  int n=10; //Taking n=10 sub intervals
  float a,b,integral; //integral is the integration result
  scanf("%f",&a); // initial limit taken from test case 
  scanf("%f",&b); // Final limit taken from test case

//Use the printf statement as printf("The integral is: %0.6f\n",integral);
int id;
float h,x, sum=0;  
if(b > a)
  h=(b-a)/n;
  else
  h=-(b-a)/n;
  for(id=1;id < n;id++)
  {
    x=a+id*h;
    sum=sum+func(x);
  }
  integral=(h/2)*(func(a)+func(b)+2*sum);
  printf("The integral is: %0.6f\n",integral);
  return 0;
}
float func(float x)
{
  return x*x;
}

11.3)
#include<stdio.h>
float func(float x,float y);
int main()
{
    float m1,m2,m3,m4,m,h=0.3;
    float x0 = 0.3, y0 = 5, xn;
    scanf("%f",&xn); //xn will be taken from test cases


//Use the printf statement as: printf("y=%f",y);
while(x0 < xn)
    {
        m1=func(x0,y0);
        m2=func((x0+h/2.0),(y0+m1*h/2));
        m3=func((x0+h/2.0),(y0+m2*h/2));
        m4=func((x0+h),(y0+m3*h));
        m=((m1+2*m2+2*m3+m4)/6);
        y0=y0+m*h;
        x0=x0+h;
    }
    printf("y=%.6f",y0);
    return (0+0);
}
float func(float x,float y)
{
    float m;
    m=(x*(x+1)-3*y*y*y)/10;
    return m;
}

11.4)
#include <stdio.h>
int checkPrime(int, int); //Function to check prime or not 

int main()
{
    int num, check;
    scanf("%d", &num); //The number is taken from test case data
    check = checkPrime(num, num/2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
int checkPrime(int numBER, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (numBER % i == 0)
       {
         return 0;
       }
       else
       {
         return checkPrime(numBER, i - 1);
       }
    }
}

