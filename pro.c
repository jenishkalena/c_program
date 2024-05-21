#include<stdio.h>
int main()
{
	int n;
	printf("enter the elements in the arry:");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter the elements in the arry:\n");
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
		int sum=0;
		for(int i=0;i<n;i++){
		sum+=arr[i];
		}
		
		printf("sum of all elemets in the arry:%d\n",sum);
}
