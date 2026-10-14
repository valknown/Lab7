#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>

int task1();
int task2();

void main() {
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2();
}

int task1()
{
	char c;
	printf("Введите символы 'a' or 'b': ");
	scanf("%c", &c);
	switch (c)
	{
	case 'a':
		printf("Введено 'a'.\n");
		break;
	case 'b':
		printf("Введено 'b'.\n");
		break;
	default:
		if (isdigit(c)) {
			puts("Это цифра");
			break;
		}
		else if (isalpha(c)) {
			puts("Это буква");
			break;
		}
		printf("Неизвестный символ\n");
	}
	return 0;
}

int task2() {
	float x, y;
	char c;
	puts("Введите первое число, знак операции и второе число без пробелов.");
	scanf("%f%c%f", &x, &c, &y);
	switch (c) {
	case '+':
		printf("=%f", x + y);
		break;
	case '-':
		printf("=%f", x - y);
		break;
	case '*':
		printf("=%f", x * y);
		break;
	case '/':
		printf("=%f", x / y);
		break;
	case '^':
		printf("=%f", pow(x, y));
		break;
	default:
		puts("неизвестный знак операции");
	}
	return 0;
}