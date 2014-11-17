#include <iostream>

int gInt1 = 10;
int gInt2 = 5;

#define CAST_LINE(s,d)	printf("%s %d\n", #s, gInt##d);
#define BEGIN_SWITCH(t)	switch(t){
#define CALL_FUNC(d)		case ##d: printf("%d\n", #d); break;
#define END_SWITCH }

void Print1()
{
	printf("test");
	printf("second test");
};

class App1
{
	App1(){};
	App1(const App1& right);
	App1&& operator=(const App1& right);
};

App1::App1(const App1& right)
{
}

App1&& App1::operator=(const App1& right)
{
	return App1();
}

void main()
{
	CAST_LINE(tt, 2);

	int d_Case = 10;
	BEGIN_SWITCH(d_Case)
	CALL_FUNC(2)
	CALL_FUNC(10)
	END_SWITCH
}