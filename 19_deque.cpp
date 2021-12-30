#include<iostream>
#include<deque>

using namespace std;

int main(void) {
	deque<int> d;
	d.push_front(3);
	d.push_back(7);
	d.pop_front();
	d.push_front(4);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ' ';
	}
	cout << endl;

	deque<int>::iterator iter; // <- ���ͷ����͸� ���������μ� �� ��ҿ� ������ �� ����.
	iter = d.begin(); // <- ��� ���ҿ� ������ ������ ����.
	d.insert(iter + 1, 3, 5);
	iter = d.begin();
	d.insert(iter + 1, 1, 9);
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ' '; // <- ��� ����.
	}
	cout << '\n';
	d.clear(); // deque ���� ���.
	cout << d.empty() << '\n';
	system("pause");
} // C++ STL ������ �����̳� deque Ȱ��.