#include <iostream>
#include <typeinfo>

int sum(int a, int b=0);
double sum(double a, int b);
double sum(int a, double b);
double sum(double a, double b=0);

auto foo();


template <typename T> T prod(T a, T b);
template <typename T1, typename T2> T1 prod(T1 a, T2 b);

int main()
{
	/*
	* Function Overload
	*/
	// sum(0,1);
	// sum(0.0,1);
	// sum(0,1.0);
	// sum(0.0,1.0);
	// sum(0);
	// sum(0.0);



	/*
	* auto: Auto assignment keyword
	*/
	// int x1 = sum(0,1);
	// std::cout << "Tipo da variavel X1 eh: "<< typeid(x1).name() << '\n';

	// double x2 = sum(0.0,1);
	// std::cout << "Tipo da variavel X2 eh: "<< typeid(x2).name() << '\n';
	
	// auto x3 = sum(0,1.0);
	// std::cout << "Tipo da variavel X3 eh: "<< typeid(x3).name() << '\n';

	// auto x4 = sum(0.0,1.0);
	// std::cout << "Tipo da variavel X4 eh: "<< typeid(x4).name() << '\n';

	// auto x5 = sum(0);
	// std::cout << "Tipo da variavel X5 eh: "<< typeid(x5).name() << '\n';

	// auto x6 = sum(0.0);
	// std::cout << "Tipo da variavel X6 eh: "<< typeid(x6).name() << '\n';

	// auto x7 = foo();
	// std::cout << "Tipo da variavel X7 eh: "<< typeid(x7).name() << '\n';
	


	/*
	* Template of function
	*/
	// auto x8 = prod(10,2);
	// std::cout << "Tipo da variavel X8 eh: "<< typeid(x8).name() << '\n';

	// auto x9 = prod(10.0,2.0);
	// std::cout << "Tipo da variavel X9 eh: "<< typeid(x9).name() << '\n';

	// auto x10 = prod(10.0,2);
	// std::cout << "Tipo da variavel X10 eh: "<< typeid(x10).name() << '\n';
}	

int sum(int a, int b)
{
	std::cout << "Ambos Inteiro\n";
	return a+b;
}
double sum(double a, int b)
{
	std::cout << "Primeiro double\n";
	return a+b;
}

double sum(int a, double b)
{
	std::cout << "Segundo double\n";
	return a+b;
}

double sum(double a, double b)
{
	std::cout << "Ambos double\n";
	return a+b;
}

auto foo()
{
	return;
}

template <typename T> T prod(T a, T b)
{
	return a*b;
}
template <typename T1, typename T2> T1 prod(T1 a, T2 b)
{
	return a*b;
}