#include<stdio.h>

int main(void) {
	int round, kim, lim;
	int cnt = 0;
	scanf("%d %d %d", &round, &kim, &lim);
	while (1) {
		cnt++;
		if (round == 1) {
			printf("-1");
			break;
		}

		if (kim % 2 == 0) {
			if (lim % 2 == 1) {
				if (lim + 1 == kim) {
					printf("%d", cnt);
					break;
				}
			}
		}
		if (lim % 2 == 0) {
			if (kim % 2 == 1) {
				if (kim + 1 == lim) {
					printf("%d", cnt);
					break;
				}
			}
		}
		if (round % 2 == 0) {
			round /= 2;
			if (kim % 2 == 0) kim /= 2;
			else {
				kim /= 2;
				kim += 1;
			}
			if (lim % 2 == 0) lim /= 2;
			else {
				lim /= 2;
				lim += 1;
			}
		}
		else {
			if (kim == round) {
				kim /= 2;
				kim += 1;
			}
			else if (kim % 2 == 0) kim /= 2;
			else {
				kim /= 2;
				kim += 1;
			}
			if (lim == round) {
				lim /= 2;
				lim += 1;
			}
			else if (lim % 2 == 0) lim /= 2;
			else {
				lim /= 2;
				lim += 1;
			}
			round /= 2;
			round += 1;
		}
	}

}