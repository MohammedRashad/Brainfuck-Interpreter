/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileReader.h
 * Author: root
 *
 * Created on September 9, 2016, 5:12 PM
 */

#ifndef FILEREADER_H
#define FILEREADER_H

#include<iostream>
#include<fstream>
#include <stdlib.h> 

using namespace std;
class FileReader {
    
public:
     
    char* readFile(char* path);
};

#endif /* FILEREADER_H */

