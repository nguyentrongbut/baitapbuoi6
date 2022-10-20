#include<stdio.h>
int main()
{
    int n;
    int s = 0;
        printf("nhap so nguyen n: ");
        scanf("%d", &n);
    if(n>0) {
    	int i=1;
    	while(i <= n - 1) {
			if(n % i == 0)			
            s += i;
        	i++;
    }
    	if(s == n)
    	{ 
        	printf("%d la so hoan hao",n); 
    	} else {
        	printf("%d khong phai la so hoan hao",n); 
    	}
	} else 
	printf("%d khong phai la so hoan hao",n); 
}
