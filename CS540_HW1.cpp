#include <iostream>
#include <cstdlib>//For system() and exit()
#include <string>



int main() {
    int choice = 0;
    std::string message;
    std::string filename;


    do{
        std::cout << "Command Menu:" << std::endl;
        std::cout << "1. List Directory Contents (dir)" << std::endl;
        std::cout << "2. Change Directory (cd)" << std::endl;
        std::cout << "3. Create a new directory (mkdir)" << std::endl;
        std::cout << "4. Display a message(echo)" << std::endl;
        std::cout << "5. Concatenate and display the contents of files(type)" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;


        switch(choice){
    case 1:
     // Command to list directory contents
    std::cout << "Listing directory contents:" << std::endl;
    system("dir");
    
        break;
        
    case 2:
    // Command to change the working directory
    std::cout << "Change Directory:" << std::endl;
    system("cd");
    

    
        break;
        
    case 3:{
    //Command to create a new directory
    std::cout << "Enter directory name to create: ";
    std::cin >> filename; // Assuming the directory name is entered without spaces
    std::string mkdirCommand = "mkdir " + filename;
    system(mkdirCommand.c_str());

        break;
        
    }
    case 4:

    // Command to display a message
    std::cout << "Enter a message to display: ";
    std::cin.ignore(); // To clear the newline character left in the input buffer
    getline(std::cin, message);
    system(("echo " + message).c_str());

        break;
        
    case 5:

    // Command to concatenate and display the contents of files
    std::cout << "Enter filename to display its contents: ";
    std::cin >> filename; // Assuming the file name is entered without spaces
    system(("type " + filename).c_str());
        break;
        
    case 6:
    // Command to exit
    std::cout << "Exiting..." << std::endl;
    exit(0);

        break;
        
    default:
    std::cout << "Invalid command" << std::endl;
    break;
    }
    } while (true);

    return 0; // Added return statement for main
}