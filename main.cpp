/*****************************************************************************
   Taylor Hoss
   X432Z869
   Program #4

   This is a program that will take the input for a book title and author
   multiple times until the user wishes to end the program and then
   outputs the data collected to the screen.
   
*/

#include "Linked_list.cpp"

int main (void)
{
   string title = "";
   string author = "";

   // Create empty list
   Linked_list list;
    
   //prompt user for input
   do
   {
      while(title == "")
      {
         cout<<"Enter a book title or 'end' to quit: ";
         getline(cin, title);
      
      }

      if(title != "end")
      {
         while(author == "")
         {
            cout<<"Enter author: ";
            getline(cin, author);

         }

         list.insert_node(title, author);
         
         //reset variables
         title = "";
         author = "";
      }

   }while(title != "end");

   list.traverse(); 
    
}
