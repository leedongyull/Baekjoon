#include <stdio.h>

using namespace std;

int tree[65][65] = { 0, };
int size;

void quadtree(int xstart, int xend,int ystart,int yend,int size) {
	bool isPossible = true;
	char key = tree[ystart][xstart];
	for (int i = ystart; i <= yend; i++) {
		for (int j = xstart; j <= xend; j++) {
			if (tree[i][j] != key) {
				isPossible = false;
				
			}
		}
	}
	if (isPossible == true) {
		printf("%d",key);
	}
	if (isPossible == false) {
		printf("(");
		quadtree(xstart, xend-size, ystart, yend-size,size/2);
		quadtree(xstart + size, xend, ystart, yend-size,size/2);
		quadtree(xstart, xend-size, ystart + size, yend,size/2);
		quadtree(xstart + size, xend , ystart + size, yend,size/2);
		printf(")");
	}
	
}

int main(void) {
	int n;
	scanf("%d",&n);
	size = n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%1d", &tree[i][j]);
		}
	}
	quadtree(1, n, 1, n,n/2);
}