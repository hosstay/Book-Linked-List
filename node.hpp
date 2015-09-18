/*****************************************************************************
   Taylor Hoss
   X432Z869
   Program #4

   This is a program implements a linked list for which a Node class is
   required to hold the data.
   
   Psudo Code
      Class Name: Node
      Data:
         title
         author
         link
      Mutator Functions:
         Node
         Node (input, input)
         set_link
      Accessor Functions:
         get_link
         show_data
         
*/

#include <iostream>
#include <string>
using namespace std;

// Node class that holds a title and an author.
class Node
{
   string title;
   string author;
   Node *link;

 public:
   Node ();
   Node (string t, string a);
   void set_link(Node *ptr)
   {
      link = ptr;
   }
   Node *get_link()
   {
      return link;
   }
   void show_data(void);
};
