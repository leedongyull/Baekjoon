#include <iostream>

using namespace std;

int main(){
	long num = 0,n=0;
	cin >> num >> n;
	num = (num / 100) * 100; // 100으로 나누고 다시 곱해서 뒤 두자리를 0으로 만든다.

	while (num % n != 0) num++; // F로 떨어질 때 까지 N을 ++ 시키며 나눈다.
	num %= 100;
	if (num < 10) cout << "0" << num << endl; // 만약 뒤 두자리가 10 이하라면 앞에 0을 붙여준다.
	else cout << num << endl;

	return 0;
}