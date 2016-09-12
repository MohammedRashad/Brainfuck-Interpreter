/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



#include <cstdlib>
#include <iostream>
#include <stdlib.h>

#include "FileReader.h"
#include "Brainfuck.h"

using namespace std;

int main(int argc, char** argv) {

    FileReader reader;
    Brainfuck bf;

    int choice;

    char *code = (char*) malloc(10000000);
    char *filepath = (char*) malloc(100);


    cout << "==========  BFI,  A Slightly Improved BrainFuck Implementation ==========";
    cout << endl;
    cout << endl;
    cout << "1- File Mode" << endl;
    cout << "2- Interactive Mode" << endl;
    cout << "3- Help & About" << endl;
    cout << endl;
    cout << endl;

    cout << "Choice >> ";
    cin >> choice;

    if (choice == 1) {

        cout << "\nFile Path >> ";
        cin >> filepath;

        code = reader.readFile(filepath);
        
        bf.clearScreen();
        bf.interpretCode(code);

    } else if (choice == 2) {

        char continuee;

        do {

            cout << "BF Code >> ";
            cin >> code;

            bf.clearScreen();
            bf.interpretCode(code);

            cout << "more coding? ";
            cin >> continuee;

        } while (continuee == 'Y' || continuee == 'y');
    }

    return 0;
}



