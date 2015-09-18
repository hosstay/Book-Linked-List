/*****************************************************************************
   Taylor Hoss
   X432Z869
   Program #4
   
*/

#include "linked_list.hpp"

// Constructor to initialize the linked list.
Linked_list::Linked_list()
{
   head = tail = NULL;

}

// Insert a node in the list.
bool Linked_list::insert_node(string t, string a)
{
   // Create a node.
   Node *node_ptr = new Node(t, a);

   // If there are no entries in the linked list add it to the head.
   if (head == NULL)
   {
      tail = head = node_ptr;
   }
   else
   {
      //otherwise just add it to the end of the list.
      tail->set_link(node_ptr);
      tail = node_ptr;
   }
   
   return true;
}

// Go through the entire list. Call the node method to show the data.
void Linked_list::traverse()
{
   Node *temp;
   temp = head;
   while (temp != NULL)
   {
      temp->show_data();
      temp = temp->get_link();
   }     
}
