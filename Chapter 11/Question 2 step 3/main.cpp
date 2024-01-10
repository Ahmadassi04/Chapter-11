#include <iostream>

template<typename T,typename N>
auto sub(T x,N y){

    std::cout << x << " - " << y << " = ";
    return x - y;

}

int main()
{
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	return 0;
}
