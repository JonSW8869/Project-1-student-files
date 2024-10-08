#include "Folder.hpp"
#include <iostream>

int main(){
    File file = File("hello.");
    File file1 = File(file);
    std::cout << file1.getName();
    //std::cout << file.getContents();
    return 0;
}
//./main
//make rebuild