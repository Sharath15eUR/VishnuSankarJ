#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);  /*A word or a sentence is accepted from test case data */

/* Complete the remaining part of the code to store number of uppercase letters
in the variable upper and lowercase letters in variable lower.
The print part of already written. You can declare any variable if necessary */
 for(int i = 0; ch[i] != '\0'; i++)
 {
        if (ch[i] >= 'A' && ch[i] <= 'Z') 
        {
            upper++;
        }
   		else if (ch[i] >= 'a' && ch[i] <= 'z') 
        {
            lower++;
        }
  }
printf("Uppercase Letters : %d\n", upper); /*prints number of uppercase letters */
   printf("Lowercase Letters : %d", lower); /*prints number of lowercase letters */
 
   return (0);
}




#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); //Accepts number of rows
    scanf("%d",&c); //Accepts number of columns 

    for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }
/*Complete the code to print the sum of each rows. Use the printf() statement as
 printf("%d\n",sum); Where sum is the sum of a row. 
*/
    for(int i = 0; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++) {
            sum += matrix[i][j];
        }
        printf("%d\n",sum);
    }

    return 0;
}








#include <stdio.h>
int main()
{
    int matrix_A[20][20], matrix_B[20][20], matrix_C[20][20];
    int i,j,row,col;
    scanf("%d",&row); //Accepts number of rows
    scanf("%d",&col); //Accepts number of columns 
 
    /* Elements of first matrix are accepted from test data */
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &matrix_A[i][j]);
        }
    }

     /* Elements of second matrix are accepted from test data */
    
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &matrix_B[i][j]);
        }
    }

/* Complete the program to get the desired output. Use printf() statement as below
    printf("%d ", matrix_C[i][j]); You can declare your own variables if required. 
*/
	for(int i = 0; i < row; i++) 
    {
        for(int j = 0; j < col; j++) 
        {
            matrix_C[i][j] = matrix_A[i][j] - matrix_B[i][j];
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", matrix_C[i][j]);
        }
        printf("\n");
    }

    return 0;
}



#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
//str[100] is for storing the sentence and substr[50][50] is for storing each word.
    
scanf("%[^\n]s", str); //Accepts the sentence from the test case data.

/* Complete the program to get the desired output.
The print statement should be as below
 
printf("Largest Word is: %s\nSmallest word is: %s\n", -------,--------);

*/
	char largest[100], smallest[100];
    int max_length = 0, min_length = strlen(str), current_length = 0;
    int start = 0, end = 0;

    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            current_length = end - start;
            if (current_length > max_length) {
                max_length = current_length;
                strncpy(largest, &str[start], current_length);
                largest[current_length] = '\0';
            }
            if (current_length < min_length) {
                min_length = current_length;
                strncpy(smallest, &str[start], current_length);
                smallest[current_length] = '\0';
            }
            start = end + 1;
        }
        end++;
    }

    printf("Largest Word is: %s\nSmallest word is: %s\n", largest,smallest);
	return 0;
}