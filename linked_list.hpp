/*****************************************************************************
   Taylor Hoss
   X432Z869
   Program #4

   This program implements a linked list class in which a users input
   is made into a node which is inserted at the end of the list. When
   the user is done it goes through the nodes and outputs their data.

   Psuedo Code
      Class Name: Linked_list
      Data:
         head
         tail
      Mutator Functions:
         Linked_list
         insert_node
      Accessor Functions:
         traverse

*/

#include "node.cpp"

// Linked list class
class Linked_list
{
   Node *head, *tail;
 public:
   Linked_list();
   bool insert_node(string t, string a); 
   void traverse();   
};
