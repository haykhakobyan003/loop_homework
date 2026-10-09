#include <stdio.h>

int main() {
	int n = 0;
	printf("Enter an intege: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d\n", i);	
	}

	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum += i;
	}		
	printf("The sum is: %d\n", sum);
	
	int i = 1;
	while (i <= n) {
		if (i % 2 == 0) {
			printf("Even number: %d\n", i);
		}
		i++;
	}
	
	int mul = 0;
	for (int i = 1; i <= 10; i++) {
		mul = n * i;
		printf("%d * %d = %d\n", n, i, mul);
	}	
	int num = 1;
	sum = 0;
	while (num != 0) {
		printf("Enter some numbers after 0: ");
		scanf("%d", &num);
		sum += num;
	}
	printf("The sum is: %d\n", sum);
	return 0;
}
