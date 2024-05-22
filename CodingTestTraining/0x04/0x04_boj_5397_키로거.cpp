////https://www.acmicpc.net/problem/5397
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	int num;
//	cin >> num;
//
//	while (num--) {
//		string str;
//		cin >> str;
//
//		list<char> keys;
//		list<char>::iterator cursor = keys.begin();
//
//		for (char c : str) {
//			if (c == '<') {
//				if (cursor != keys.begin())
//					cursor--;
//			}
//			else if (c == '>') {
//				if (cursor != keys.end())
//					cursor++;
//			}
//			else if (c == '-') {
//				if (cursor != keys.begin())
//					cursor = keys.erase(--cursor);
//			}
//			else {
//				keys.insert(cursor, c);
//			}
//		}
//
//		for (char c : keys) {
//			cout << c;
//		}
//
//		cout << '\n';
//	}
//
//	return 0;
//}