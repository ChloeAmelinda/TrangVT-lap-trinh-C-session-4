#include<stdio.h>
int main()
{
	int n;
	printf("Moi ban nhap vao so nam :");
	scanf("%d", &n);
	if(n<0)
	{
		printf("Khong hop le");
		return 1;
		
	}
	else if(((n%4==0) && (n%100!=0)) || (n%400==0))
	{
		printf("Nam nhuan co 29 ngay");
	}
	else 
	{
		printf("Khong phai nam nhuan");
	}
	
	
	return 0;
}
