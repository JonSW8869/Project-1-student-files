#include "Folder.hpp"
#include <iostream>

int main(){
    File file = File("hello", "contents");
    File test = File(file);
    // std::cout << file1.getName();
    // std::cout << file1.getContents();
    //  std::cout << file1.getIcon();

    //std::cout << file.getContents();
    std::cout << test.getName() << std::endl;
    std::cout << test.getContents() << std::endl;
    std::cout << test.getIcon() << std::endl;

    return 0;
}
//./main
//make rebuild