#include <iostream>

using namespace std;

int main(){
	long num = 0,n=0;
	cin >> num >> n;
	num = (num / 100) * 100; // 100���� ������ �ٽ� ���ؼ� �� ���ڸ��� 0���� �����.

	while (num % n != 0) num++; // F�� ������ �� ���� N�� ++ ��Ű�� ������.
	num %= 100;
	if (num < 10) cout << "0" << num << endl; // ���� �� ���ڸ��� 10 ���϶�� �տ� 0�� �ٿ��ش�.
	else cout << num << endl;

	return 0;
}