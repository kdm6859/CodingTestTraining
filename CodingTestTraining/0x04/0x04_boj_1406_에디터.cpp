////https://www.acmicpc.net/problem/1406
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	string str;
//	cin >> str;
//
//	list<char> strList;
//	for (char c : str)
//		strList.push_back(c);
//
//	list<char>::iterator cursor = strList.end();
//
//	int num;
//	cin >> num;
//
//	for (int i = 0; i < num; i++) {
//		char command;
//		cin >> command;
//
//		if (command == 'L') {
//			if (cursor != strList.begin())
//				cursor--;
//		}
//		else if (command == 'D') {
//			if (cursor != strList.end())
//				cursor++;
//		}
//		else if (command == 'B') {
//			if (cursor != strList.begin()) {
//				/*cursor--;
//				cursor = strList.erase(cursor);*/
//				cursor = strList.erase(--cursor);
//			}
//		}
//		else if (command == 'P') {
//			char addChar;
//			cin >> addChar;
//
//			strList.insert(cursor, addChar);
//		}
//	}
//
//	for (char c : strList)
//		cout << c;
//
//	return 0;
//}
//
//
////¿¾³¯¿¡ Ç¬°Å
////#include <iostream>
////#include <algorithm>
////#include <vector>
////#include <list>
////
////using namespace std;
////
////int main() {
////
////	string str;
////	int num;
////	string command;
////	list<char> strVec;
////	list<string> comVec;
////	int cursorPos;
////	char addChar;
////	list<char>::iterator iterStr;
////	list<string>::iterator iterCom;
////
////	ios_base::sync_with_stdio(false);
////	cin.tie(0);
////
////	cin >> str;
////	cin >> num;
////
////	for (int i = 0; i < num; i++) {
////
////		cin >> command;
////
////		if (command == "P") {
////			cin >> addChar;
////			comVec.emplace_back(command + ' ' + addChar);
////		}
////		else
////			comVec.emplace_back(command);
////
////	}
////
////	for (int i = 0; i < str.length(); i++) {
////
////		strVec.emplace_back(str[i]);
////
////	}
////
////	cursorPos = str.length();
////
////	
////	iterCom = comVec.begin();
////	iterStr = strVec.end();
////	for (int i = 0; i < num; i++) {
////		//advance(iterCom, i);
////		if ((*iterCom)[0] == 'L') { //Ä¿¼­ ¿ÞÂÊ ÇÑÄ­
////			/*if (cursorPos > 0) {
////				cursorPos--;
////				
////			}*/
////			if(strVec.begin() != iterStr)
////				iterStr--;
////		}
////		else if ((*iterCom)[0] == 'D') { //Ä¿¼­ ¿À¸¥ÂÊ ÇÑÄ­
////			/*if (cursorPos < strVec.size())
////				cursorPos++;*/
////			if (strVec.end() != iterStr)
////				iterStr++;
////		}
////		else if ((*iterCom)[0] == 'B') { //Ä¿¼­ ¿ÞÂÊ ¹®ÀÚ »èÁ¦
////			/*if (cursorPos > 0) {
////				strVec.erase(strVec.begin() + cursorPos - 1);
////				cursorPos--;
////			}*/
////			if (strVec.begin() != iterStr) {
////				iterStr = strVec.erase(--iterStr);
////			}
////		}
////		else if ((*iterCom)[0] == 'P') { //Ä¿¼­ ¿ÞÂÊ ¹®ÀÚ Ãß°¡
////			/*strVec.insert(strVec.begin() + cursorPos, comVec[i][2]);
////			cursorPos++;*/
////
////			strVec.insert(iterStr, (*iterCom)[2]);
////		}
////
////		iterCom++;
////	}
////
////	for (iterStr = strVec.begin(); iterStr != strVec.end(); iterStr++)
////	{
////		cout << *iterStr;
////	}
////	
////	return 0;
////}