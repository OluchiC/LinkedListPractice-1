//
// Created by Luchi on 9/8/18.
//

#ifndef LINKEDLISTPRACTICE_LIST_H
#define LINKEDLISTPRACTICE_LIST_H

#endif //LINKEDLISTPRACTICE_LIST_H

typedef int ElementType; // setting the element type to an integer

// Creating a Struct
struct node
{
    ElementType data;//data
    node * next;//pointer
};

//Creating the List Class
class List
{
public:
    List(); //Construct
    bool Empty(); // Empty - returns true if its empty
    void InsertAtEnd(ElementType newValue); //Inserting a new value to the end of the linkedList
    void Delete(ElementType oldValue);  // if value x is in the list, then remove
    void Display(); //Display the date values in the list in the order inserted
    int Sum(); // Compute and return the sum of the values in the list
    int Average(); // Compute and return the average of the values in the list

private:
    node * first;

};


