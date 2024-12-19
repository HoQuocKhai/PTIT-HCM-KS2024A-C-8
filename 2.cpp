#include<stdio.h>

int main (){
	int n,arr[5]={1,2,3,4,5};
	printf("nhap vao phan tu can kiem tra vi tri: ");
	scanf("%d",&n);
	int flag,flag1;
	for (int i=0;i<5;i++){
		if(n-arr[i]!=0){
			flag=0;
		}else{
			flag=1;
			printf("vi tri phan tu trong mang: %d",i);
			break;
		}
	}
	if(flag==0){
		printf("phan tu khong ton tai trong mang");
	}
	return 0;
}
