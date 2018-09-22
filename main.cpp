#include <iostream>
#include "List.h"

using namespace std;

int main() {

   // std::cout << "Hello, World!" << std::endl;

    List LList ;

//    //Testers
//   // cout << LList.Empty();

//    LList.InsertAtEnd(1);
//    LList.InsertAtEnd(2);
//    LList.InsertAtEnd(3);
//    LList.InsertAtEnd(4);
//    LList.InsertAtEnd(5);
//    cout<< LList.Empty() <<endl;
//    cout<< LList.Sum()<<endl;
//    LList.Display();
//    cout<< LList.Average() << endl;
//    LList.Delete(2);
//    LList.Display();
//

    bool quit = false;
    int answer;
    int one, two,three, four, five, deleteNum;

        cout
             << "Pick a number:" << endl
             << "1. Add the Numbers and see Sum" << endl
             << "2. Add the Numbers and see Average" << endl
             << "3. delete from list" << endl
             << "4. print list" << endl
             << "5. Check if List is Empty" << endl
             << "6. quit Program" << endl;
        cin >> answer;

        switch(answer){
            case 1:
                cout<< "Enter 5 numbers to fill the linked list:" << endl ;
                cin>>one;
                cin>>two;
                cin>>three;
                cin>>four;
                cin>>five;
                LList.InsertAtEnd(one);
                LList.InsertAtEnd(two);
                LList.InsertAtEnd(three);
                LList.InsertAtEnd(four);
                LList.InsertAtEnd(five);
                //Add the Numbers and see Sum
                cout<< LList.Sum() << endl;
               // quit = true;
                break;
            case 2:
                cout<< "Enter 5 numbers to fill the linked list:" << endl ;
                cin>>one;
                cin>>two;
                cin>>three;
                cin>>four;
                cin>>five ;
                LList.InsertAtEnd(one);
                LList.InsertAtEnd(two);
                LList.InsertAtEnd(three);
                LList.InsertAtEnd(four);
                LList.InsertAtEnd(five);
                //Add the Numbers and see Sum3
                cout<< LList.Average()<< endl;
                break;
            case 3:
                //if the llist is empty
                if(LList.Empty()){
                    cout<<"Nothing is here: Insert into linkedList"<< endl;
                }else {
                    //delete from list
                    LList.Display();
                    cout << "Enter number you want to delete:";
                    cin >> deleteNum;
                    LList.Delete(deleteNum);
                }
                break;
            case 4:
                //print list
                cout<< "Enter 5 numbers to the linked list and then they will be displayed:" << endl ;
                cin>>one;
                cin>>two;
                cin>>three;
                cin>>four;
                cin>>five ;
                LList.InsertAtEnd(one);
                LList.InsertAtEnd(two);
                LList.InsertAtEnd(three);
                LList.InsertAtEnd(four);
                LList.InsertAtEnd(five);
                LList.Display();
                break;
            case 5:
                //Check if List is Empty"
                //QUESTION: short hand - can do this  ( LL.empty ) is the default condition true
                if(LList.Empty() == true)
                {
                  cout<< "Nothing in the Linked List"<<endl;
                }else {
                    cout << "LinkedList isnt Empty! "<<endl;
                }
                break;
            case 6: quit = true;
                break;
            default:
                cout << "That is not a valid input, quitting program";
                quit = true;
        }

    return 0;
}