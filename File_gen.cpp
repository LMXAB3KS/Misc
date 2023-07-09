// WARNING: ONLY EDIT IF YOU KNOW WHAT YOU ARE DOING. I TAKE NO RESPONSIBILITY IF YOU RUN OR EDIT THIS ON YOUR OWN OR SOMEONE ELSES COMPUTER    
// C++ program.
#include <iostream> //for input output functions
#include <fstream> //needed for reading writing or creating a file
#include <sstream> //to work with string for writing in file 

void main() { //entry point
    const int number_of_files = 1; //changing the number will generate more files. Change at your own risk.
    for (int i = 1; i <= number_of_files; i++) { //loop that generates files until i is less than or equal to number_of_files
        std::ostringstream file1;
        file1 << "Hello_World1" << i << ".txt"; //Hello_world is the file name and .txt is the extention. change as you want
        std::ofstream outputFile(file1.str());
        if (outputFile.is_open()) { 
            outputFile << "Anything you want goes here"; //you can remove this entirely and replace w/custom line
            outputFile.close(); //to finalize changes to file and flush the stream
            std::cout << "File " << file1.str() << " created successfully.\n";
        }
        else {
            std::cout << "An error occured." << file1.str() << ".\n"; //
        }
    }
}
