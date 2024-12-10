#include <stdio.h>
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
	int a,b;
	printf("nhap so thu 1: ");
	scanf("%d",&a);
	printf("nhap so thu 2: ");
	scanf("%d",&b);
	printf("ucln cua 2 so la %d", ucln(a,b));
	return 0;
}
