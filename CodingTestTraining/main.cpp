//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//
//using namespace std;

//int main() {
//	int count[4] = { 0 };
//	
//	for (int i = 0; i < 4; i++) {
//		int count1[3] = { 0 };
//		for (int j = 0; j < 3; j++) {
//
//			cout << count1[j] << endl;
//		}
//	}
//
//	return 0;
//}

//bool compare(pair<int, int> p1, pair<int, int> p2) {
//	if (p1.second == p2.second)
//		return p1.first < p2.first;
//
//	return p1.second < p2.second;
//}
//
//int main() {
//
//	int N;
//	int num;
//	pair<int, int> temp;
//	vector<pair<int, int>> meetingsVec;
//
//	int cur;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> temp.first;
//		cin >> temp.second;
//		meetingsVec.push_back(temp);
//	}
//
//	sort(meetingsVec.begin(), meetingsVec.end(), compare);
//
//	num = 1;
//	cur = 0;
//	for (int i = 1; i < N; i++) {
//		if (meetingsVec[cur].second <= meetingsVec[i].first) {
//			cur = i;
//			num++;
//		}
//	}
//
//	cout << num;
//
//
//	return 0;
//}

//int main() {
//
//	int N;
//	int num;
//	pair<int, int>* meetings;
//
//	int cur;
//
//	int min;
//	int maxNum;
//
//	cin >> N;
//
//	meetings = new pair<int, int>[N];
//	list<pair<int, int>> sortMeetings;
//
//	//int minF = 0;
//	int minS = 0;
//
//	cin >> meetings[0].first;
//	//minF = meetings[0].first;
//	cin >> meetings[0].second;
//	//minS = meetings[0].second;
//	for (int i = 1; i < N; i++) {
//		cin >> meetings[i].first;
//		cin >> meetings[i].second;
//		if (meetings[i].second < meetings[minS].second) { //meetings[i].first <= meetings[minS].first && 
//			minS = i;
//			//minS = i;
//		}
//
//	}
//
//
//
//	/*for (int i = 0; i < N; i++) {
//		cin >> meetings[i].first;
//		cin >> meetings[i].second;
//
//	}*/
//
//
//
//	maxNum = 0;
//	cur = minS;
//	min = minS;
//	num = 1;
//	//std::cout << "meetings[j] : " << meetings[minS].first << ", " << meetings[minS].second << endl;
//	while (true)
//	{
//		for (int k = 0; k < N; k++) {
//			if (meetings[cur].second < meetings[k].first) {
//				if (meetings[min].first == meetings[k].first) {
//					if (meetings[min].second > meetings[k].second)
//						min = k;
//				}
//				else {
//					min = k;
//				}
//			}
//
//			//std::cout << "k : " << k << "     " << "min : " << min << ", " << meetings[min].first << ", " << meetings[min].second << endl;
//		}
//		if (min == -1) {
//			break;
//		}
//		cur = min;
//		//min = -1;
//		num++;
//
//	}
//	if (maxNum < num)
//		maxNum = num;
//
//
//	//maxNum = 0;
//	//cur = minS;
//	//min = minS;
//	//num = 1;
//	////std::cout << "meetings[j] : " << meetings[minS].first << ", " << meetings[minS].second << endl;
//	//while (true)
//	//{
//	//	for (int k = 0; k < N; k++) {
//	//		if (meetings[cur].second <= meetings[k].first) {
//	//			/*if (min == -1)
//	//				min = k;*/
//	//			if (meetings[min].first >= meetings[k].first) {
//	//				if (meetings[min].first == meetings[k].first) {
//	//					if (meetings[min].second > meetings[k].second)
//	//						min = k;
//	//				}
//	//				else {
//	//					min = k;
//	//				}
//	//			}
//	//		}
//	//		//std::cout << "k : " << k << "     " << "min : " << min << ", " << meetings[min].first << ", " << meetings[min].second << endl;
//	//	}
//	//	if (min == -1) {
//	//		//std::cout << "index " << j << " : " << num << endl;
//	//		//std::cout << num << endl;
//	//		//std::cout << "!" << endl;
//	//		break;
//	//	}
//	//	//std::cout << "cur : " << min << endl;
//	//	//std::cout << "?" <<endl;
//	//	cur = min;
//	//	min = -1;
//	//	num++;
//	//}
//	//if (maxNum < num)
//	//	maxNum = num;
//
//	//maxNum = 0;
//	//for (int j = 0; j < N; j++) {
//	//	cur = j;
//	//	min = -1;
//	//	num = 1;
//	//	while (true)
//	//	{
//	//		for (int k = 0; k < N; k++) {
//	//			if (meetings[cur].second < meetings[k].first) {
//	//				if (min == -1)
//	//					min = k;
//	//				if (meetings[min].first >= meetings[k].first) {
//	//					if (meetings[min].first == meetings[k].first) {
//	//						if (meetings[min].second > meetings[k].second)
//	//							min = k;
//	//					}
//	//					else {
//	//						min = k;
//	//					}
//	//				}
//	//			}
//	//		}
//	//		if (min==-1) {
//	//			//std::cout << "index " << j << " : " << num << endl;
//	//			break;
//	//		}
//	//		//std::cout << "min : " << min << endl;
//	//		cur = min;
//	//		min = -1;
//	//		num++;
//	//		
//	//	}
//	//	if (maxNum < num)
//	//		maxNum = num;
//	//}
//
//	//maxNum = 0;
//	//for (int j = 0; j < N; j++) {
//	//	cur = j;
//	//	min = -1;
//	//	num = 1;
//	//	//std::cout << "meetings[j] : " << meetings[j].first << ", " << meetings[j].second << endl;
//	//	while (true)
//	//	{
//	//		for (int k = 0; k < N; k++) {
//	//			if (meetings[cur].second < meetings[k].first) {
//	//				if (min == -1)
//	//					min = k;
//	//				if (meetings[min].first >= meetings[k].first) {
//	//					if (meetings[min].first == meetings[k].first) {
//	//						if (meetings[min].second > meetings[k].second)
//	//							min = k;
//	//					}
//	//					else {
//	//						min = k;
//	//					}
//	//				}
//	//			}
//	//			std::cout << "k : " << k << "     " << "min : " << min << "       " << meetings[min].first << ", " << meetings[min].second << endl;
//	//		}
//	//		if (min == -1) {
//	//			//std::cout << "index " << j << " : " << num << endl;
//	//			//std::cout << num << endl;
//	//			//std::cout << "!" << endl;
//	//			break;
//	//		}
//	//		//std::cout << "cur : " << min << endl;
//	//		//std::cout << "?" <<endl;
//	//		cur = min;
//	//		min = -1;
//	//		num++;
//	//	}
//	//	if (maxNum < num)
//	//		maxNum = num;
//	//}
//
//	std::cout << maxNum;
//
//	return 0;
//}



