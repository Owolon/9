#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#define CRT_NO_SECURE_DEPRECATE
#define ROW 9
#define COL 9
#define A 30
#define B 60
//1
void main()
{
	setlocale(LC_CTYPE, "RUS");
	int col, row;
	printf("\n");
	for (row = 1;row<=ROW;++row)
	{
		for (col = 1;col<=COL;++col)
			printf("%5d", col*row);
			printf("\n");
			}
	system("pause");
//1.2
/*
	int col, row;
	int COLa = 1;
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
//1.3
	int s, e;
	printf("Введите начало:");
	scanf_s("%d", &s);
	printf("Введите конец:");
	scanf_s("%d", &e);
	for (int row = s; row <= e; ++row)
	{
		printf("%4d", row);
		if (row % 10 == 0)
		{
			printf("\n");
		}
	} 
//2
	while (1)
	{
		char a;
		double chislo,ch,g,v,m;
		int h = 0, h1 = 0, h2 = 0, h3 = 0, h4 = 0, f;
		printf("\nВведите произвольное длинное число:");
		scanf_s("%lf", &chislo); //Сохранение числа \/
		ch = chislo;
		g = chislo;
		v = chislo;
		m = chislo;
		int n = 0;
//
		while (chislo > 1) //Счетчик кол-во цифр \/
		{
			n = n + 1;
			chislo = (double)chislo/10;
			if (chislo == 0)
			{
				break;
			}
		}
		printf("Кол-во цифр:%d\n", n);
//
		while (g > 1) // Счетчик 3 \/
		{
			if ((int)g % 10 == 3)
			{
				h = h + 1;
			}
			g = (double)g / 10;
		}
		printf("Кол-во 3:%d\n", h);
//
		f = (int)v % 10;
		while (v > 1) // Счетчик последней цифры \/
		{
			if ((int)v % 10 == f)
			{
				h1 = h1 + 1;
			}
			v = (double)v / 10;
		}
		printf("Кол-во последней введенной цифры:%d\n", h1);
//
		printf("Произведение последней и второй цифры:\n");
		
		h3 = (int)(m / pow(10, n-2))%10;
		printf("Последняя %d и Вторая %d", f, h3);
		printf("\nПроизведение:%d", h3*f);
//3 дз
		char w;
		int R;
		int z = 0, y = 0, c = 0, d = 0;

		printf("\nВведите радиус:");
		scanf_s("%d", &R);
		printf("Введите символ для построения фигуры:");
		scanf_s("\n%c", &w);
		//2*R - основание треугольника
		//R - 
		c = (int)(R * cos(A));//Высота треугольника
		y = R/3;//Кол-во символов треугольника
		z = c-y;//Кол-во пробелов
		int osn = 2 * R;

		for (int i = 1; i <=c; ++i)
		{
			for (int j = c; j > i; --j)
			{
				printf("_");
			}
			for (int k = 0; k < osn / 2; ++k)
			{
				if (k < i)
				{
					printf("\n%s", &w);
				}
				else
				{
					printf("_");
				}
			}
			printf(" \n");
		}
		printf("\nПродолжить ? (Да - y, нет - n)");
		scanf_s("%c", &a, 2);
		if ((a = getchar()) == 'n') break;
	}
}
