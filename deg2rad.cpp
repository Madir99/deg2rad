#include "iostream"
#include "libfrac.hpp"
int main(int argv,char* args[]) {
	if(argv > 1) {
		int deg = 0;
		sscanf(args[1], "%d", &deg);
		if(deg == 0) {
			std::cout << "0" << std::endl;
			return 0;
		}
		int *out = frcsimp(deg,180);
		if(*out != 1) std::cout << *out;
		std::cout << "π";
		if(*(out+1) != 1) std::cout << "/" << *(out+1);
		std::cout << std::endl;
	}
	return 0;
}
