/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "Brainfuck.h"

void Brainfuck::clearScreen() {

#ifdef OS_WINDOWS

    system("CLS");

#else

    system("clear");

#endif 

}

void Brainfuck::interpretCode(char* code) {


    char tape[30000] = {1};
    int loop;

    char *codePtr = code;
    char *tapePtr = tape;
    
 
    while (*tapePtr) ++tapePtr;

    cout << "\n\n\n";

    while (*codePtr) {

        switch (*codePtr) {

            case '>':

                tapePtr++;
                break;

            case '<':

                tapePtr--;
                break;

            case '+':

                (*tapePtr)++;
                break;

            case '-':

                (*tapePtr)--;
                break;

            case '.':

                cout << *tapePtr;
                break;

            case ',':

                cin >> *tapePtr;
                break;

            case '[':


                loop = 1;
                if (*tapePtr == '\0') {
                    do {
                        codePtr++;
                        if (*codePtr == '[') loop++;
                        else if (*codePtr == ']') loop--;
                    } while (loop != 0);
                }

                break;

            case ']':


                loop = 0;
                do {
                    if (*codePtr == '[') loop++;
                    else if (*codePtr == ']') loop--;
                    codePtr--;
                } while (loop != 0);


                break;

            case '#':
                
                cout << "Current Instruction :" << --(*codePtr) << endl;
                
                ++(*codePtr);
                
                break;

            case '$':

                cout << "Current Cell Address :" << tapePtr << endl;
                break;
        }

        ++codePtr;


    }


    cout << "\n\n\n";

}