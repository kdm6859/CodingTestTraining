////https://www.acmicpc.net/problem/10773
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	stack<int> nums;
//
//	int k;
//	cin >> k;
//
//	while (k--) {
//		int n;
//		cin >> n;
//
//		if (n != 0) {
//			nums.push(n);
//		}
//		else {
//			nums.pop();
//		}
//	}
//
//	int num = 0;
//	while (!nums.empty()) {
//		num += nums.top();
//		nums.pop();
//	}
//
//	cout << num;
//
//	return 0;
//}