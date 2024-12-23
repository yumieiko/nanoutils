#include <algorithm>
#include <cstdio>
#include <string>
#include <filesystem>
namespace fs = std::filesystem;

// TODO: if argv is empty - list cwd, if have path - list path folder
int main() {
  for (const auto & entry : fs::directory_iterator(fs::current_path())) {
    // std::cout << entry.path().filename() << std::endl;
		std::string entrystr = entry.path().filename().c_str();
		entrystr.erase(std::remove_if(entrystr.begin(), entrystr.end(), [](char c) { return c == '"'; }), entrystr.end());
		if (entry.is_directory()) {
			printf("  -- %u -- %hhd -- %ju -- \uea7b %s  \n",
					entry.status().permissions(),
					entry.status().type(),
					entry.file_size(), //FIXME: file_size not work for folders!
					entrystr.c_str());
		}
		if (entry.is_regular_file()) {
			printf("  -- %u -- %hhd -- %ju -- \uf07b %s  \n",
					entry.status().permissions(),
					entry.status().type(),
					entry.file_size(),
					entrystr.c_str());
		}

	}
}
