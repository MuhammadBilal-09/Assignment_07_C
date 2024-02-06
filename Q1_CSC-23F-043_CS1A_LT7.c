#include<stdio.h>

#define max_rows 100
#define max_cols 100

int main()
{
   int i, j, rows, cols;
   
    printf("Enter the number of rows and cols: ");
    scanf("%d %d", &rows, &cols);

    if (rows > max_rows || cols > max_cols)
	{
		printf("Error: Exceeded maximum size of rows and columns.\n");
	    return 1;
	}
	
	int arr[max_rows][max_cols];
	printf("Enter the elements of the 2D array:\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int sum = 0;
	for(i = 0; i < rows; i++)
	{
		sum += arr[i][0];
	}
	
	for(j = 1; j < cols; j++)
	{
		int currentSum = 0;
		for(i = 0; i < rows; i++)
		{
			currentSum += arr[i][j];
		}
		if(currentSum != sum)
		{
			printf("The 2D array is not column-magic.\n");
			return 0;
		}
	}
	
	printf("The 2D array is column-magic.\n");

	return 0;
}