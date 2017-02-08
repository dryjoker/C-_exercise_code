#include <iostream>

using namespace std;
int main()
{
	int A;
	int* pA; // 整數A的指標 --> 間接參照運算子

	A = 5;
	pA = &A; // 把變數A位址存在 pA pointer中

	cout << "變數 A 的值:" << A << "\n";   //5
	cout << "變數 A 的位址:" << &A << "\n";//0133FAEC
	cout << "指標pA的值:" << pA << "\n";   //0133FAEC
	cout << "*pA的值:" << *pA << endl;    //5

	system("PAUSE");
}