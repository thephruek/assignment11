#include<stdio.h>
int main() {
	int x;
	printf("Enter Number : ");
	scanf_s("%d", &x);
	for (int i = 1; i <= x; i++) {
		for (int b = x - 3; b <= x; b++) {
			printf(" ");
		}
		for (int b = x - (x - 4); b <= x; b++) {
			printf("*");
		}
		for (int b = x - (x - 5); b <= x; b++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int j = x; j >= i; j--) {
			printf("*");
		}
		for (int j = x - 1; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}