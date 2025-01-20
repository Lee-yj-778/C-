#include <stdio.h>

int main() {
	int index;
	int primes = 0;

	for (int i = 2; i < 1000; i++) {
		for (index = 2; index < i; index++) {
			if (i % index == 0) {
				break;
			}
		}
		if (index == i) {
			primes++;
			printf("%4d%s", i, (primes % 5) == 0 ? "\n" :" ");
		}
	}
	printf("%d", primes);
		return 0;
	}