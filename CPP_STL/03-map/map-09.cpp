#include <iostream>
#include <map>

int main(void)
{
	std::map<int, int> m;
	const int k = 100;
	int i = k;

	while(i > 0) {
		m[i] = k - i;
		i--;
	}

	for (auto &x : m)
		std::cout << x.first <<  " : " << x.second << std::endl;

	return 0;
}
