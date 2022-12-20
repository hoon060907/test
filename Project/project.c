#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
	srand(time(NULL));
	int a;
	int b;
	for (int i = 1; i <= 10; i++)
	{
		a = rand() % 10;
		b = rand() % 10;
		printf("[%d/10] %d - %d", &i, &a, &b);
	}
}