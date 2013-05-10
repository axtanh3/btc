/*
 * Bai 2 : Viet ctr nhap diem 3 hoc vien, tinh trung binh (rnkq la so thuc)
 */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int diem_hv1, diem_hv2, diem_hv3;
	float tb;
	
	printf("Nhap diem 3 hoc vien theo thu tu :");
	
	//input, diem >= 0
	do
	{
		scanf("%d%d%d", &diem_hv1, &diem_hv2, &diem_hv3);
	}
 	while (diem_hv1 < 0 || diem_hv2 < 0 || diem_hv3 < 0);
	
	//tinh trung binh phai ep kieu sang float
	tb = ((float) diem_hv1 + diem_hv2 + diem_hv3)/3;
	
	//ouput
	printf("\nDiem trung binh : %4.2f\n", tb);
		
	getch();
	return 0;
}
