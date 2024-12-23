#include <complex>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <system_error>

namespace fs = std::filesystem;
int main(int argc, char *argv[]) {
	std::string cwd = fs::current_path();
	for (int i = 1; i < argc; i++)
	{
		std::error_code erc;
		std::ofstream file(argv[i]);
		file << "\0"; // Writing zero-byte to file
		file.close();
	}
	return 0;
}
