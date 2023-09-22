#include<stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
}

//Complete the rest of the program to calculate HCF
int HCF(int a, int b) {
    if(b == 0)
        return a;
    else
        return HCF(b, a % b);
}


#include <stdio.h>  
long power(int, int);
int main()
{
int pow, num;
long result;

scanf("%d", &num); //The number taken as input from test case data 

scanf("%d", &pow); //The power is taken from the test case 
result = power(num, pow);
printf("%d^%d is %ld", num, pow, result);
return 0;
}
long power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}



#include <stdio.h>
int binary_conversion(int); //function to convert binary to decimal number
int main()
  {
  int num, bin;  //num is the decimal number and bin is the binary equivalent for the number

  scanf("%d", &num); //The decimal number is taken from the test case data
  bin = binary_conversion(num); //binary number is stored in variable bin
  printf("The binary equivalent of %d is %d\n", num, bin);
  return 0;
  }
int binary_conversion(int num) {
    if (num == 0)
        return 0;
    else
        return num % 2 + 10 * binary_conversion(num / 2);
}


#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     
/* Complete the program to print the string in reverse order using the function
void reverse(char[], int, int);
Use the printf statement as
printf("The string after reversing is: %s\n", str1); 
You can use different variable also.
*/
    int length = strlen(str1);
    reverse(str1, 0, length - 1);

    printf("The string after reversing is: %s", str1); 

    return 0;
}
void reverse(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}