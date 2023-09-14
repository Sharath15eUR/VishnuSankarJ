#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N); 
	int sum = 0, i;  
	for(i = 1; i < N; i++)
	{   
      if (N % i == 0)  
      {
        sum = sum + i;  
      }  
    }  
	if (sum == N)  
      printf(" %d is a perfect number.",N);  
    else  
      printf(" %d is not a perfect number.",N);
}


#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N); 
    int count=0;
    int a;
    a=N;
    do {
        N /= 10;
        ++count;
    } while (N != 0);
    printf("The number %d contains %d digits.",a,count);
}




#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N); 
    int tempNum,flag;
    int num;
    num=N;
    tempNum=num;
    flag=0;
    while(tempNum!=1)
    {
        if(tempNum%2!=0){
            flag=1;
            break;
        }
        tempNum=tempNum/2;
    }
    if(flag==0)
        printf("%d is a number that can be expressed as power of 2.",num);
    else
        printf("%d cannot be expressed as power of 2.",num);
    return 0;
}




#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N); 
    if(N>=0)
    {
        for (int i = 1; i <= N; i++) 
        {
            sum += 1.0 / i;
        }
        printf("Sum of the series is: %.2f\n",sum);
    }
    return 0;
}