#include <iostream>
#include <stdlib.h>

using namespace std;

struct NODE {
	int left, right, data;
}nodes[26];

void preorder(int cur) {
	cout << (char)(cur + 'A');
	if (nodes[cur].left != -1) preorder(nodes[cur].left);
	if (nodes[cur].right != -1) preorder(nodes[cur].right);
}

void inorder(int cur) {
	if (nodes[cur].left != -1) inorder(nodes[cur].left);
	cout << (char)(cur + 'A');
	if (nodes[cur].right != -1) inorder(nodes[cur].right);
}


void postorder(int cur) {
	if (nodes[cur].left != -1) postorder(nodes[cur].left);
	if (nodes[cur].right != -1) postorder(nodes[cur].right);
	cout << (char)(cur + 'A');
}



int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < 26; i++)nodes[i].left = nodes[i].right = -1;
	for (int i = 0; i < t; i++) {
		char d, l, r;
		cin >> d >> l >> r;
		if (l != '.') nodes[d - 'A'].left = l - 'A';
		if (r != '.') nodes[d - 'A'].right = r - 'A';
	}
	preorder(0);
	cout << '\n';
	inorder(0);
	cout << '\n';
	postorder(0);
}