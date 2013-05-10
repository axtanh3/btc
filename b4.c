/*
 * B4 : Viet ctr tinh luong thuc. lanh~ cua 1 nv
 */
 
#include <stdio.h>
#include <conio.h>

#define DA 12/100
#define HRA 150
#define TA 120
#define OTHER 450
#define TAX_PF 14/100
#define TAX_IT 15/100


int main(void)
{
	int lcb, ltl;	
	lcb = 12000;
	ltl = lcb * (DA + 1 - TAX_IT - TAX_PF) + HRA + TA + OTHER;
	
	printf("LTL : $%d\n", ltl);
	
	getch();
	return 0;
}
