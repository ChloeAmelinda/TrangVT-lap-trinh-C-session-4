#include<stdio.h>
int main()
{
	float n;
	printf("Moi ban nhap vao so dien :");
	scanf("%f", &n);
	if(n<0)
	{
		printf("Khong hop le");
		return 1;
	}
	else if(n>=0&&n<50)
	{
		printf("So tien dien la : 10000");
	}
	else if(n>=50 && n<100)
	{
		printf("So tien dien la : 15000");
	}
	else if(n>=100 && n<150)
	{
		printf("So tien dien la : 20000");
	}
	else if(n>=150 && n<200)
	{
		printf("So tien dien la : 25000");
	}
	else if(n>=200)
	{
		printf("So tien dien la : 30000");
	}
	
	return 0;
}
