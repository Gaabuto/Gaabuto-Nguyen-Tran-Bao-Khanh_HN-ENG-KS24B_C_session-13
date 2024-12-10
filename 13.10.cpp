#include <stdio.h>
void addAr(int size, int ar[100]){
	for( int i = 0; i < size; i ++){
				printf("moi ban nhap so thu %d: ", i + 1);
				scanf("%d",&ar[i]);
}
}

void printAr(int size, int ar[100]){
	printf("cac phan tu dang quan ly la: ");
	for ( int i = 0; i < size; i ++){
		printf("%d ",ar[i]);
	}
	printf("\n");
}
void addComponent(int ar[100], int *size, int position, int component){

		for (int i = *size; i > position; i --){
			ar[i] = ar[i - 1];
		}
		ar[position]=component;
		(*size)++;
	}



int main(){
	int choose,size, ar[100];
	do{
		printf("\t MENU  \n1.Nhap so phan tu can nhap va cac gia tri phan tu  \n2.In ra cac gia tri phan tu dang quan ly  \n3.Them 1 phan tu vao vi tri chi dinh  \n4.Sua mot phan tu o vi tri chi dinh \n5.Xoa mot phan tu o vi tri chi dinh \n6.Sap xep cac phan tu \n7.Tim kiem phan tu nhap vao  \n8.Thoat \nMoi ban nhap so can chon: ");
		scanf("%d",&choose);
		switch(choose){
		case 1:{
			printf("moi ban nhap so phan tu co trong mang: ");
			scanf("%d",&size);
			addAr(size,ar);
			break;
	}
		case 2:{
			printAr(size,ar);
			break;
		}
		case 3:{
			int position,component;
			printf("moi ban cho them vi tri phan tu can chen: ");
	        scanf("%d",&position);
	        if(position <= 0 || position >= size + 2){
		printf("vi tri nhap k hop le");
	}else{
		printf("moi ban nhap phan tu can chen: ");
		scanf("%d",&component);
			addComponent(ar, &size, position - 1, component);
		}
			break;
		}
		case 4:{
			int position,component;
			printf("moi ban nhap vi tri phan tu can sua: ");
	        scanf("%d",&position);
	        if(position <= 0 || position >= size + 1){
		printf("vi tri nhap k hop le");
	}else{
		printf("moi ban nhap phan tu can sua: ");
		scanf("%d",&component);
		ar[position] = component;
		size++;
		}
			break;
		}
		case 5:{
			int delAr;
			printf("moi ban nhap vi tri can xoa: ");
			scanf("%d",&delAr - 1);
			for( int i =delAr; i < size; i ++){
				ar[i] = ar[i + 1];
			}size --;
			
			break;
		}
		case 6:{
			printf("Chua hoan thanh! Vui long chon cai khac!\n");			
			break;
		}
		case 7:{
			printf("Chua hoan thanh! Vui long chon cai khac!\n");
			break;
		}
		default:{
			printf("Lua chon k hop le, vui long thu lai\n");
			break;
		}
	
		
		
		
}	
	}while(choose != 8);
	printf("Tam biet ban!");
	
	
	
	return 0;
}
