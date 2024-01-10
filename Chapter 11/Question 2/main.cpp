#include <iostream>

template<typename T>
T add(T x, T y){

    std::cout << x << " + " << y << " = ";
    return x + y;
}

int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

	return 0;
}
