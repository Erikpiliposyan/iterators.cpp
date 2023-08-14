#include <iostream>
#include <vector>
#include <list>
#include <set>

//vector print 
void print(std::vector<int> vec) {
    for (auto in : vec) {
		std::cout << in << " ";
	}
    std::cout << std::endl; 
}
//list print
void print(std::list<int> lis) {
    for (auto in : lis) {
		std::cout << in << " ";
	}
    std::cout << std::endl; 
}

//set print
void print(std::set<int> s) {
    for (auto in : s) {
		std::cout << in << " ";
	}
    std::cout << std::endl; 
}

//vector
void delete_elements_less_than(std::vector<int>& vec, int n) {
    for (auto it = vec.begin(); it != vec.end();)
	{
		if (*it < n)
		{
			it = vec.erase(it);
		}
		else
		{
			++it;
		}
	}
}
//list
void delete_elements_less_than(std::list<int>& lis, int n) {
    for (auto it = lis.begin(); it != lis.end();)
	{
		if (*it < n)
		{
			it = lis.erase(it);
		}
		else
		{
			++it;
		}
	}
}

//seta
void delete_elements_less_than(std::set<int>& s, int n) {
    for (auto it = s.begin(); it != s.end();)
	{
		if (*it < n)
		{
			it = s.erase(it);
		}
		else
		{
			++it;
		}
	}
}


int main(){

    std::vector<int> vec = {1, 9 , 12 , 4 , 12 , 12 , 1212 , 121212 , 3 , 8 };
    delete_elements_less_than(vec, 12);
	print(vec);

    std::list<int> lis = {1, 9 , 12 , 4 , 12 , 12 , 1212 , 121212 , 3 , 8 };
    delete_elements_less_than(lis, 12);
	print(lis);

    std::set<int> s = {1, 9 , 12 , 4 , 12 , 12 , 1212 , 121212 , 3 , 8 };
    delete_elements_less_than(s, 12);
	print(s);

    return 0;
}