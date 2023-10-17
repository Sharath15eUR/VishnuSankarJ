10.1)
#include<stdio.h>
float fun (float x); //Function fun returns the function value of f(x)
void bisection (float *x, float a, float b, int *itr); // This function computes the root of f(x) using bisection method

int main ()
{
    int itr = 0, maxmitr=10;
    float x, a=1.0, b=2.0, allerr, x1; // x is the value of root in each iteration, x1 is the final value of the root 
   // a and b are the initial range for calculating the root using bisection method
      
scanf("%f", &allerr);  // allerr is the allowable error taken from test case data 
    bisection (&x, a, b, &itr);

/* Use the printf statement as given below to print the root
printf("Root = %1.4f\n", x1); */
do
    {
        if (fun(a)*fun(x) < 0)
            b=x;
        else
            a=x;
        bisection (&x1, a, b, &itr);
        if (((x1-x)<0 && -(x1-x)< allerr) || ((x1-x)>0 && (x1-x)< allerr))
        {
            printf("Root = %1.4f", x1);
            return 0;
        }
        x=x1;
    }
    while (itr < maxmitr);
    return 1;
}
float fun (float x)
{
    return (2*x*x*x - 3*x - 5);
}
void bisection (float *x, float a, float b, int *itr)
/* this function performs and prints the result of one iteration */
{
    *x=(a+b)/2;
    ++(*itr);
}


10.2)
#include<stdio.h>
 int main()
{
  int a[3][3], i, j;
  long determinant;
 //  9 elements of matrix is taken as input from test data
  for(i = 0 ; i < 3; i++)
      for(j = 0; j < 3; j++)
           scanf("%d", &a[i][j]);

/*Use the printf statements as:
printf("The given matrix is not invertible");
printf("The given matrix is invertible"); 
*/
determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
   if ( determinant == 0)
       printf("The given matrix is not invertible");
   else
       printf("The given matrix is invertible");
   return 0;
}


10.3)
#include <stdio.h>
int main()
{
    int a[100],i, n;
    scanf("%d",&n);  //Number of elements of the array is taken from the test case data 
   
   for (i=0; i<n; i++)
    {
        scanf("%d",a+i); // Input the array elements
    }
int j,t;
for (i=0; i<(n-1); i++) 
    {
        for (j=i+1; j<n; j++)
        {
            if (*(a+i)>*(a+j))
            {
                t=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=t;
            }
        }
    }
//   Printing sorted array in ascending order 
    for (i=0; i<n; i++)
    {
        printf("%d\n",*(a+i));
    }
    return 0;
   }
   
10.4)
#include<stdio.h>
void sort(int *a, int n);
int main()
{
    int a[20];
    int n,i; 
    scanf("%d",&n); // Enter number of elements to sort is taken from test case data
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); // The elements of the array is taken from the test data
    }

sort(a, n); // Calling the sorting function

    //Printing the sorted array 
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
   return 0;
}
void sort(int *a, int n)
{
    int i,temp,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
           if(*(a+j)>=*(a+j+1))
        {
            temp = *(a+j);
            *(a+j)= *(a+j+1);
            *(a+j+1)= temp;
        }
        }
    }
}