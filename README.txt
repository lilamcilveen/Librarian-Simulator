# LibrarySimulator
# A project for Introduction to Software Engineering. - Fall 2018 [2404] 

Purpose: 
	The purpose of this software is to create a library consisting of fiction and non-fiction books.
	Once the library is complete, the books types will be sorted and displayed in ascending and descending orders using
	a doubly linked list.
	This program makes use of many software engineering concepts introduced in COMP2404 at Carleton University.
	
	I provided a premade libray for you in the 'in.txt' file [testing purposes].
	 
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
		
	*Make sure to widen the terminal window, so that the information can be displayed neatly.*
	Once it is running, a menu will come up. Select one of the menu options by inputting its corresponding letter and 
	pressing ENTER.

This simulator applies the concepts of:
	  - compiling a program using a Makefile
	  - using Linux standard I/O redirection
	  - using inheritance and polymorphism in C++
	  - working more extensively with pointers by implementing a doubly linked list as a collection class
	  - designing a program using control, view, and entity objects 
	  - using a destructor to clean up dynamically allocated objects 
	  - using delegation to implement functionality in the appropriate objects 
