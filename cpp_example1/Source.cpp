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
	cout << "�п�J��Ӿ��" << endl;
	cin >> num1 >> num2;

	ans = max(num1 , num2);

	cout << "��Ƥ�����j���ƭȬ�:" << ans << endl;
	system("pause");
}