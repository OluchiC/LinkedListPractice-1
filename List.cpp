//
// Created by Luchi on 9/10/18.
//
#include "List.h"
#include <iostream>

using namespace std;



// format return type SPACE name of class :: name of Method
    node *head; //headptr
    node *current = new node;
    //node *tail;

// Constructs a linked list
List :: List()
{
   // cout<< "enters the constructor method"<< endl;
    // pointing to null
    head = NULL ;
    //tail = NULL ;
}
// returns true if the linkedList is empty
bool List :: Empty()
{
    //cout<< "enters the empty method" << endl;
    return head == NULL;
}

// Inserting a new Value to the end of the linkedList
void List :: InsertAtEnd ( ElementType newValue)
{
    //cout<< "enters the insert method"<< endl;

    node *previous = new node;
    current = head;
    //previous = current ;
    // if you want to add to the head
    if(head == NULL)
    {
        node *newNode = new node;
        newNode-> data = newValue;
        newNode-> next = NULL;
        head = newNode;
    } else {
        //if you want to add to an already established linkedList
        while (current != NULL) {
            previous = current;
            current = current->next;
        }
        if (current == NULL) {
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

    cout<< "enters the delete method"<< endl;
    node * previous = new node;
    current = head ;
    //previous = current;
    // if the first is the value of what we want to delete
    if(current-> data == oldValue)
    {
        previous = current;
        current = current -> next;
        delete previous;
        cout<<"in If Statement"<<endl;
    }else {
//        // to delete if the value isnt the first one
//        while (current->next != NULL || current->data != oldValue) {
//            previous = current;
//            current = current->next;
//            cout << "in while Loop" << endl;
//            if (current->data == oldValue) {
//                cout << "Found the node" << endl;
//                // takes the previous pointer and points to the next node after the deleted value
//                previous->next = current->next;
//                delete current;
//            }

        do {
            previous = current;
            current = current->next;
        } while (current->data != oldValue);

        if (current->data == oldValue) {
            cout << "Found the node" << endl;
            // takes the previous pointer and points to the next node after the deleted value
            previous->next = current->next;
            delete current;
        }
    }

}

// Display the date Values in the list in the Ordered Inserted
void List :: Display()
{
   // cout<< "enters the display method"<< endl;

    current = head;
    while( current != NULL)
    {
        cout<<current->data<<"\t";
        current = current->next ;
    }
    cout<<endl;

}

// Computer and return the values in the list
int List :: Sum()
{
    //cout<< "enters the sum method"<< endl;
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
double List :: Average()
{
    //cout<< "enters the average method"<< endl;
    int sum = 0;
    double avg;
    int counter = 0 ;
    current = head;
    while( current != NULL)
    {
        sum += current->data ;
        counter++;
        current = current->next ;
    }
    avg = sum/counter ;
    return avg;

}