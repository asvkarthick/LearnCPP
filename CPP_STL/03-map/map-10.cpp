#include <iostream>
#include <map>
#include <algorithm>
#include <list>

int main(void)
{
	std::map<int, std::list<int>> m;
	const int k = 100;
	int i = k;

	while(i > 0) {
		for (int j = i - 1; j < i + 2; j++)
			m[i].push_back(j);
		i--;
	}

	for (auto &x : m) {
		std::cout << x.first;
		for (auto &y : x.second)
			std::cout << " -> " << y;
		auto it = std::min_element(x.second.begin(), x.second.end());
		std::cout << " -> min : " << *it;
		it = std::max_element(x.second.begin(), x.second.end());
		std::cout << " -> max : " << *it;
		std::cout << std::endl;
	}

	return 0;
}
