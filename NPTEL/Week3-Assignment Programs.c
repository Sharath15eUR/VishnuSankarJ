#include <stdio.h>
#define PI 3.14
void main()
{
    int radius;
    float area;
    scanf("%d", &radius);
    area=3.14*radius*radius;
    printf("Area of a circle = %5.2f", area);
}

#include <stdio.h>
int main()
{
    double number;
    scanf("%lf", &number); 
     if(number>0)
     {
       printf("Positive number.");
     }
	 else if(number<0)
     {
       printf("Negative number.");
     }
	 else
     {
       printf("The number is 0.");
     }
}


#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if(number%2==0)
    {
    printf("%d is even.",number);
    }
    else
    {
    printf("%d is odd.",number);
    }
}


#include <stdio.h>
int main()
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3); 
    if((n1>n2) && (n1>n3))
    {
    printf("%d is the largest number.", n1);
    }
    else if((n2>n1) && (n2>n3))
    {
    printf("%d is the largest number.", n2);
    }
    else if((n3>n2) && (n3>n1))
    {
    printf("%d is the largest number.", n3);
    }
}
