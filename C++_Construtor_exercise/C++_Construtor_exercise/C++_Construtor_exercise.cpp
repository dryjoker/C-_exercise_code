// C++_Construtor_exercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "C++_Construtor_exercise.h"
//make a object Array
using namespace std;

class Car {
private:
	int num;
	double gas; // 汽油 屬性欄位
public:
	Car(); //   無參數的 Constructor
	Car(int n, double g); //有參數的 Constructor
	void show();
};

int main()
{
	//object Array 
	Car myCars[4] = { //存放4個Car object 其中一個不透漏資訊
		Car() ,            //[0]
		Car(1968 , 25.6),  //[1]
		Car(8765 , 24.8),  //[2]
		Car(4578 , 22.5)   //[3]
	};

	system("PAUSE");
}

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "一輛汽車(object)做好了" << endl;
}

Car::Car(int numCar, double gasCar)
{
	//傳值賦予
	num = numCar;//車牌號碼
	gas = gasCar;//汽車油量
	//打印資訊
	cout << "製作一輛車牌號碼:" << num <<endl;
	cout << "汽油CC數" << gas << endl;
}

void Car::show()
{
	cout << "汽車車牌號碼" << num << endl;
	cout << "汽車油量" << gas << endl;
}
