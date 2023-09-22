#include <stdio.h>
int main()
{
    int n1, n2, n3; 
    scanf("%d %d %d", &n1, &n2, &n3); 
    if (n1 <= n2) {
        if (n1 <= n3) {
            printf("%d is the smallest number.", n1);
        } else {
            printf("%d is the smallest number.", n3);
        }
    } else {
        if (n2 <= n3) {
            printf("%d is the smallest number.", n2);
        } else {
          printf("%d is the smallest number.", n3);
        }
    }

    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); 
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        else if (a*a + b*b == c*c ||
                 a*a + c*c == b*b ||
                 b*b + c*c == a*a) {
            printf("Right-angle Triangle\n");
        }
        else if (a == b || a == c || b == c) {
            printf("Isosceles Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }
    } else {
        printf("Triangle is not possible\n");
    }

    return 0;
}

#include<stdio.h>
void main()
{
    int n;
    long int fact;  
    scanf("%d",&n); 
    int i;    
    fact=i=1;
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("The Factorial of %d is : %ld",n,fact);
}

#include <stdio.h>  
void main()
{
        int N, sum=0; 
        scanf("%d", &N); 
        for (int i = 2; i <= N; i += 2) {
            sum += i;
        }
        printf("Sum = %d", sum);

}