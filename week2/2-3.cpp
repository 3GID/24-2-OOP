#include <stdio.h>
void show(const char* text)
{
	printf("String: %s\n", text);
}
void show(int number)
{
	printf("Number: %d\n", number);
}
int main()
{
	const char* text = "Hello, World!";
	int number = 10;
	show(text);
	show(number);
	return 0;
}
