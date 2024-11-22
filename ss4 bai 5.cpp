#include<stdio.h>
int main()
{
	int n,a,b,c;
	printf("Moi ban nhap vao so co 3 chu so :");
	scanf("%d",&n);
	// ktra 4 chu so
	if(n>99 && n<1000)
	{
		a=n/100;
		b=(n/10)%10;
		c=n%10;
		
		if(c>b &&c<a)
		{
			printf("Chu so thu 3 nam giua so thu 2 va so thu nhat");
		}
		else{
			printf("so thu 3 ko nam giua so thu 2 va so thu nhat");
		}
	}
	else
	{
		printf("Nhap sai");
	}
	return 0;
 } 
