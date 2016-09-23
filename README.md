# Brainfuck Interpreter

A slightly improved implementation of Brainfuck esoteric programming language.

#Info 

Brainfuck is the most famous esoteric programming language, and has inspired the creation of a host of other languages. 

Brainfuck was invented by Urban Müller in 1993, in an attempt to make a language for which he could write the smallest possible compiler for the Amiga OS, version 2.0. He managed to write a 240-byte compiler. The language was inspired by False, which had a 1024-byte compiler. Müller chose to name the language brainfuck (with the initial letter in lower case, although it is now often capitalised).

#Brainfuck Commands 

Brainfuck operates on an array of memory cells, also referred to as the tape, each initially set to zero. There is a pointer, initially pointing to the first memory cell. The commands are:

- ">"	   Move the pointer to the right. 
- "<"	   Move the pointer to the left. 
- "+" 	 Increment the memory cell under the pointer. 
- "-" 	 Decrement the memory cell under the pointer. 
- "."	   Output the character signified by the cell at the pointer. 
- ","	   Input a character and store it in the cell at the pointer. 
- "["    Jump past the matching ] if the cell under the pointer is 0. 
- "]"	   Jump back to the matching [ if the cell under the pointer is non-zero. 

In this implementation I added 2 new commands (mainly to be used for debugging) :

- "#"    Prints The Current Instruction.
- "$"    Prints The Current Cell Address.

#Features 

- Written in C++.
- Turing Complete Language.
- Scripting Mode & Normal Mode.
- 10 commands instead of the original eight.

#To Do

- Improve Memory Management Stuff
- Fix minor bugs

#Sample Code 
This program prints "Hello World!"

    ++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.

#
**This Project is signed under GPL 3.0 , You're free to use and redistribute under the terms of the license.**
