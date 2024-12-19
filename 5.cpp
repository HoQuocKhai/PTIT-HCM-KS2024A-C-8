#include<stdio.h>

int main(){
	int n;
	printf("nhap so hang va so cot cua mang: ");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			printf("nhap phan tu co vi tri index[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			if(i==0||i==(n-1)||j==0||j==(n-1)){
				sum+=arr[i][j];
			}
		}
	}
	printf("tong cac phan tu tren duong vien cua ma tran: %d",sum);
	return 0;
}
