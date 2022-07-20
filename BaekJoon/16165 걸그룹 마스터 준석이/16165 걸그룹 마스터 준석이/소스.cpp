#include <iostream>
#include <map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int grp, qna;
	cin >> grp >> qna;
	map<string, string> girlgroup;
	for (int i = 0; i < grp; i++) {
		string group;
		int girl;
		cin >> group>>girl;
		for (int j = 0; j < girl; j++) {
			string gname;
			cin >> gname;
			girlgroup[gname] = group;
		}

	}
	for (int i = 0; i < qna; i++) {
		string nm="";
		int kind=0;
		cin >> nm >> kind;
		if (kind == 1) {
			cout << girlgroup[nm] << "\n";
		}
		else {
			for (auto i = girlgroup.begin(); i != girlgroup.end(); i++) {
				if (i->second == nm) cout << i->first << '\n';
				else continue;
			}
		}
	}
}