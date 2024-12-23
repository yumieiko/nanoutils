#include <iostream>

int main() {
	std::cout << "Nanoutils is powerfull trying to rewrite gnu base commands for unix-based systems" << std::endl;
	std::cout << "Installed tools: " << std::endl;
	if (system("which makedir > /dev/null 2>&1")) {
		std::cout << "makedir is not installed!!!" << std::endl;
	} else {
		std::cout << "makedir avaliable on your pc" << std::endl;
	}
if (system("which tch > /dev/null 2>&1")) {
		std::cout << "tch is not installed!!!" << std::endl;
	} else {
		std::cout << "tch avaliable on your pc" << std::endl;
	}
}
