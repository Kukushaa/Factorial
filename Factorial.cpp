#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long long n;

	do
	{
		cout << "Enter number = "; cin >> n;
		if (n > 20)
		{
			cout << "Sorry, but your number is bigger than 20 :(" << endl;
		}

	}
	while(n > 20); 

	long long i = 1;

	long long p = 1;

	while(i <= n)
	{

		p = p * i;

		i++;

	}

	cout << n << "! = " << p << endl; 

	return 0;
}