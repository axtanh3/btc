/*
 * Bai 1: Nhap vao ho ten va tuoi cua sv tu ban phim roi in ra :-P
 */

#include <stdio.h>
#include <conio.h>
 
int main(void)
{
    char hoten[29];
	unsigned int tuoi;
	//input
	printf("Ten sv :");
	gets(hoten);	
	do
	{
		printf("\nTuoi sv (17 < tuoi <= 100 :");
		scanf("%d", &tuoi);	
	} 
	while (tuoi < 18 || tuoi > 100);
	
	//output
	printf(" ----------------------------------- \n");
	
	printf("| Ho ten:   %-24s|\n", hoten);
	
	printf("| Tuoi  :   %-24d|\n", tuoi);

	printf(" ----------------------------------- \n");
	getch();
	return 0;
}
