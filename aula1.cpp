#include <iostream>

uint64_t fat(int n)
{
	if(n==1)
		return 1;
	return n*fat(n-1);
}

constexpr uint64_t fib(int n)
// uint64_t fib(int n)
{
	if(n<=1)
		return 1;
	return fib(n-1)+fib(n-2);
}

int main(int argc, char **argv)
{
	std::cout << "int8_t: " << sizeof(int8_t) << '\n';
	std::cout << "uint8_t: " << sizeof(uint8_t) << '\n';
	std::cout << "int16_t: " << sizeof(int16_t) << '\n';
	std::cout << "uint16_t: " << sizeof(uint16_t) << '\n';
	std::cout << "int32_t: " << sizeof(int32_t) << '\n';
	std::cout << "uint32_t: " << sizeof(uint32_t) << '\n';
	std::cout << "int64_t: " << sizeof(int64_t) << '\n';
	std::cout << "uint64_t: " << sizeof(uint64_t) << '\n';

	int n = atoi(argv[1]);
	std::cout << "fat("<< n<< "): " << fat(n) << '\n';
	uint64_t aux = fib(40);

	std::cout << "fib("<< n<< "): " << aux << '\n';	

	#ifdef teste
		std::cout << "Teste definido.\n" ;
	#endif
	#ifndef teste
		std::cout << "Teste nao definido.\n" ;
	#endif

}

