#include<stdio.h>
#include<time.h>

//Write a function that gives the transpose of the matrix.
//Rows in a transposed matrix become a column.

int main(){
	
	int n,m;
	time_t t;
	printf("Enter N X M:");
	scanf("%d",&n);
	scanf("%d",&m);
	int matrix[n][m];
	int matrix1[m][n];
	srand((unsigned) time(&t));
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			matrix[i][j]=(rand() %25);
		}
	}
	printf("Matrix={");
	for(j=0;j<n;j++){
		printf("{");
		for(i=0;i<m;i++){
			printf("%d",matrix[j][i]);
			if(i<m-1){
				printf(",");
			}
		}
		printf("}");
		if(j<n-1){
			printf(",");
		}
	}
	printf("}");
	
	int b=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			matrix1[b][i]=matrix[i][j];
			b++;
		}
		b=0;
	}
	
	printf("\nTranspose={");
	for(j=0;j<m;j++){
		printf("{");
		for(i=0;i<n;i++){
			printf("%d",matrix1[j][i]);
			if(i<n-1){
				printf(",");
			}
		}
		printf("}");
		if(j<m-1){
			printf(",");
		}
	}
	printf("}");
	
	return 0;
}
