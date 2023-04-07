#include<stdio.h>
int main()
{
	int arr1[2][3]={1,2,3,4,5,6};
	int arr2[3][2];
	int i,j;
	printf("Display Array1 elements\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			arr2[j][i]=arr1[i][j];
		}
	}
	printf("Displaying array2 elements\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
