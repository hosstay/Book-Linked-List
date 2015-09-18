/*****************************************************************************
   Taylor Hoss
   X432Z869
   Program #4
         
*/

#include "node.hpp"

// Default constructor
Node::Node()
{
   title = "";
   author = "";
   link = NULL;

}

// Initialize the Node with given input
Node::Node (string t, string a)
{
   title = t;
   author = a;
   link = NULL;
          
}

// Displays data held within node and outputs to file
void Node::show_data(void)
{
   cout << "\n Title: " << title;
   cout << "\n Author: " << author << endl;

}
