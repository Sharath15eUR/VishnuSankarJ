#include <stdio.h>

int main()
{
    int i, n, largest;
    int arr[100];

    scanf("%d", &n); /*Accepts total number of elements from the test data */

 for(i = 0; i < n; ++i)
    {
       scanf("%d", &arr[i]); /* Accepts the array element from test data */
    }
	for (int i = 1; i < n; ++i) 
    {
    	if (arr[0] < arr[i]) 
        {
      		arr[0] = arr[i];
    	}
  	}
	printf("Largest element = %d", arr[0]);
  	return 0;
}

#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */
	int arr_r[20];
    for (int i = 0; i<n; i++)
    {
        arr_r[i] = arr[n-i-1];
    }
	for (int i = 0; i<n; i++)
    {
        arr[i] = arr_r[i];
    }
for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return (0);
}



#include<stdio.h>
int main() 
{
   int arr1[20], arr2[20], array_new[40], n1, n2, size, i;
 /*n1 size of first array (i.e. arr1[]), n2 size of second array(i.e. arr2[]), 
   size is the total size of the new array (array_new[]) */
 
   scanf("%d", &n1); //Get the size of first array from test data and store it in n1.
   
   for (i = 0; i < n1; i++)
      scanf("%d", &arr1[i]); //Accepts the values for first array 
 
   scanf("%d", &n2); //Get the size of second array from test data and store it in n2.
   
   for (i = 0; i < n2; i++)
      scanf("%d", &arr2[i]); //Accepts the values for second array

//Marge two arrays
int j;
for(i=0;i<n1;++i)
{ 
  array_new[i]=arr1[i];
}
size=n1+n2;
for(i=0,j=n1;j<size && i<n2;++i,++j)
{ 
  array_new[j]=arr2[i];
}
//Printing after merging

for (i = 0; i < size; i++) {
      printf("%d\n", array_new[i]);
   }

}



#include<stdio.h>
 
int main() 
{
   int array[50], i, size;
 
   scanf("%d", &size); /*Accepts the size of array from test case data */

   for (i = 0; i < size; i++)
   scanf("%d", &array[i]); /* Read the array elements from the test case data */
int j,k;
for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            if ( array[i] == array[j])  
            {  
                for ( k = j; k < size - 1; k++)  
                {  
                    array[k] = array [k + 1];  
                }  
                size--;  
                j--;      
            }  
        }  
    }  
      
for (i = 0; i < size; i++) {
      printf("%d\n", array[i]);
   }

}