#include <iostream>

using namespace std;

int mul(int);


int main() {

	int num = 0, count = 0,k=0;

	cin >> num;
	if (num < 0 || num>100) exit(0);
	k = num;
	while (1) {
		if (k==mul(num)) { // ����Ŭ �ݺ��ϴ� �������� break
			break;
		}
		else {
			count++;
			num = mul(num);
		}
	}

	cout << count+1;


	return 0;
}

int mul(int a) {
	int i = 0, j = 0,res=0;

	i = a / 10; //���� ���ڸ�
	j = a % 10; //���� ���ڸ�
	res = i + j;
	if (res >= 10) {
		res = res % 10 + j * 10;
	}
	else res += j * 10;
	
	return res;

}