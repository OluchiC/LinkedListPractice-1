//
// Created by Luchi on 9/10/18.
//
#include "List.h"
#include <iostream>

using namespace std;



// format return type SPACE name of class :: name of Method
    node *head = new node;
    node *current = new node;
    //node *tail;

// Constructs a linked list
List :: List()
{
    // pointing to null
    head = NULL ;
    //tail = NULL ;
}
// returns true if the linkedList is empty
bool List :: Empty()
{
    return head == NULL;
}

// Inserting a new Value to the end of the linkedList
void List :: InsertAtEnd ( ElementType newValue)
{
    node *previous = new node;
    current = head;
    previous = current ;
    // if you want to add to the head
    if(current == NULL)
    {
        //create new node with the data value of the given parameter
        node *newnode = new node;
        newnode->data = newValue;

        previous->next = newnode;
        newnode->next = NULL;
        current = newnode;
    }
    //if you want to add to an already established linkedList
    while( current != NULL )
    {
        previous = current;
        current = current->next;

        if(current == NULL)
        {
            //create new node with the data value of the given parameter
            node *newnode = new node;
            newnode->data = newValue;

            previous->next = newnode;
            newnode->next = NULL;
            current = newnode;
        }
    }
}

// if value x is in the list, then remove
void List :: Delete(ElementType oldValue)
{
    node * previous = new node;
    current = head ;
    previous = current;
    // if the first is the value of what we want to delete
    if(current-> data == oldValue)
    {
        previous = current;
        current = current -> next;
        delete previous;
    }

    // to delete if the value isnt the first one
    while(current->next != NULL)
    {
        previous = current;
        current = current->next;
        if(current->data == oldValue)
        {
            // takes the previous pointer and points to the next node after the deleted value
            previous-> next = current->next;
        }
    }

}

// Display the date Values in the list in the Ordered Inserted
void List :: Display()
{
    current = head;
    while( current != NULL)
    {
        cout<<current->data<<"\t";
        current = current->next ;
    }

}

// Computer and return the values in the list
int List :: Sum()
{
    int sum = 0;
    current = head;
    while( current != NULL)
    {
        sum += current->data ;
        current = current->next ;
    }
    return sum ;

}

// Compute and return the average of the values in the list
int List :: Average()
{
    int sum = 0;
    int counter = 0 ;
    current = head;
    while( current != NULL)
    {
        sum += current->data ;
        counter++;
        current = current->next ;
    }
    return sum/counter ;

}