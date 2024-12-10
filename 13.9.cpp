#include <stdio.h>
#include <stdbool.h>

int songuyento(int a){
	if ( a < 2)
	return 0;
	for ( int i = 2; i < a; i ++){
		if ( a % i == 0) return 0;
	}
	return 1;
}

void addAr(int a, int b, int ar[100][100]) {
    printf("Nhap gia tri cho cac phan tu cua mang:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("ar[%d][%d]: ", i, j);
            scanf("%d", &ar[i][j]);
        }
    }
}

void printAr(int a, int b, int ar[100][100]) {
    printf("Gia tri cac phan tu trong mang:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}


void printBorders(int a, int b, int ar[100][100]) {
    printf("Cac phan tu tren duong bien:\n");
    for (int j = 0; j < b; j++) {
        printf("%d ", ar[0][j]); 
    }
    for (int i = 1; i < a - 1; i++) {
        printf("%d ", ar[i][0]); 
        printf("%d ", ar[i][b - 1]); 
    }
    for (int j = 0; j < b; j++) {
        printf("%d ", ar[a - 1][j]);
    }
    printf("\n");
}



void printSonguyento(int a, int b, int ar[100][100]) {
    printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (songuyento(ar[i][j])) {
                printf("%d ", ar[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int a, b;
    printf("Nhap so hang: ");
    scanf("%d", &a);
    printf("Nhap so cot: ");
    scanf("%d", &b);
    
    int ar[100][100]; 

    int choice;
    do {
        printf("\n\tMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n2. In gia tri cac phan tu cua mang theo ma tran\n3. In ra cac phan tu o goc theo ma tran\n4. In ra cac phan tu nam tren duong bien theo ma tran\n5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n6. In ra cac phan tu la so nguyen to theo ma tran\n7. Thoat\nMoi ban nhap so can chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addAr(a,b,ar);
                break;
            case 2:
                printAr(a,b,ar);
                break;
            case 3:
            	printf("Chua hoan thanh! Vui long chon cai khac!\n");
                break;
            case 4:
                printBorders(a,b,ar);
                break;
            case 5:
            	printf("Chua hoan thanh! Vui long chon cai khac!\n");
                break;
            case 6:
                printSonguyento(a,b,ar);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long thu lai\n");
        }
    } while (choice != 7);

    return 0;
}
