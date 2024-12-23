#include <filesystem>
#include <iostream>
#include <system_error>
namespace fs = std::filesystem;

int main(int argc, char *argv[]) {

  const std::string cwd = fs::current_path();
  for (int i = 1; i < argc; i++) {
    std::error_code ec;
    if (fs::create_directory(argv[i], ec)) {
      std::cout << argv[i] << std::endl;
    } else {
      std::cout << argv[0] << ": cannot create directory \"" << argv[i]
                << "\": " << ec.message() << std::endl;
    }
  }
  return 0;
}
