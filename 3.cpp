#include<stdio.h>

int main(){
	int m;
	printf("nhap so hang va so cot cua mang: ");
	scanf("%d",&m);
	int arr[m][m];
	for (int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			printf("phan tu trong mang co index[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for (int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
