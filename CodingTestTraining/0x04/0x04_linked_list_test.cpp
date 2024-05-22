////https://github.com/encrypted-def/basic-algo-lecture/blob/master/0x04/linked_list_test.cpp
//#include <bits/stdc++.h>
//using namespace std;
//
//const int MX = 1000005;
//int dat[MX], pre[MX], nxt[MX];
//int unused = 1;
//
//void insert(int addr, int num) {
//	dat[unused] = num; //데이터 저장
//	pre[unused] = addr; //새로 추가한 번지의 이전 번지를 addr로 변경
//	nxt[unused] = nxt[addr]; //기존 번지의 nxt[]를 새로 추가한 번지의 다음 번지로 변경
//	if (nxt[addr] != -1) 
//		pre[nxt[addr]] = unused; //기존 번지의 다음 번지의 이전 번지를 새로 추가한 번지로 변경
//	nxt[addr] = unused; //기존 번지의 다음 번지는 새로 추가하는 번지로 변경
//	unused++;
//}
//
//void erase(int addr) {
//	nxt[pre[addr]] = nxt[addr]; //if(pre[addr] != -1) 인지 확인하지 않는 이유는 0번지에 더미데이터가 있기 때문이다
//	if (nxt[addr] != -1)
//		pre[nxt[addr]] = pre[addr];
//}
//
//void traverse() {
//	int cur = nxt[0];
//	while (cur != -1) {
//		cout << dat[cur] << ' ';
//		cur = nxt[cur];
//	}
//	cout << "\n\n";
//}
//
//void insert_test() {
//	cout << "****** insert_test *****\n";
//	insert(0, 10); // 10(address=1)
//	traverse();
//	insert(0, 30); // 30(address=2) 10
//	traverse();
//	insert(2, 40); // 30 40(address=3) 10
//	traverse();
//	insert(1, 20); // 30 40 10 20(address=4)
//	traverse();
//	insert(4, 70); // 30 40 10 20 70(address=5)
//	traverse();
//}
//
//void erase_test() {
//	cout << "****** erase_test *****\n";
//	erase(1); // 30 40 20 70
//	traverse();
//	erase(2); // 40 20 70
//	traverse();
//	erase(4); // 40 70
//	traverse();
//	erase(5); // 40
//	traverse();
//}
//
//int main(void) {
//	fill(pre, pre + MX, -1);
//	fill(nxt, nxt + MX, -1);
//	insert_test();
//	erase_test();
//}