#include <iostream>

// uint64_t fib(int n)
constexpr uint64_t fib(int n)
{
	if(n<=1)
		return 1;
	return fib(n-1) + fib(n-2);
}

int main(int argc, char** argv)
{
	int n = atoi(argv[1]);
	const uint64_t result = fib(45);
	const uint64_t result = fib(n);
	std::cout << "fib de "<< n << ": " << result << '\n';
}