////https://www.acmicpc.net/problem/1158
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	list<int> mList;
//
//	int n, k;
//	cin >> n >> k;
//
//	for (int i = 1; i <= n; i++) {
//		mList.push_back(i);
//	}
//	list<int>::iterator iter = mList.begin();
//
//	cout << '<';
//	while (n--) {
//		for (int i = 0; i < k - 1; i++) {
//			iter++;
//			if (iter == mList.end()) {
//				iter = mList.begin();
//			}
//		}
//		cout << *iter;
//		if (n != 0)
//			cout << ", ";
//		iter = mList.erase(iter);
//		if (iter == mList.end())
//			iter = mList.begin();
//	}
//
//	cout << '>';
//
//	return 0;
//}