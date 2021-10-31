/* Problem: Store key value pair of any data type in class
 * Author : Karthick Kumaran
 * E-mail : asvkarthick@gmail.com
 */

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

template<typename T1, typename T2>
class C
{
public:
	void insert(T1 key, T2 value)
	{
		hashMap[key] = value;
	}
	void print(T1 key)
	{
		if (hashMap.find(key) == hashMap.end()) return;
		std::cout << key << " : " << hashMap[key] << std::endl;
	}
	int size()
	{
		return hashMap.size();
	}
private:
	std::unordered_map<T1, T2> hashMap;
};


int main() {
	C<int, std::string> c;
	c.insert(0, "ASV");
	c.insert(1, "Karthick");
	c.insert(2, "Kumaran");
	c.insert(3, "Ayyallu");
	c.insert(4, "Seshagiri");
	c.insert(5, "Viswanathan");
	for (int i = 0; i < c.size(); i++) {
		c.print(i);
	}
	return 0;
}
