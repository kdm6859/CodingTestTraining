////https://www.acmicpc.net/problem/10828
//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int MX = 1000005;
//int dat[MX];
//int pos = 0;
//
//void push(int x) {
//	dat[pos++] = x;
//}
//
//void pop() {
//	pos--;
//}
//
//int size() {
//	return pos;
//}
//
//int empty() {
//	if (pos == 0)
//		return 1;
//	return 0;
//}
//
//int top() {
//	return dat[pos - 1];
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int commandNum;
//	cin >> commandNum;
//
//	while (commandNum--)
//	{
//		string command;
//		cin >> command;
//
//		if (command == "push") {
//			int data;
//			cin >> data;
//
//			push(data);
//		}
//		else if (command == "pop") {
//			if (empty())
//				cout << -1 << '\n';
//			else {
//				cout << top() << '\n';
//				pop();
//			}
//		}
//		else if (command == "size") {
//			cout << size() << '\n';
//		}
//		else if (command == "empty") {
//			cout << empty() << '\n';
//		}
//		else if (command == "top") {
//			if (empty())
//				cout << -1 << '\n';
//			else {
//				cout << top() << '\n';
//			}
//		}
//	}
//
//	return 0;
//}
//
//
//////https://www.acmicpc.net/problem/10828
////#include <bits/stdc++.h>
////
////using namespace std;
////
////const int MX = 1000005;
////int dat[MX];
////int pos = 0;
////
////void push(int x) {
////	dat[pos++] = x;
////}
////
////void pop() {
////	pos--;
////}
////
////int size() {
////	return pos;
////}
////
////int empty() {
////	if (pos == 0)
////		return 1;
////	return 0;
////}
////
////int top() {
////	return dat[pos - 1];
////}
////
////int main() {
////	ios::sync_with_stdio(0);
////	cin.tie(0);
////
////	int commandNum;
////	cin >> commandNum;
////
////	int* sol = new int[commandNum];
////	int solPos = 0;
////
////	while (commandNum--)
////	{
////		string command;
////		cin >> command;
////
////		if (command == "push") {
////			int data;
////			cin >> data;
////
////			push(data);
////		}
////		else if (command == "pop") {
////			if (empty())
////				sol[solPos++] = -1;
////			else {
////				sol[solPos++] = top();
////				pop();
////			}
////		}
////		else if (command == "size") {
////			sol[solPos++] = size();
////		}
////		else if (command == "empty") {
////			sol[solPos++] = empty();
////		}
////		else if (command == "top") {
////			if (empty())
////				sol[solPos++] = -1;
////			else {
////				sol[solPos++] = top();
////			}
////		}
////	}
////
////	for (int i = 0; i < solPos; i++) {
////		cout << sol[i] << '\n';
////	}
////
////	return 0;
////}