#include <iostream>
#include <cstring>


using namespace std;

int main() {
	string resi1 = "", resi2 = "", resi3 = "";
	int resi11 = 0, resi12 = 0, resi13 = 0;
	long long res=0;

	cin >> resi1 >> resi2 >> resi3;

	if (resi1 == "black") resi11 = 0;
	else if (resi1 == "brown") resi11 = 1;
	else if (resi1 == "red") resi11 = 2;
	else if (resi1 == "orange") resi11 = 3;
	else if (resi1 == "yellow") resi11 = 4;
	else if (resi1 == "green") resi11 = 5;
	else if (resi1 == "blue") resi11 = 6;
	else if (resi1 == "violet") resi11 = 7;
	else if (resi1 == "grey") resi11 = 8;
	else if (resi1 == "white") resi11 = 9;

	if (resi2 == "black") resi12 = 0;
	else if (resi2 == "brown") resi12 = 1;
	else if (resi2 == "red") resi12 = 2;
	else if (resi2 == "orange") resi12 = 3;
	else if (resi2 == "yellow") resi12 = 4;
	else if (resi2 == "green") resi12 = 5;
	else if (resi2 == "blue") resi12 = 6;
	else if (resi2 == "violet") resi12 = 7;
	else if (resi2 == "grey") resi12 = 8;
	else if (resi2 == "white") resi12 = 9;

	res = resi11 * 10 + resi12;

	if (resi3 == "black") resi13 = 1;
	else if (resi3 == "brown") resi13 = 10;
	else if (resi3 == "red") resi13 = 100;
	else if (resi3 == "orange") resi13 = 1000;
	else if (resi3 == "yellow") resi13 = 10000;
	else if (resi3 == "green") resi13 = 100000;
	else if (resi3 == "blue") resi13 = 1000000;
	else if (resi3 == "violet") resi13 = 10000000;
	else if (resi3 == "grey") resi13 = 100000000;
	else if (resi3 == "white") resi13 = 1000000000;

	res *= resi13;

	cout << res;

	return 0;

}