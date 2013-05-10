/*
 * B5 : GPT bac 2
 */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	float a, b, c, delta;

	do
	{
		printf("Nhap a, b, c (ax^2 + bx + c = 0, a # 0) : ");
		scanf("%f%f%f", &a, &b, &c);
	}
	while (a == 0);
	delta = b*b - 4*a*c;
	
	if (delta < 0)
		printf("\nVo nghiem\n");
	else if (delta == 0)
		printf("\nNghiem kep : %4.2f\n", b/(2*a));
	else
		printf("Pt co 2 nghiem\n X1= %4.2f\n X2= %4.2f", (-b + sqrt(delta))/(2*a) , (-b - sqrt(delta))/(2*a) );
	
	getch();
	return 0;
}
