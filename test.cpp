#include "Folder.hpp"
#include <iostream>

int main(){
    File file = File("hello.", "content");
    File test = File(file);
    // std::cout << file1.getName();
    // std::cout << file1.getContents();
    //  std::cout << file1.getIcon();

    //std::cout << file.getContents();
    std::cout << file.getName() << std::endl;
    std::cout << file.getContents() << std::endl;
    std::cout << file.getIcon() << std::endl;

    return 0;
}
//./main
//make rebuild