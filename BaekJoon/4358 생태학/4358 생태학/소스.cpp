#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main(void) {

	map<string, float> a;
	float cnt = 0;
	while (1) {
		string tree;
		getline(cin, tree, '\n');
		if (cin.eof() == true) break;
		cnt++;
		a[tree]++;
	}

	for (auto i = a.begin(); i != a.end(); i++) {
		cout << i->first << ' ' ;
		float res = i->second / cnt *100;
		cout << fixed;
		cout.precision(4);
		cout<< res <<'\n';
	}

}