/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#ifndef BRAINFUCK_H
#define BRAINFUCK_H

#include<iostream>
#include<fstream>
#include <stdlib.h> 

using namespace std;

class Brainfuck {
public:



    void interpretCode(char* code);
    void clearScreen();

};

#endif /* BRAINFUCK_H */

