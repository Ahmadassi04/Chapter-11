#include <iostream>

template <typename T,typename N>
T mult(T x, N y){

    std::cout << x << " * " << y << " = ";
    return x * y;

}
int main()
{
	std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

	return 0;
}
