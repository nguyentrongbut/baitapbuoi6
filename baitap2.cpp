#include<stdio.h>

int main()
{
	int n;
	printf("nhap so nguyen: ");
	scanf("%d", &n);
	int i;
	i=0;
	while(i<n){
	 if(i%2==0 && i%3==0)
	  printf("%d ", i);
	 i++;
	}
}
