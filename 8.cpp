#include<stdio.h>

int main(){
	int m;
	printf("nhap so hang va so cot cua mang: ");
	scanf("%d",&m);
	int arr[m][m],sum=0;
	for (int i=0; i < m; i++){
		for(int j=0; j<m;j++){
			printf("nhap phan tu vi tri index[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for (int i=0; i < m; i++){
		int count=1;
		for(int j=0; j<m;j++){
			if(i==0&&j==(m-1)||j==0&&i==(m-1)||i==count&&j==(m-count-1)){
				sum+=arr[i][j];
				printf("%d",arr[i][j]);
			}else {
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("tong cua cac phan tu tren duong treo phu: %d",sum);
	return 0;
}
