#include <iostream>

using namespace std;
int main()
{
	int A;
	int* pA; // ���A������ --> �����ѷӹB��l

	A = 5;
	pA = &A; // ���ܼ�A��}�s�b pA pointer��

	cout << "�ܼ� A ����:" << A << "\n";   //5
	cout << "�ܼ� A ����}:" << &A << "\n";//0133FAEC
	cout << "����pA����:" << pA << "\n";   //0133FAEC
	cout << "*pA����:" << *pA << endl;    //5

	system("PAUSE");
}