# LinkedListPractice-1
Using the following definition (List.h file) for a list, implement the member functions (methods) for the List class and store the implementation in a List.cpp file.  Use a linked list to implement the list. Write the client code (the main method and other non-class methods) and put in file main.cpp. 
Note:  Use the main.cpp file from the Programming Assignment 1.

//file: List.h 

typedef int ElementType;

struct node{
	ElementType data;
	node * next;
};

class List
{
 public: 
   List(); 
   //Create an empty list
   bool Empty();
   // return true if the list is empty, otherwise return false
   void InsertAtEnd(ElementType x); //insert a value x on the end of the list
   void Delete(ElementType x); //if value x is in the list, remove x
   void Display(); //Display the data values in the list in the order inserted	
   int Sum(); // Compute and return the sum of the values in the list
   int Average(); // Compute and return the average of the values in the list

 private:
	node * first; //pointer to first node
};

Your client code should be menu driven using the following menu options:
1.	Insert
2.	Delete
3.	Display
4.	Sum
5.	Average
6.	Exit

Option 1: Insert a new value on the end of the list. 
Option 2: Delete a number specified by the user from the list, if the number is in the list.
Option 3: Displayed in the list of numbers.
Option 4: Compute and return the sum of the values in the list. If the list is empty return 0.
Option 5: Compute and return the average of the values in the list. If the list is empty return 0.
Option 6: Exits the program.
