#include<stdio.h>

void len(int arr[],int total_size)
{
	int length = total_size/sizeof arr[0];
	
	printf("length of array is %d\n",length);


}
int main()
{
	int arr[] = {5,8,9,4,5,8,9,7,2,3,5,4,6,8,2};
	
	len(arr, sizeof(arr));
	
	return 0;
}