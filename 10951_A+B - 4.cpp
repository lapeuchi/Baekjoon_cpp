#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	// a�� b�� �Է� �޾Ҵµ� ���� �� ���� �������� ��� while�� Ż����. 
	// EOF(End Of File), ������ �� 
	while(!(cin >> a >> b).eof())
	{
		cout << a + b << '\n';
	}	
} 
