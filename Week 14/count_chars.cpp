#include <iostream>
#include <fstream>

int main(int argc, char *argv[]){
    std::ifstream in;
    for (int i = 0; i < argc; i++){
        std::cout << argv[i] << std::endl;
    }

    if(argc != 2){
        std::cout << "Usage: " << argv[0] << " <file_name>\n";
        return 1;
    }

    std::string file_name(argv[1]);


    in.open(file_name);

     //check if file exists
    if (in.fail()){
        std::cout  << file_name << " could not be open\n";
        return 1; //error
    }

    char ch;
    int count_chars = 0;
    while (!in.eof()){
        ch = in.get(); // gets 1 character from a file 
        if (ch != ' ' && ch != '\n' && ch != EOF){
                count_chars++;
        }
    }

    std::cout << file_name << " has " << count_chars << " characters\n";

    //todp
    //count the number of lines in th efile

    int count_newlines = 0;

    while(!in.eof()){
        if 
    }

    in.close();

    return 0;
}

//g++ count_chars.cpp -o count_chars
//changes ./a.out to another name