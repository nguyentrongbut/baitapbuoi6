#include<stdio.h>

int main()
{
	int n;
	printf("Nhap 1 so nguyen: ");
	scanf("%d", &n);
	int i;
	i=0;
	printf("cac so le nho hon %d la: ",n);
	while(i<n){
		if(i%2==1)
		printf("%d ", i);
		i++;
	}
}
