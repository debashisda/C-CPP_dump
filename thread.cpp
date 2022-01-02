#include <iostream>
#include <thread>
using namespace std;

float t=0.1;

void delay(float s)
{
    float ms = 1000*s;
    clock_t st = clock();
    while(clock()<st+ms);
}

void foo()
{
	for(int i = 0;; i++)
    	{
	    cout << "0\n";
	    delay(t);
	}
}

int main()
{
	auto f = []()
	{
	   for(int i=0;;i++)
           {
	       cout << "1\n";
	       delay(t);
           }
	};

	thread th1(foo);
	thread th2(f);

	th1.join();
	th2.join();
}
