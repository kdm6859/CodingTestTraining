//#include <bits/stdc++.h>
//
//using namespace std;
//
////int func2(int arr[], int N) {
////	for (int i = 0; i < N - 1; i++) {
////		for (int j = i+1; j < N; j++) {
////			if (arr[i] + arr[j] == 100)
////				return 1;
////		}
////	}
////
////	return 0;
////}
//int func2(int arr[], int N) {
//	int numCnt[101] = { 0 };
//
//	for (int i = 0; i < N; i++) {
//		if (numCnt[100 - arr[i]] > 0)
//			return 1;
//
//		numCnt[arr[i]]++;
//	}
//
//	return 0;
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int arr[4] = { 4, 13, 63, 87 };
//	cout << func2(arr, 4);
//
//
//	return 0;
//}