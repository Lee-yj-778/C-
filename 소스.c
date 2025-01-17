#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

	int card[52] = { 0, };
	int i;
	int tmp;
	int result[52] = { 0, };
	srand(time(0));

	int rand_min = 0;
	int rand_max = 51;

	for (i = 0; i < 52; i++) {
		tmp = (int)(((double)rand() / RAND_MAX) * (rand_max - rand_min) + rand_min);

		if (card[tmp]) {
			while (card[tmp] == 1) {
				tmp = (int)(((double)rand() / RAND_MAX) * (rand_max - rand_min) + rand_min);
			}
			card[tmp]++;
			result[i] = tmp;
		}
		else {
			card[tmp]++;
			result[i] = tmp;
		}
		switch (tmp / 13) {
		case 0:
			printf("%d번째 :Clover(%d)%s", i, tmp, (i + 1) % 13 == 0 ? "\n" : " ");
			break;
		case 1:
			printf("%d번째 :Heart(%d)%s", i, tmp, (i + 1) % 13 == 0 ? "\n" : " ");
			break;
		case 2:
			printf("%d번째 :Spade(%d)%s", i, tmp, (i + 1) % 13 == 0 ? "\n" : " ");
			break;
		case 3:
			printf("%d번째 :Diamond(%d)%s", i, tmp, (i + 1) % 13 == 0 ? "\n" : " ");
			break;
		}

	}

	return 0;
}