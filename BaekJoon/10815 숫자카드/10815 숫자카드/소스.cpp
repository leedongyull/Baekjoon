#include <iostream>
#include <algorithm>

using namespace std;

long long nnum[500001];
long long mnum[500001];

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	int m;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nnum[i];
	}
	cin >> m;
	for (int j = 0; j < m; j++) {
		cin >> mnum[j];
	}
	sort(nnum,nnum+n);
	
	for (int i = 0; i < m; i++) {
		int low = 0;
		int high = n-1;
		bool res = false;
		while (low <= high) {
			int mid = (low + high) / 2;
			if (nnum[mid] == mnum[i]) { 
				cout << "1 ";
				res = true;
				break;
			}
			else if (nnum[mid] > mnum[i]) high = mid - 1;
			else low = mid + 1;
		}
		if(res==false) cout << "0 ";
	}

}