////수 묶기
//int main() {
//	int N;
//	int temp;
//	int minusIdx = -1;
//	int zeroIdx = -1;
//	int remainder = -1;
//	int result = 0;
//	vector<int> num;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> temp;
//		num.push_back(temp);
//	}
//
//	sort(num.begin(), num.end());
//
//	for (int i = N - 1; i >= 0; i--) {
//		if (num[i] == 0) {
//			zeroIdx = i;
//		}
//		else if (num[i] < 0) {
//			minusIdx = i;
//			break;
//		}
//	}
//
//	if (minusIdx != -1) { // 마이너스값 있을 때
//		int i;
//		for (i = 0; i < minusIdx; i += 2) {
//			result += num[i] * num[i + 1];
//		}
//		remainder = minusIdx - i;
//
//		if (remainder == 0) { //마이너스 개수가 홀수일 때
//			if (zeroIdx != -1) { //0이 있을 때
//				for (i = N - 1; i > zeroIdx + 1; i -= 2) {
//					if (num[i] == 1 || num[i - 1] == 1) {
//						result += num[i] + num[i - 1];
//					}
//					else {
//						result += num[i] * num[i - 1];
//					}
//				}
//				remainder = zeroIdx - i;
//
//				if (remainder != 0) { //플러스 개수가 홀수일 때
//					result += num[zeroIdx + 1];
//				}
//			}
//			else { //0이 없을 때
//				result += num[minusIdx];
//
//				for (i = N - 1; i > minusIdx + 1; i -= 2) {
//					if (num[i] == 1 || num[i - 1] == 1) {
//						result += num[i] + num[i - 1];
//					}
//					else {
//						result += num[i] * num[i - 1];
//					}
//					//result += num[i] * num[i - 1];
//				}
//				remainder = minusIdx - i;
//
//				if (remainder != 0) { //플러스 개수가 홀수일 때
//					result += num[minusIdx + 1];
//				}
//			}
//		}
//		else { //마이너스 개수가 짝수일 때
//			if (zeroIdx != -1) { //0이 있을 때
//				for (i = N - 1; i > zeroIdx + 1; i -= 2) {
//					if (num[i] == 1 || num[i - 1] == 1) {
//						result += num[i] + num[i - 1];
//					}
//					else {
//						result += num[i] * num[i - 1];
//					}
//					//result += num[i] * num[i - 1];
//				}
//				remainder = zeroIdx - i;
//
//				if (remainder != 0) { //플러스 개수가 홀수일 때
//					result += num[zeroIdx + 1];
//				}
//			}
//			else { //0이 없을 때
//				for (i = N - 1; i > minusIdx + 1; i -= 2) {
//					if (num[i] == 1 || num[i - 1] == 1) {
//						result += num[i] + num[i - 1];
//					}
//					else {
//						result += num[i] * num[i - 1];
//					}
//					//result += num[i] * num[i - 1];
//				}
//				remainder = minusIdx - i;
//
//				if (remainder != 0) { //플러스 개수가 홀수일 때
//					result += num[minusIdx + 1];
//				}
//			}
//		}
//	}
//	else { // 마이너스값 없을 때
//		int i;
//		if (zeroIdx != -1) { //0이 있을 때
//			for (i = N - 1; i > zeroIdx + 1; i -= 2) {
//				if (num[i] == 1 || num[i - 1] == 1) {
//					result += num[i] + num[i - 1];
//				}
//				else {
//					result += num[i] * num[i - 1];
//				}
//				//result += num[i] * num[i - 1];
//			}
//			remainder = zeroIdx - i;
//
//			if (remainder != 0) { //플러스 개수가 홀수일 때
//				result += num[zeroIdx + 1];
//			}
//		}
//		else { //0이 없을 때
//			for (i = N - 1; i > 0; i -= 2) {
//				if (num[i] == 1 || num[i - 1] == 1) {
//					result += num[i] + num[i - 1];
//				}
//				else {
//					result += num[i] * num[i - 1];
//				}
//				//result += num[i] * num[i - 1];
//			}
//			remainder = i;
//
//			if (remainder == 0) { //플러스 개수가 홀수일 때
//				result += num[0];
//			}
//		}
//	}
//
//	cout << result;
//
//	return 0;
//}



