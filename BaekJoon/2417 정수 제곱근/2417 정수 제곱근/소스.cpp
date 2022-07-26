#include <iostream>
#include <cmath>

using namespace std;

int main() {
	unsigned long long num = 0;
	unsigned long long root = 0;
	cin >> num;
	root = (long long)sqrt(num); //완벽한 제곱근이 아닌이상 루트씌우면 원래값보다 작아짐
	if (root * root == num) cout << root; 
	else if (root * root > num) cout << root; //예외인경우도 있기때문에 체크
	else cout << root + 1;
}