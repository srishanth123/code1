#include <stdio.h>
int search(int arr[], int n,int x)
//int main() 
{
	int i;
	printf("\n enter the element to be searched");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	if (arr[i] == x)
	   return i;
	return -1;
}
int main(void)
{
	int arr[] = {2,3,4,10,40};
	int x=10;
	int n = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr , n , x);
    (result == -1);
           printf("The element is not present in the array:");
           printf("The element is present at index",result);
          
       return 0;
}

