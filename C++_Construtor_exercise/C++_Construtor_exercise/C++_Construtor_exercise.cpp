// C++_Construtor_exercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "C++_Construtor_exercise.h"
//make a object Array
using namespace std;

class Car {
private:
	int num;
	double gas; // �T�o �ݩ����
public:
	Car(); //   �L�Ѽƪ� Constructor
	Car(int n, double g); //���Ѽƪ� Constructor
	void show();
};

int main()
{
	//object Array 
	Car myCars[4] = { //�s��4��Car object �䤤�@�Ӥ��z�|��T
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
	cout << "�@���T��(object)���n�F" << endl;
}

Car::Car(int numCar, double gasCar)
{
	//�ǭȽᤩ
	num = numCar;//���P���X
	gas = gasCar;//�T���o�q
	//���L��T
	cout << "�s�@�@�����P���X:" << num <<endl;
	cout << "�T�oCC��" << gas << endl;
}

void Car::show()
{
	cout << "�T�����P���X" << num << endl;
	cout << "�T���o�q" << gas << endl;
}
