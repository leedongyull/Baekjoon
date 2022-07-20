#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main(void) {
	char str[1000]=" ";
	scanf("%[^\n]s", str);
	string start = "",end="",streamend="";
	start += strtok(str, ":");
	start += strtok(NULL, " ");
	end += strtok(NULL, ":");
	end += strtok(NULL, " ");
	streamend += strtok(NULL, ":");
	streamend += strtok(NULL, " ");
	int strend,ch, st,en;
	const char* b = start.c_str();
	const char* c = end.c_str();
	const char* d = streamend.c_str();
	st = atoi(b);
	en = atoi(c);
	strend = atoi(d);
	map <string, pair<int,bool>> check;
	while (1) {
		string  name;
		char chat[10];
		cin >> chat >> name;
		if (cin.eof() == true) break;
		string cha;
		cha += strtok(chat, ":");
		cha += strtok(NULL, " ");
		if (chat == ""&& name=="") continue;
		const char* a = cha.c_str();
		ch = atoi(a);
		if (ch <= st) {
			check[name] = { ch,false };
		}
		else if (ch >= en&&ch<=strend) {
				check[name] = { ch,true };
		}
		else continue;
	}
	int cnt = 0;
	for (auto i = check.begin(); i != check.end(); i++) {
		if (i->second.second == true) cnt++;
	}
	cout << cnt;
}