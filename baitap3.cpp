#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap so nguyen: ");
	scanf("%d", &n);
	if(n < 2) {
		printf("%d khong phai la so nguyen to", n);
	} else {
		int i;
		int a = 1;
		for(i = 2; i <= sqrt(n); i++) {
			if(n % i ==0) {
				a = 0;
			}	
		}
		if(a==1) {
			printf("%d la so nguyen to", n);
		} else {
			printf("%d khong phai la so nguyen to", n);
		}
	}
}
