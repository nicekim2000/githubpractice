#include "calculator.h"

int main(void)
{
	calculator* cal = new calculator;
	float x1, x2;
	char op,yn;
	cout << "****계산기 입니다.****" << endl;
	while (true)
	{
		cout << "두 실수를 입력해주세요 !" << endl;
		cout << "x1 : ";
		cin >> x1;
		cout << "x2 : ";
		cin >> x2;
		cout << "연산자를 입력하세요 (현재 +,- 가능) : " ;
		cin >> op;
		switch (op)
		{
		case '+':
			cout << x1 << " + " << x2 << " = " << cal->add(x1, x2) << endl;
			break;
		case '-':
			cout << x1 << " - " << x2 << " = " << cal->minus(x1, x2) << endl;
			break;
					//곱셈과 나눗셈 추가
		case '*':
			cout << x1 << " * " << x2 << " = " << cal->mul(x1, x2) << endl;
			break;
		case '/':
			cout << x1 << " / " << x2 << " = " << cal->div(x1, x2) << endl;
			break;
		default:
			cout << "연산자 입력 오류 !" << endl;
		}
		cout << "계속 하시겠습니까 ? [Y/N] : ";
		cin >> yn;
		if (yn == 'N')
		{
			cout << "종료합니다." << endl;
			break;
		}
	}
}
