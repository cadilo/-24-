#include "Vector.h"
#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	//инициализаци€, ввод и вывод значений вектора
	VECTOR<int>A(5,0);
	cin>>A;
	cout << "ѕервый вектор: ";
	cout<<A<<endl;
	//инициализаци€ и вывод значений вектора
	VECTOR <int>B(5,0);
	cin >> B;
	cout << "¬торой вектор: ";
	cout<<B<<endl;
	//операци€ присваивани€
	//B=A;
	//cout<<B<<endl;
	//доступ по индексу
	cout << "ƒоступ по индексу: ";
	cout <<A[2]<<endl;
	//получение длины вектора
	cout << "ƒлинна первого и второго вектора: ";
	cout<<A()<<endl;
	//операци€ сложени€ с константой
	//B=A+10;cout<<B<<endl;
	//
	
	VECTOR<int> C(5, 0);
	C = B + A;
	cout << "—ложение двух векторов: "; 
	cout << C << endl;


	return 0;
}
