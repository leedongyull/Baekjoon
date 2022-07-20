#include<stdio.h>

int main() {

	int a[9][9];
	int count = 0,space=0;
	int horizontal(int arr[]);
	int vertical(int arr[][9],int u);
	int squre(int a1[],int a2[],int a3[],int j);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] == 0) space++;
		}
	}

	while (1) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (a[i][j] == 0) a[i][j] = horizontal(a[i]);
				if (a[i][j] == 0) a[i][j] = vertical(a, j);
				if (a[i][j] == 0) {
					if (i == 0 || i == 3 || i == 6) {
						a[i][j] = squre(a[i], a[i + 1], a[i + 2], j);
					}
					if (i == 1 || i == 4 || i == 7) {
						a[i][j] = squre(a[i - 1], a[i], a[i + 1], j);
					}
					if (i == 2 || i == 5 || i == 8)
						a[i][j] = squre(a[i - 2], a[i - 1], a[i], j);
				}
			}
		}

		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (a[i][j] == 0) {
					count++;
				}
			}
		}

		if (count == 0) break;
		count = 0;

	}

	printf("\n");

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int horizontal(int f[]) {
	int count = 0;
	int t = 0;
	int k[10] = {0,};

	for (int i = 0; i < 9; i++) {
		if (f[i] == 0) {
			count++;
			t = i;
		}
		else k[f[i]]++;
	}

	if (count == 1) {
		for (int i = 1; i <= 9; i++) {
			if (k[i] == 0) {
				return i;
			}
		}
	}

	else return 0;
}

int vertical(int arr[][9],int u) {
	int count = 0, t = 0;
	int k[10] = {0,};

	for (int i = 0; i < 9; i++) {
		if (arr[i][u] == 0) {
			count++;
			t = i;
		}
		else k[arr[i][u]]++;
	}

	if (count == 1) {
		for (int i = 1; i <= 9; i++) {
			if (k[i] == 0) {
				return i;
			}
		}
	}

	else return 0;
}
int squre(int a1[],int a2[],int a3[],int j) {
	int k[10] = { 0, };
	int count=0,t=0;
	for (int i = 0; i < 9; i++) {
		if (j > 0 && j <= 3) {
			if (i < 3) {
				if (a1[i] == 0) {
					count++;
					t = i;
				}
				else k[a1[i]]++;
			}
			if (i >= 3 && i < 6) {
				if (a2[i - 3] == 0) {
					count++;
					t = i - 3;
				}
				else k[a2[i - 3]]++;
			}
			if (i >= 6 && i < 9) {
				if (a3[i - 6] == 0) {
					count++;
					t = i - 6;
				}
				else k[a3[i - 6]]++;
			}
		}
		else if (j >3 && j <= 5) {
			if (i < 3) {
				if (a1[i+3] == 0) {
					count++;
					t = i;
				}
				else k[a1[i+3]]++;
			}
			if (i >= 3 && i < 6) {
				if (a2[i] == 0) {
					count++;
					t = i;
				}
				else k[a2[i]]++;
			}
			if (i >= 6 && i < 9) {
				if (a3[i -3] == 0) {
					count++;
					t = i -3;
				}
				else k[a3[i - 3]]++;
			}
		}
		else {
			if (i < 3) {
				if (a1[i+6] == 0) {
					count++;
					t = i+6;
				}
				else k[a1[i+6]]++;
			}
			if (i >= 3 && i < 6) {
				if (a2[i + 3] == 0) {
					count++;
					t = i +3;
				}
				else k[a2[i +3]]++;
			}
			if (i >= 6 && i < 9) {
				if (a3[i ] == 0) {
					count++;
					t = i ;
				}
				else k[a3[i]]++;
			}
		}
	}

	if (count == 1) {
		for (int i = 1; i <= 9; i++) {
			if (k[i] == 0) {
				return i;
			}
		}
	}

	else return 0;
}