#include<stdio.h>

#define max_rows 10
#define max_cols 10

int i, j;
//int matrix[max_rows][max_cols];

void inputMatrix(int matrix[max_rows][max_cols], int rows, int cols)
    {
         printf("Enter the matrix elements:\n");
	     for(i = 0; i < rows ; i++)
	     {
		    for(j = 0; j < cols; j++)
		    {
			printf("Matrix[%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		    }
	     }
    }
	
void printMatrix(int matrix[max_rows][max_cols], int rows, int cols)
    {
	     for(i = 0; i < rows; i++)
		 {
			 for(j = 0; j < cols; j++)
			 {
				 printf("%d ", matrix[i][j]);
			 }
			 printf("\n");
		 }	
	}
	
int main()
{
	int k, m, n, o, p, s, t, u, v;
	
	printf("Enter the number of rows and columns for MatrixA:\n");
	scanf("%d %d", &m, &n);
	int matrixA[max_rows][max_cols];
	inputMatrix(matrixA, m, n);
	
	printf("Enter the number of rows and columns for matrixB:\n");
	scanf("%d %d", &s ,&t);
	int matrixB[max_rows][max_cols];
	inputMatrix(matrixB, s, t);
	
	
	if(m == s && n == t)
	{
		int sumMatrix[max_rows][max_cols];
		for(i = 0; i < m; ++i)
		{
			for(j = 0; j < n; j++)
			{
				sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
			}
		}
		
		
		int productMatrix[max_rows][max_cols];
		for(i = 0; i < m; i++)
		{
		    for(j = 0; j < t; j++)
			{
				productMatrix[i][j] = 0;
				for(k = 0; k < n; k++)
				{
					productMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
				}
			}				
		}
		
		
		printf("\nAddition:MatrixA + MatrixB:\n");
		printMatrix(sumMatrix, m, n);
		
		printf("\nMultiplication:MatrixA * MatrixB:\n");
		printMatrix(productMatrix, m, t);
	}
	else
	{
		printf("Sorry! Matrices are not compatible for addition and multiplication.\n");
	}
      return 0;	
}