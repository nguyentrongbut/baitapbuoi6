#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("nhap so nguyen: ");
    scanf("%d", &n);
    int a = 0 ;
    while(n != 0) {
        a = a * 10 + n%10;
        n = n / 10;
    }
    printf("\nSo nghich dao la: %d",a);
}
