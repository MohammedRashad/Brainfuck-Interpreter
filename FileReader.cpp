/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "FileReader.h"

char* FileReader::readFile(char* path) {

    char *output = (char*) malloc(10000000);

    ifstream myReadFile;

    myReadFile.open(path);

    if (myReadFile.is_open()) {

        while (!myReadFile.eof()) {

            myReadFile >> output;
 
        }
    }

    myReadFile.close();

    return output;
}

