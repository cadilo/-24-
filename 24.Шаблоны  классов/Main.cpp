#include "Vector.h"
#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	//�������������, ���� � ����� �������� �������
	VECTOR<int>A(5,0);
	cin>>A;
	cout << "������ ������: ";
	cout<<A<<endl;
	//������������� � ����� �������� �������
	VECTOR <int>B(5,0);
	cin >> B;
	cout << "������ ������: ";
	cout<<B<<endl;
	//�������� ������������
	//B=A;
	//cout<<B<<endl;
	//������ �� �������
	cout << "������ �� �������: ";
	cout <<A[2]<<endl;
	//��������� ����� �������
	cout << "������ ������� � ������� �������: ";
	cout<<A()<<endl;
	//�������� �������� � ����������
	//B=A+10;cout<<B<<endl;
	//
	
	VECTOR<int> C(5, 0);
	C = B + A;
	cout << "�������� ���� ��������: "; 
	cout << C << endl;


	return 0;
}
