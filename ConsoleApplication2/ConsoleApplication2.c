#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "ru");

	printf("Hello World! Привет мир!\n");
}