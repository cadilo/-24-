#include "Time.h"

TIME::TIME(void)
{
	min=sec=0;
}

TIME::TIME(int M, int S)
{
	min=M;
	sec=S;
}

TIME::TIME(const TIME&t)
{
	min=t.min;sec=t.sec;
}

TIME&TIME::operator =(const TIME &t)
{
	min=t.min;sec=t.sec;
	return*this;
}

ostream&operator<<(ostream&out, const TIME&t)
{
	out << t.min << " : " << t.sec; 
	return out;
}

istream& operator>>(istream& in, TIME& t) 
{ 
	cout << "\nmin?"; in >> t.min; 
	cout << "\nsec?"; in >> t.sec; 
	return in; 
}

TIME TIME::operator+(TIME k)
{
	int t = min * 60 + sec;
	int kt = k.min * 60 + k.sec;
	t += kt;
	TIME temp(t / 60, t % 60);
	return temp;
}
