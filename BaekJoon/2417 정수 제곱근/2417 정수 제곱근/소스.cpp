#include <iostream>
#include <cmath>

using namespace std;

int main() {
	unsigned long long num = 0;
	unsigned long long root = 0;
	cin >> num;
	root = (long long)sqrt(num); //�Ϻ��� �������� �ƴ��̻� ��Ʈ����� ���������� �۾���
	if (root * root == num) cout << root; 
	else if (root * root > num) cout << root; //�����ΰ�쵵 �ֱ⶧���� üũ
	else cout << root + 1;
}