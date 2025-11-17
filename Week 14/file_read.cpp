#include <iostream>
#include <fstream>
#include <string>

int main(void){
    std::ifstream in;
    std::cout << "Enter files name: ";
    std::string file_name;
    getline(std::cin, file_name);

    //opennign the file
    in.open(file_name);

    //check if file exists
    if (in.fail()){
        std::cout  << file_name << " could not be open\n";
        return 1; //error
    }

    //reading from a file
    std::string first_line;
    std::string second_line;

    getline(in, first_line);
    getline(in, second_line);
    

    int num;
    while (in >> num) {
        std::cout << num << ' ';
        sum += num;
    }

    std::cout << first_line << "A+ code: " << second_line << std::endl;
    std::cout << "Sum: " << sum << std::endl;

    /*
    for (int i  = 0; i <= 100; i++){
        //std::setw(5) 
        out <<  i;
        if (i % 10 ==0){
            out << '\n';
        }
    }
    */
    //close the file 
    in.close();

    return 0;
}