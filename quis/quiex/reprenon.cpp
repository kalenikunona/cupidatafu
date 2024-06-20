#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path p = "../no-such-file";
    std::filesystem::path canonical_path = std::filesystem::weakly_canonical(p);
    
    std::cout << "Original path: " << p << std::endl;
    std::cout << "Canonical path: " << canonical_path << std::endl;
    
    return 0;
}