////롤러코스터
//int main() {
//	int R, C;
//	vector<vector<int>> table;
//	//R 또는 C가 홀수면 모든 칸 지나감
//	vector<int> temp;
//	int tempNum;
//
//	cin >> R >> C;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++) {
//			int tempNum;
//			cin >> tempNum;
//			temp.push_back(tempNum);
//		}
//		table.push_back(temp);
//		temp.clear();
//	}
//
//	if (R % 2 == 1) {
//		for (int i = 0; i < R; i++) {
//			for (int j = 0; j < C - 1; j++) {
//				if (i % 2 == 0) {
//					cout << 'R';
//				}
//				else {
//					cout << 'L';
//				}
//			}
//			cout << 'D';
//		}
//	}
//	else if (C % 2 == 1) {
//		for (int i = 0; i < C; i++) {
//			for (int j = 0; j < R - 1; j++) {
//				if (i % 2 == 0) {
//					cout << 'D';
//				}
//				else {
//					cout << 'U';
//				}
//			}
//			cout << 'R';
//		}
//	}
//	else {
//		for (int i = 0; i < R - 2; i++) {
//			for (int j = 0; j < C - 1; j++) {
//				if (i % 2 == 0) {
//					cout << 'R';
//				}
//				else {
//					cout << 'L';
//				}
//			}
//			cout << 'D';
//		}
//		for (int i = 0; i < C - 2; i++) {
//			for (int j = 0; j < 1; j++) {
//				if (i % 2 == 0) {
//					cout << 'D';
//				}
//				else {
//					cout << 'U';
//				}
//			}
//			cout << 'R';
//		}
//		if (table[R - 2][C - 1] > table[R - 1][C - 2])
//			cout << 'R' << 'D' << ' ';
//		else
//			cout << 'D' << 'R' << ' ';
//	}
//
//	cout << '\b' << ' ';
//
//
//	return 0;
//}


