#include <iostream>

using namespace std;

int main(void) {
	long long num = 0;
	char dna[1000002] = { ' ', };
	bool a = false;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> dna[i];
	}
	if (num == 1) a = true;
	while (a==false) {
		if (dna[num - 2] == 'A') {
			if (dna[num-1] == 'A') dna[num - 2] = 'A';
			else if (dna[num-1] == 'G') dna[num - 2] = 'C';
			else if (dna[num-1] == 'C') dna[num - 2] = 'A';
			else if (dna[num-1] == 'T') dna[num - 2] = 'G';
		}
		else if (dna[num - 2] == 'G') {
			if (dna[num-1] == 'A') dna[num - 2] = 'C';
			else if (dna[num-1] == 'G') dna[num - 2] = 'G';
			else if (dna[num-1] == 'C') dna[num - 2] = 'T';
			else if (dna[num-1] == 'T') dna[num - 2] = 'A';
		}
		else if (dna[num - 2] == 'C') {
			if (dna[num-1] == 'A') dna[num - 2] = 'A';
			else if (dna[num-1] == 'G') dna[num - 2] = 'T';
			else if (dna[num-1] == 'C') dna[num - 2] = 'C';
			else if (dna[num-1] == 'T') dna[num - 2] = 'G';
		}
		else if (dna[num - 2] == 'T') {
			if (dna[num-1] == 'A') dna[num - 2] = 'G';
			else if (dna[num-1] == 'G') dna[num - 2] = 'A';
			else if (dna[num-1] == 'C') dna[num - 2] = 'G';
			else if (dna[num-1] == 'T') dna[num - 2] = 'T';
		}
		num--;
		if (num == 1) break;
	}
	
	cout << dna[0];
}