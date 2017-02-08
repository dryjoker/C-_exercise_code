#include<iostream>
using namespace std;
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int num1 , num2 , ans;
	cout << "請輸入兩個整數" << endl;
	cin >> num1 >> num2;

	ans = max(num1 , num2);

	cout << "兩數中比較大的數值為:" << ans << endl;
	system("pause");
}