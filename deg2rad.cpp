#include "iostream"
int main(int argv,char* args[]) {
	if(argv > 1) {
		int deg = 0;
		sscanf(args[1], "%d", &deg);
		if(deg == 0) {
			std::cout << "0" << std::endl;
			return 0;
		}
		if(deg < 0) {
			deg = deg * -1;
			std::cout << "-";
		}
		int half = 180;
		for(int i = 2; i <= deg; i++) {
			if(((deg % i)+(half % i)) == 0) {
				deg = deg / i;
				half = half / i;
				i = 1;
			}
		}
		if(deg != 1) std::cout << deg ;
		std::cout << "π";
		if(half != 1) std::cout << "/" << half;
		std::cout << std::endl;
	}
	return 0;
}
