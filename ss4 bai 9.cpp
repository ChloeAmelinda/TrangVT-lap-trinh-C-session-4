#include<stdio.h>
int main()
{
	int day,month,year;
	printf("Nhap ngay thang nam :");
	scanf("%d %d %d",&day, &month, &year);
	switch(month)
	{
	case 1:case 3:case 5: case 7 :case 8:case 10:case 12:
 	if(day>0 && day<=31)
	{
		printf("Ngay %d thang%d nam%d", day, month,year);
	}
	else 
	{
		printf("Khong hop le");
	}
	break;
	
	case 4:case 6:case 9: case 11:
 	if(day>0 && day<=30)
	{
		printf("Ngay %d thang%d nam%d", day, month,year);
	}
	else 
	{
		printf("Khong hop le");
	}
	break;
	case 2:
 	if(day>0 && day<=29)
	{
		printf("Ngay %d thang%d nam%d", day, month,year);
	}
	else 
	{
		printf("Khong hop le");
	}
	break;
	default:
		printf("khong hop le");	
	}
	
	return 0;
}
	
		
