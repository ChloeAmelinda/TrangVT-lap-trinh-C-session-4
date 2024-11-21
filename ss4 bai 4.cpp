#include<stdio.h>
int main()
{
	int n;
	printf("Moi ban nhap so thang:");
	scanf("%d", &n);

	if(n>=1 && n==4||n==6||n==9||n==11)
	{
		printf("Thang co 30 ngay");
	}
	
	else 
	{
		if(n>=1 && n==1||n==3||n==5||n==7||n==8||n==10||n==12)
		{
			printf("Thang co 31 ngay ");
		}
		else
		{
			if(n>=1 && n==2)
			{
				printf("Thang co 28 hoac 29 ngay");
			}
		}
	}
	
	return 0;
}
