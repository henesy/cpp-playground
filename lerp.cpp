#include <iostream>

template <typename T>
constexpr T lerp(T a, T b, T t) {
  return a + t * (b - a);
}

int main() {
	double a = 10.0f, b = 5.0f, t = 3.0f;
	
	std::cout << lerp(a, b, t) << std::endl;
	
	return 0;
}

