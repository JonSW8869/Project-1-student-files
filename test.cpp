#include "Folder.hpp"
#include "File.hpp"
#include <iostream>

// bool checkValidity(const std::string &filename)
// {
//     bool hasOne = false;
//     int periodCount = std::count(filename.begin(), filename.end(), '.');
//     int otherCount = std::count(filename.begin(), filename.end(), '!');
//     // std::cout << otherCount << std::endl;
//     if (periodCount > 1)
//     {
//         std::cout << "f";
//         return false;
//     }
//     for (int i = 0; i < filename.size(); i++)
//     {
//         if (!isalnum(filename[i]) || otherCount >= 1)
//         {
//             std::cout << "ff";
//             return false;
//         }
//         std::cout << "t";
//         return true;
//     }
// };

int main(){
    // File file = File("symbol!txt"); // throw error
    File file1 = File(".env");
    // File test = File(file);
    std::cout << file1.getName() << std::endl;
    std::cout << file1.getContents() << std::endl;
    std::cout << file1.getIcon() << std::endl;

    // std::cout << file.getContents();
    //  std::cout << test.getName() << std::endl;
    //  std::cout << test.getContents() << std::endl;
    //  std::cout << test.getIcon() << std::endl;

    // std::string filename = "symboltxt.";
    // std::cout << checkValidity(filename);
    return 0;
}
//./main
//make rebuild