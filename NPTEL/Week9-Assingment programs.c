#include <stdio.h>
int main()
{
   int array[100], search, n, count = 0;

 scanf("%d", &n);

 int c;
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   scanf("%d", &search); 
    int occurrences = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == search) {
          	printf("%d is present at location %d.\n", search,i+1);
            occurrences++;
        }
    }
	if(occurrences==0)
    {
       printf("%d is not present in the array.\n",search);
    }
	else
    {
    	printf("%d is present %d times in the array.\n", search, occurrences);
    }
	return 0;
}



#include <stdio.h>
int linear_search(int[], int, int);
int main()
{
   int array[100], search, c, n, position;
    scanf("%d", &n); 

    for (c = 0; c < n; c++)
    scanf("%d", &array[c]); 

    scanf("%d", &search);  
	position = linear_search(array, n, search);

    if (position != -1) {
        printf("%d is present at location %d.", search, position);
    } else {
        printf("%d is not present in the array.", search);
    }

    return 0;
}
int linear_search(int arr[], int size, int search) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            return i + 1; 
        }
    }
    return -1; 
}




#include <stdio.h>
int main()
{
 int c, n, search,
 array[100];
 scanf("%d",&n); 

 for (c = 0; c < n; c++)
 scanf("%d",&array[c]);

 scanf("%d", &search); 
	int left = 0;
	int position=-1;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == search) {
            position= mid + 1; 
        }

        if (array[mid] < search) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
	if (position != -1) {
        printf("%d found at location %d.", search, position);
    } else {
        printf("Not found! %d isn't present in the list.", search);
    }
    return 0;
}




#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n); 
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
  int temp;
  for (int i = 0; i < n / 2; i++) 
  {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
  }
printf("Reversed array elements are:\n");

  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
  return 0;
}