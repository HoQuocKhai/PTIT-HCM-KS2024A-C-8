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
		for(int j=0; j<m;j++){
			if(i==j){
				sum+=arr[i][j];
				printf("%d",arr[i][j]);
			}else {
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("tong cua cac phan tu tren duong treo: %d",sum);
	return 0;
}
