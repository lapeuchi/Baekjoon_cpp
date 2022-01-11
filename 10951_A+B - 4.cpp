#include <iostream>
using namespace std;

int main()
{
	int a, b;
	
	// a와 b를 입력 받았는데 읽을 수 없는 데이터인 경우 while을 탈출함. 
	// EOF(End Of File), 파일의 끝 
	while(!(cin >> a >> b).eof())
	{
		cout << a + b << '\n';
	}	
} 
