#include <iostream>

using namespace std;

void move(int from, int to)
{
    cout << from << " " << to << '\n';
}

void hanoi(int n, int from, int by, int to)
{
    if (n == 0) return;
    hanoi(n - 1, from, to, by);
    move(from, to);
    hanoi(n - 1, by, from, to);
}

int main(void) {
	int n,res=1;
	cin >> n;
    for (int i = 0; i < n; i++) {
        res *= 2;
    }
    cout << res - 1<<'\n';
    hanoi(n, 1, 2, 3);
}