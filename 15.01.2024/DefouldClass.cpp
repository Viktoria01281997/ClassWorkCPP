#include<iostream>
using namespace std;
/*создать класс дробь
объект данного класса должен состоять из числителя и знаменателя в обязательном порядке
реализовать метод вывода дроби в виде:
3/6
*/
class Student {
private:
	int numbergroup;
	string name;
	double ball;
public:
	Student(int numbergroup, string name, double ball) {
		this->numbergroup = numbergroup;
		this->name = name;
		this->ball = ball;
	}
	void show() {
		cout << "numbergroup " << numbergroup << " name: " << name << " ball: " << ball << endl;
	}
	string getStatus() {
		if (ball > 4.6) {
			return "A";
		}
		if (ball > 3.6) {
			return "B";
		}
		if (ball > 2.6) {
			return "C";
		}
		else return "D";
	}

};

class Fraction {
private:
	int num;
	int denum;
	int total = 0;
public:
	Fraction(int num, int denum) {

		total = num / denum;
		this->num = num % denum;
		this->denum = denum;
	}
	void show() {
		cout << total << " " << num << "/" << denum << endl;
	}
	/*void res() {

		total = num / denum;
		int remains = num % denum;
		if (total > 0) cout << total << " " << remains<<"/" << denum;

	}*/
};

int main() {
	/*Student sh1(1, "Tom", 3);
	Student sh2(34, "Ann", 5);
	Student sh3(8, "Bob", 2);
	sh1.show();
	sh2.show();
	sh3.show();
	cout << sh1.getStatus() << endl;
	cout << sh2.getStatus() << endl;
	cout << sh3.getStatus() << endl;*/

	Fraction st1(2, 5);
	st1.show();

	return 0;
}