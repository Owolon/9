#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define CRT_NO_SECURE_DEPRECATE
#define ROW 9
#define COL 9
//1
void main()
{
	int col, row;
	printf("\n");
	for (row = 1;row<=ROW;++row)
	{
		for (col = 1;col<=COL;++col)

			printf("%5d", col*row);
			printf("\n");

			}
	system("pause");

	/*
	int col, row;
	COLa = 1;
	printf("\n");
	for (row = 1;row<=ROW;++row)
	{
		for (col = 1;col<=COLa;++col)
			printf("%5d", col*row);
			printf("\n");
			}
		COLa+=1
	system("pause");
	*/

	int ROWl;
	printf("\n");
	for (int row = 40; row <= 80; row++)
	{
		ROWl = row;
		for (int col = 1; col <= 10; col++)
			printf("%4d\t", ROWl + 1);
		}
	printf("\n");
}
