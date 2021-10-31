/* Problem: Function Templates
 * Author : Karthick Kumaran
 * E-mail : asvkarthick@gmail.com
 */

#include <iostream>
using namespace std;

template<typename T>
void print(T arg)
{
	std::cout << arg << std::endl;
}

int main() {
	print(10);
	print(20.0);
	print('A');
	print("Karthick");
	return 0;
}
