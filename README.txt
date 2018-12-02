# LibrarySimulator

Purpose: The purpose of this software is to add books to either a fiction or non-fiction library.
Developer & Development Date: Iqra McIlveen - November 15, 2018

Software organization: 
	There are 9 .cc files consisting of:
		- Array.cc            - List.cc
		- Book.cc             - main.cc
		- Control.cc          - NonFictionBook.cc
		- FictionBook.cc      - View.cc
		- Library.cc
	There are 8 .h files consisting of:
		- Array.h            - List.h
		- Book.h             - NonFictionBook.cc
		- Control.h          - View.cc
		- FictionBook.h      - Library.h
	There is also:
		- Makefile
		- in.txt

Compilation Instructions:
	Open the terminal and locate the directory of the files using the 'cd' command.
	To compile the files, input:
	- make

Running/using the software:
	To run with input redirected, input:
	- ./T08 < in.txt
	To play with your own library, you can simply run the binary:
	- ./T08
		
	Make sure to widen the terminal window, so that the information can be displayed neatly.
	Once it is running, a menu will come up. Select one of the menu options by inputting its corresponding letter and 
	pressing ENTER.

This simulator applies the concepts of:
	  - compiling a program using a Makefile
	  - using redirection of standard I/O in Linux
	  - using inheritance and polymorphism in C++
	  - working more extensively with pointers by implementing a doubly linked list 
	  - designing a program using control, view, and entity objects 
	  - using a destructor to clean up dynamically allocated objects 
	  - using delegation to implement functionality in the appropriate objects 
