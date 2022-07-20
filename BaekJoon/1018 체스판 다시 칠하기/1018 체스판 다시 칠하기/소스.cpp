#include <stdio.h>

using namespace std;

char WB[8][9] = { "WBWBWBWB","BWBWBWBW" ,"WBWBWBWB" ,"BWBWBWBW" ,"WBWBWBWB" ,"BWBWBWBW" ,"WBWBWBWB" ,"BWBWBWBW" };
char BW[8][9] = { "BWBWBWBW","WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB" };
char chess[51][51] = { 0, };

int min(int a, int b) { return a < b ? a : b; }

int WBcheck(int a,int b) {
	int cnt=0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (WB[i][j] == chess[i + a][j + b]) continue;
			else cnt++;
		}
	}
	return cnt;
}


int BWcheck(int a, int b) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (BW[i][j] == chess[i + a][j + b]) continue;
			else cnt++;
		}
	}
	return cnt;
}


int main(void) {
	int x, y;
	int count = 99999;
	scanf("%d%d", &y, &x);
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			scanf(" %c", &chess[i][j]);
		}
	}

	for (int i = 0; i <= y-8; i++) {
		for (int j = 0; j <= x-8; j++) {
			count = min(count, WBcheck(i, j));
			count = min(count, BWcheck(i, j));
		}
	}

	printf("%d",count);


}