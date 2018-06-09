#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <iostream>

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	
	int n = 0;

	do
	{
		printf("n = ");
		scanf("%d", &n);

		if (n == 1) {
			printf("1.	Определить, является ли данное целое число четным\n");

			int x = 1 + rand() % 20;
			printf("x = %d\n", x);

			(x % 2 == 0) ? printf("true\n") : printf("false\n");
		}
		else if (n == 2) {
			printf("2.	Записать условие, которое является истинным, когда  целое А кратно двум или трем.\n");
			
			int A = 1 + rand() % 20;
			printf("A = %d\n", A);

			if ((A % 2 == 0) || (A % 3 == 0)) printf("true\n"); else printf("false\n");
		}
		else if (n == 3) {
			printf("3.	Записать условие, которое является истинным, когда каждое из чисел  А и В нечетное\n");

			int a = 1 + rand() % 20, b = 1 + rand() % 20;
			printf("A = %d\tB = %d\n", a, b);

			if (a % 2 != 0 && b % 2 != 0) printf("true\n"); else printf("false\n");
		}
		else if (n == 4) {
			printf("4.	Вычислить значение логических выражений при следующих значениях логических переменных X=0, Y=0, Z=1\na. X<Y>Z\nb. X>Y\nc. (X>Z)<Y\n\n");
			
			int x = 0, y = 0, z = 1;

			(x < y > z) ? printf("a. true\n") : printf("a. false\n");
			(x > y) ? printf("b. true\n") : printf("b. false\n");
			((x > z) < y) ? printf("c. true\n") : printf("c. false\n");
		}
		else if (n == 5) {
			printf("5.	Записать логическое выражение, описывающее область определения функции \na. y = 2tg x;\nb. у = 3 / (x - 1).\n\n");
			
			int x = 1 + rand() % 2, y;

			y = 2 * tan(x);
			printf("a. y = %d\n", y);
			if (x != 1) printf("b. y = %d\n", y = 3/(x-1));
		}
		else if (n == 6) {
			printf("6.	Вычислить значения логических выражений при следующих значениях логических переменных А=1, В=0, С=1\na. A<(A>B)<C\nb. A<C>(B<C)\nc. (A<B>C)<A\n\n");

			int A = 1, B = 0, C = 1;
			 
			(A < (A > B) < C) ? printf("a. true\n") : printf("a. false\n");
			(A < C > (B < C)) ? printf("b. true\n") : printf("b. false\n");
			((A < B > C) < A) ? printf("c. true\n") : printf("c. false\n");
		}
		else if (n == 7) {
			printf("7.	Записать логическое выражение определяющее, что число А является трехзначным\n");
			
			int a;

			printf("A = ");
			scanf("%d", &a);

			if (a / 100 > 0 && a / 100 <= 9) printf("true\n"); else printf("false\n");
		}
		else if (n == 8) {
			printf("8.	Записать условие, которое является истинным, когда только одно из чисел А, В и С меньше 45.\n");

			int a = 20 + rand() % 40, b = 20 + rand() % 40, c = 20 + rand() % 40;

			printf("a = %d;\tb = %d;\tc = %d.\n\n", a, b, c);

			if ((a < 45 && b >= 45 && c >= 45) || (b < 45 && a >= 45 && c >= 45) || (c < 45 && a >= 45 && b >= 45)) printf("true\n"); else printf("false\n");
		}
		else if (n == 9) {
			printf("9.	Записать условие, которое является истинным, когда целое А не кратно трем и оканчивается нулем\n");

			int a = 1 + rand() % 99;

			printf("A = %d\n", a);

			if (a % 3 != 0 && a % 10 == 0) printf("true\n"); else printf("false\n");
		}
		else if (n == 10) {
			printf("10.	Записать логическое выражение, которое определяет, принадлежит ли число А интервалу  от -137 до -51 или интервалу от 123 до 55.\n");

			int a = -250 + rand() % 500;
			printf("a = %d\n\n", a);

			if ((a >= -137 && a <= -51) || (a >= 55 && a <= 123)) printf("true\n"); else printf("false\n");
		}

	}  while (n > 0);
	
}