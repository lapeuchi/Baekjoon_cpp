#include <iostream>
 
using namespace std;
 
int main(int argc, const char * argv[]) 
{ 
	int count[42] = {};		
	int v;
	for(int i = 0; i < 10; i++) 
	{
		cin >> v;
		// �Է� ���� ���� 42�� ���� ������ �ε����� ���� ������Ų��.
		count[v % 42]++;	
	}
 
	int result = 0;

	for(int i=0; i < 42; i++) 
	{
		if(count[i] > 0) 
		{		
			result++;
		}
	}
	cout << result;
 
	return 0;
 
 
}
