#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>// 원주율구하기
int main() {
	int n;
	int i;
	int x, y;
	int tmp = 0;
	
	srand(time(0));

	n =rand();
	int r = rand();
	for (i = 0; i < n; i++) {
		x = (int)(((double)rand() / RAND_MAX) * (2 * r));
		y = (int)(((double)rand() / RAND_MAX) * (2 * r));
		if ((x - r) * (x - r) + (y - r) * (y - r) <= r * r) {
			tmp++;
		}
	}
		printf("%.2f", (float)tmp / n * 4);
	return 0;
}