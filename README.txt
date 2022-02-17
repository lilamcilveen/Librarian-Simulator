#LibrarySimulator
# A project for Introduction to Software Engineering. - Fall 2018

Purpose: 
	The purpose of this software is to create and manage a library consisting of fiction and non-fiction books.
	Books types will be sorted and displayed in ascending and descending orders using a doubly linked list.
	Many software engineering design priniciples are implemented -- introduced in a second year course at Carleton 
	University.
	
	Automated input to generate a test library is provided. [in.txt]
	 
Developer & Development Date: Iqra Lila McIlveen - November 15, 2018

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

Compilation instructions:
	Open your terminal and change to the LibrarySimulation directory using the 'cd' command.
	Input:
		make

Running/using the software:

	To automatically generate the test lbrary, redirect the in.txt inputs into the binary executable:
		./T08 < in.txt
	
	To create your own library, run the binary executable:
		./T08
		
	*Make sure to widen the terminal window, so information is displayed neatly.*
	When the software is running, menu options will appear. Manage your library by inputting corresponding letters and 
	pressing ENTER.


This project applies the concepts of:
	  - implementing inheritance and polymorphism in C++
	  - designing control, view, and entity objects (Model–view–controller)
	  - working in-depth with pointers by implementing a doubly linked list as a collection class (Entity-Relationship)
	  - delegation to achieve code reuse across appropriate objects (Delegation pattern)
	  - destructors to release dynamically allocated objects from heap memory
	  - Makefiles
	  - Linux I/O redirection
