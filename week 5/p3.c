#include  <stdio.h>	

void findCommonElements(int arr1[], int m, int arr2[], int n) 
{
	int i = 0, j = 0;
	while (i < m && j < n) 
	{
		if (arr1[i] == arr2[j]) 
		{
			printf("%d ", arr1[i]);
			i++;
			j++;
		} 
		else if (arr1[i] < arr2[j]) 
		{
			i++;
		} 
		else 
		{
			j++;
		}
	}
	if (i == 0 && j == 0) 
	{
		printf("No Common Elements Exist\n");
	}
}

int main() 
{
	int m, n;
	printf(" ENTER THE SIZE OF  FIRST ARRAY : ");
	scanf("%d", &m);
	int arr1[m];
	printf(" ENTER FIRST ARRAY : ");
	for (int i = 0; i < m; i++) 
	{
		scanf("%d", &arr1[i]);
	}
	printf(" ENTER THE SIZE OF SECOND ARRAY : ");
	scanf("%d", &n);
	int arr2[n];
	printf(" ENTER SECOND ARRAY : ");
	for (int i = 0; i < n; i++) 
	{
		scanf("%d", &arr2[i]);
	}
	findCommonElements(arr1, m, arr2, n);
	return 0;
}
