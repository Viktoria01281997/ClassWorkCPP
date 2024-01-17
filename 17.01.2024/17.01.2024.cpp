#include<iostream>
#include<string>
using namespace std;
//
//class Car {
//private:
//	string color;
//	string model;
//	float price;
//public:
//	Car() {
//		cout << "car created: " << endl;
//	}
//	Car(string color, string model) {
//		this->color = color;
//		this->model = model;
//	}
//	Car(string color, string model, float price):
//	Car(color, model)
//	{
//		this->price = price;
//	}
//	void setColor(string color) {
//		this->color = color;
//	}
//	void setModel(string model) {
//		this->model = model;
//	}
//	string getColor() {
//		return color;
//	}
//	string getModel() {
//		return model;
//	}
//	string toString() {
//		return "color: " + color + " model: " + model + " price: " + to_string(price);
//	}
//	void setPrice(float price) {
//		this->price = price;
//	}
//	float getPrice() {
//		return price;
//	}
//};
//
//Car getMinPriceCar(Car &car1, Car &car2) {
//	if (car1.getPrice() < car2.getPrice()) {
//		return car1;
//	}
//	else {
//		return car2;
//	}
//}
//
//Car getNewCar(Car car1) {
//	float priceX = (car1.getPrice())+(car1.getPrice() * 0.1);
//	car1.setPrice(priceX);
//	return car1;
//
//}
//
//void changeColor(Car& car) {
//	car.setColor("Gold");
//}
//
////Car retCarMin(Car* cars) {
////	for (int i = 0; i < 4; i++) {
////		int min = cars[0].getPrice();
////		if (cars[i].getPrice() < min) {
////			min = cars[i].getPrice();
////		}
////	}
////	
////}
//
//
//Car* colorCar(Car* cars,int size,  string color ) {
//	/*for (int i = 0; i < 4; i++) {
//		cars[i].setColor(color);
//		return cars[i];
//	}*/
//	int count = 0;
//	for (int i = 0; i < size; i++) {
//		if (cars[i].getColor() == color) count++;
//	}
//	Car* buf = new Car[count];
//	for (int i = 0, k = 0; i < size; i++) {
//		if (cars[i].getColor() == color) {
//			buf[k++] = cars[i];
//		}
//	}
//
//}
//
//struct Garage {
//	Car* cars = nullptr;
//	int countCars = 0;
//};


class Student {
private:
	string name;
	float ball;
public:
	Student(string name, float ball) {
		this->name = name;
		this->ball = ball;
	}
	void showInfo() {
		cout << name << " : " << ball << endl;
	}
};

int random(int a, int b) {
	return rand() % (b - a + 1) + a;
}

int main() {
	srand(time(NULL));
	////Car car1("black", "lada");
	//Car car1("black", "lada", 85000);
	////car1.setColor("red");
	////car1.setModel("merc");
	////car1.setPrice(1000);
	//cout << car1.toString();
	//cout << endl;
	//Car car2("silver", "audi", 23000);
	////cout<<getMinPriceCar(car1, car2).toString();
	////changeColor(car1);
	////cout << car1.toString();
	//Car car3 = getNewCar(car1);
	//cout<<car3.toString();
	//Car car4("blue", "lada", 85000);
	////Car** cars = new Car * [4]{ new Car(), new Car(), new Car(), new Car() };
	//Car* cars = new Car[4]{ Car("black", "lada", 85000),
	//							Car("black2", "lada2", 85000),
	//							Car("black3", "lada3", 85000),
	//							Car("black4", "lada4", 85000) };
	//float maxPrice = cars[0].getPrice();
	//int id = 0;
	//for (int i = 1; i < 4; i++) {
	//	if (maxPrice < cars[i].getPrice()) {
	//		maxPrice = cars[i].getPrice();
	//		id = 1;
	//	}
	//}
	//cout << cars[id].toString() << endl;

	////cout << colorCar(cars, "red");
	/*const int COUNT_CARS = 7;
	Car* cars = new Car[COUNT_CARS]{ Car("black", "lada", 85000),
								Car("black2", "lada2", 85000),
								Car("black3", "lada3", 85000),
								Car("black4", "lada4", 85000),
								Car("black5", "lada2", 85000),
								Car("black6", "lada3", 85000),
								Car("black7", "lada4", 85000)
	};
	for (int i = 0; i < COUNT_CARS; i++) {

	}*/
	string names[] = { "Pol", "Alex", "Karl","Evgen" };
	int countOfStudent = 8;
	Student** st = new Student * [countOfStudent];
	for (int i = 0; i < countOfStudent; i++) {
		st[i] = new Student(names[random(0, countOfStudent - 1), random(2, 4) + random(0, 1) * 0.1]);
		st[i]->showInfo();
	}
	return 0;
}


