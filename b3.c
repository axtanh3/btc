/*
 * Bai 3 : nhap day 4 so thuc, tinh max va in ra man hinh (ko dung for)
 */
 
#include <stdio.h>
#include <conio.h>

int main(void)
{
	float a, b, c, d, max;
	
	scanf("%f%f%f%f", &a, &b, &c, &d);
	
	max = (a > b) ? a : b;
	max = (c > max) ? c : max;
	max = (d > max) ? d : max;
	
	printf("Max :\n%4.2f", max);
	
	getch();
	return 0;
}
