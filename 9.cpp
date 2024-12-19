#include<stdio.h>

int main(){
	int n;
	printf("nhap so hang va so cot cua mang: ");
	scanf("%d",&n);
	int arr[n][n];
	for (int i =0; i< n; i++){
		for (int j =0; j< n; j++){
			printf("nhap phan tu vi tri index[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}	
	}
	int flag2=0,count=0,count2=0;
	for (int x =0; x< n; x++){
		for (int y =0; y< n; y++){
			int flag=arr[x][y];
			for (int i =0; i< n; i++){
				for (int j =0; j< n; j++){
					if(arr[i][j]==flag){
						count+=1;
					}
				}
			}
			n--;
			if(count>count2){
				flag2=flag;
				count2=count;
				count=0;
			}
		}
	}
	printf("%d",flag2);
	return 0;
}
