#include<stdio.h>
int main()
{
	int n;
	printf("Moi ban nhap so bat ki :");
	scanf("%d", &n);
	
	if(n>0)
	{
		printf("La so nguyen duong ");
	}
	
	else 
	{
		if(n<0)
		{
			printf("La so nguyen am ");
		}
	}
	
	return 0;
	
}
