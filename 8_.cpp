#include<iostream>
#include<string>

using namespace std;

class Person {
private:
	string name;
public:
	Person(string name) : name(name) {}
	string getName() {
		return name;
	}
	void showName() {
		cout << "�̸� : " << getName() << '\n';
	}
};

class Temp {
public:
	void showTemp() {
		cout << "�ӽ� �θ� Ŭ�����Դϴ�.\n";
	}
};

class Student : Person, public Temp {
private:
	int studentID;
public:
	Student(int studentID, string name) : Person(name) {
		this->studentID = studentID;
	}
	void show() {
		cout << "�л� ��ȣ : " << studentID << '\n';
		cout << "�л� �̸� : " << getName() << '\n';
	}
	void showName() {
		cout << "�л� �̸� : " << getName() << '\n';
		//cout << "///" << endl;
	}
};

int main(void) {
	Student student(1, "������");
	student.show();
	student.showName();
	student.showTemp();
	system("pause");
}