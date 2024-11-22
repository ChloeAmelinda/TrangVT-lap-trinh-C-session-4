#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Moi ban nhap do dai canh a:");
	scanf("%d", &a);
	
	printf("Moi ban nhap do dai canh b:");
	scanf("%d", &b);
	
	printf("Moi ban nhap do dai canh c:");
	scanf("%d", &c);
	if(a<0 &&b<0 &&c<0)
	{
		printf("Khong hop le");
		return 1;
		
	}
	else if( a+b>c &&b+c>a &&a+c>b)
	{
		printf("La tam giac");
	}
	else 
	{
		printf("Khong la tam giac");
	}
	
	
	return 0;
}
