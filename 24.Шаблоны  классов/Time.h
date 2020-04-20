#include <iostream>

using namespace std;

class TIME
{
public:
	TIME(void);
	TIME(int, int);
	TIME(const TIME&);
	TIME&operator=(const TIME&);
	TIME operator+(TIME k);
	//перегруженные операции ввода-вывода
	friend ostream& operator<< (ostream& out, const TIME&);
	friend istream& operator>> (istream& in, TIME&);
	virtual ~TIME(void){};
private:
	int min,sec;
};
