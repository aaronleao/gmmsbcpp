#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<float> l;




	l.push_back(50);
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(40);

	/*
	* Varrendo a lista
	*/
	for(auto it = l.begin(); it!= l.end() ; it++)
		std::cout << *it << ' ';
	std::cout << '\n';
	
	/*
	* Ordenando
	*/
	l.sort();
	
	/*
	* Varrendo novamente
	*/
	for(auto it = l.begin(); it!= l.end() ; it++)
		std::cout << *it << ' ';
	std::cout << '\n';

}
