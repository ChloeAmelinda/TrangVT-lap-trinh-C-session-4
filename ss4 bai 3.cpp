#include<stdio.h>
int main()
{
	int n;
	printf("Moi ban nhap so bat ki :");
	scanf("%d", &n);
	
	if(n%3==0&& n%5==0)
	{
		printf("La so chia het cho 3 va 5 ");
	}
	
	else 
	{
		if(n%5==0)
		{
			printf("La so chi chia het cho 5 ");
		}
		else
		{
			if(n%3==0)
			{
				printf("La so chi chia het cho 3");
			}
		}
	}
	
	return 0;
	
}
