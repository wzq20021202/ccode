#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "hello";
	char arr2[] = { 'h','e','l','l','o','\0' };

	printf("%d\n", strlen("hello"));

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	return 0;
}
