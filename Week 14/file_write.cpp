#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(void){
    std::ofstream out;
    std::cout << "Enter files name: ";
    std::string file_name;
    std::cin >> file_name;

    //opennign the file
    out.open("Hello.txt");


    //writing into a file
    out << "hello" << std::endl;
    out << "sfareasdfs" << std::endl;

    for (int i  = 0; i <= 100; i++){
       
        out << std::setw(5) <<  i;
        if (i % 10 ==0){
            out << '\n';
        }
    }

    //close the file 
    out.close();

    return 0;
}