//class A
//{
//public:
//	virtual void Navigate();
//};
//
//namespace bb {
//	class B
//	{
//	public:
//		void Navigate();
//	};
//}
//
//namespace cc {
//	class C
//	{
//	public:
//		void Navigate();
//	};
//}
//
//
//class D : bb::B, cc::C
//{
//public:
//	//virtual void Navigate();
//};
//
//void A::Navigate() {
//	cout << "A";
//}
//void bb::B::Navigate() {
//	cout << "B";
//}
//void cc::C::Navigate() {
//	cout << "C";
//}
//
////void D::Navigate() {
////	cout << "D";
////}
//
//int main() {
//
//	D d;
//
//	d.Navigate();
//
//	return 0;
//}


//class A : vector<int> {
//public:
//	int a;
//	int b;
//	A(int a = 0, int b = 0) {
//		this->a = a;
//		this->b = b;
//	}
//
//
//};
//
// struct B
//{
//	int a = 300;
//	double b = 400;
//	int c = 4363;
//};
//
//void main() {
//	A myA;
//	A* pA = &myA;
//	B myB;
//
//
//
//	int c = 0;
//
//	cout << (int)((B*)0x0000)->a;
//
//	return;
//}


//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <list>
//
//using namespace std;
//
//int main() {
//
//	string str;
//	int num;
//	string command;
//	list<char> strVec;
//	list<string> comVec;
//	int cursorPos;
//	char addChar;
//	list<char>::iterator iterStr;
//	list<string>::iterator iterCom;
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//
//	cin >> str;
//	cin >> num;
//
//	for (int i = 0; i < num; i++) {
//
//		cin >> command;
//
//		if (command == "P") {
//			cin >> addChar;
//			comVec.emplace_back(command + ' ' + addChar);
//		}
//		else
//			comVec.emplace_back(command);
//
//	}
//
//	for (int i = 0; i < str.length(); i++) {
//
//		strVec.emplace_back(str[i]);
//
//	}
//
//	cursorPos = str.length();
//
//	
//	iterCom = comVec.begin();
//	iterStr = strVec.end();
//	for (int i = 0; i < num; i++) {
//		//advance(iterCom, i);
//		if ((*iterCom)[0] == 'L') { //커서 왼쪽 한칸
//			/*if (cursorPos > 0) {
//				cursorPos--;
//				
//			}*/
//			if(strVec.begin() != iterStr)
//				iterStr--;
//		}
//		else if ((*iterCom)[0] == 'D') { //커서 오른쪽 한칸
//			/*if (cursorPos < strVec.size())
//				cursorPos++;*/
//			if (strVec.end() != iterStr)
//				iterStr++;
//		}
//		else if ((*iterCom)[0] == 'B') { //커서 왼쪽 문자 삭제
//			/*if (cursorPos > 0) {
//				strVec.erase(strVec.begin() + cursorPos - 1);
//				cursorPos--;
//			}*/
//			if (strVec.begin() != iterStr) {
//				iterStr = strVec.erase(--iterStr);
//			}
//		}
//		else if ((*iterCom)[0] == 'P') { //커서 왼쪽 문자 추가
//			/*strVec.insert(strVec.begin() + cursorPos, comVec[i][2]);
//			cursorPos++;*/
//
//			strVec.insert(iterStr, (*iterCom)[2]);
//		}
//
//		iterCom++;
//	}
//
//	for (iterStr = strVec.begin(); iterStr != strVec.end(); iterStr++)
//	{
//		cout << *iterStr;
//	}
//	
//	return 0;
//}



//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <list>
//#include <string>
//
//using namespace std;
//
//class Node {
//public:
//	pair<int, int> pos;
//	int num;
//	bool visited = false;
//};
//
//int main() {
//
//	int row;
//	int col;
//	vector<vector<Node>> nodes;
//	vector<string> str;
//	
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//
//
//	cin >> row >> col;
//
//	nodes.assign(row, vector<Node>(col));
//
//	for (int i = 0; i < row; i++) {
//		string tempStr;
//		cin >> tempStr;
//		str.push_back(tempStr);
//	}
//
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			nodes[i][j].pos = pair<int, int>(i, j);
//			nodes[i][j].num = str[i][j] - '0';
//		}
//	}
//
//
//
//
//
//
//
//	
//	/*for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			cout << nodes[i][j].pos << ' ';
//		}
//		cout << '\n';
//	}*/
//
//	return 0;
//}
//
//void bfs(Node node) {
//
//}



