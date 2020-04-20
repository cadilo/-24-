#include <iostream>

using namespace std;

template <class T> //T - параметр шаблона
class VECTOR
{
	public:
		//конструктор с параметрами: выделяет память под s элементов и заполняет их значением k
		VECTOR(int s,T k);
		//конструктор с параметрами
		VECTOR(const VECTOR<T>&a);
						
		//деструктор
		~VECTOR();
						
		//оператор присваивания
		VECTOR&operator=(const VECTOR<T>&a);
		
		//операция доступа по индексу
		T&operator[](int index);
		
		//операция для добавление константы
		VECTOR operator+(VECTOR<T>&B);
		
		//операция, возвращающая длину вектора
		int operator()();
		
		//перегруженные операции ввода-вывода
		// <> - указывают на то, что функция является шаблоном
		//friend ostream& operator<< <>(ostream& out, const VECTOR<T>&a);
		//friend istream& operator>> <>(istream& in, VECTOR<T>&a);
		
		int size;//размер вектора
		T*data;//указатель на динамический массив значений вектора
		
};

// опрeделение функций

//конструктор с параметрами
template <class T> 
VECTOR<T>::VECTOR(int s,T k)
{
	size=s;
	data=new T[size];
	for(int i=0;i<size;i++)
		data[i]=k;
}


//конструктор копирования
template <class T> 
VECTOR<T>::VECTOR(const VECTOR&a)
{
	size=a.size;
	data=new T[size];
	for(int i=0;i<size;i++)
		data[i]=a.data[i];
}


//деструктор
template <class T> 
VECTOR<T>::~VECTOR()

{
	delete[]data;
	data = 0;
}


//операция присваивания
template <class T> 
VECTOR<T>&VECTOR<T>::operator=(const VECTOR<T>&a)
{
	if(this==&a)return *this;
	size=a.size;
	if (data!=0) delete[]data;
	data=new T[size];
	for(int i=0;i<size;i++)
		data[i]=a.data[i];
	return *this;
}


//операция доступа по индексу
template <class T> 
T&VECTOR<T>::operator[](int index)
{
	if (index<size) return data[index]; 
	else cout << "\nError! Index>size"; 
}


//операция для добавления константы
template <class T> 
VECTOR<T> VECTOR<T>::operator+(VECTOR<T>&b)//+k
{
	
	VECTOR<T> temp(size,0);//инициализируем временный вектор любым значением
	for (int i=0;i<size;++i)
		temp.data[i]=data[i]+b.data[i];
	return temp;
}


//операция для получения длины вектора
template <class T> 
int VECTOR<T>::operator ()()
{
	return size;
}


//операции для ввода-вывода
template <class T> 
ostream&operator<< (ostream&out,const VECTOR<T>&a)
{
	for(int i=0;i<a.size;++i)
		out<<a.data[i]<<" ";
	return out;
}


template <class T> 
istream&operator>> (istream&in,VECTOR<T>&a)
{
	for(int i=0;i<a.size;++i)
		in>>a.data[i];
	return in;
}


