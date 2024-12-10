#include <stdio.h>

void creatmatrix(int column, int row, int ar[100][100]){
	for ( int i = 0; i < column; i ++){
		for ( int j = 0; j < row; j ++){
			printf("moi ban nhap [%d][%d]: ",i,j);
			scanf("%d",&ar[i][j]);
		}
	}
}

void printmatrix(int column, int row, int ar[100][100]){
	for ( int i = 0; i < column; i ++){
		for ( int j = 0; j < row; j ++){
			printf("%d", ar[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int column, row,ar[100][100];
	printf("moi ban nhap so hang: ");
	scanf("%d", &column);
	printf("moi ban nhap so cot: ");
	scanf("%d", &row);
	creatmatrix(column,row,ar);
	printmatrix(column,row,ar);
	
	
	
	
	
	
	return 0;
}
