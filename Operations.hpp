#pragma once
#include <forward_list>
#include <list>
#include <map>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "Book.hpp"









/***********************************************************************************************************************************
**  Insert operations
***********************************************************************************************************************************/
struct insert_at_back_of_vector
{
  // Function takes a constant Book as a parameter, inserts that book at the back of a vector, and returns nothing.
  void operator()( const Book & book )
  {
    ///////////////////////// TO-DO (1) //////////////////////////////
      /// Write the lines of code to insert "book" at the back of "my_vector"
    my_vector.push_back(book);
    /////////////////////// END-TO-DO (1) ////////////////////////////
  }

  std::vector<Book> & my_vector;
};



struct insert_at_back_of_dll
{
  // Function takes a constant Book as a parameter, inserts that book at the back of a doubly linked list, and returns nothing.
  void operator()( const Book & book )
  {
    ///////////////////////// TO-DO (2) //////////////////////////////
      /// Write the lines of code to insert "book" at the back of "my_dll"
    my_dll.push_back(book);
    /////////////////////// END-TO-DO (2) ////////////////////////////
  }

  std::list<Book> & my_dll;  // doubly linked list
};



struct insert_at_back_of_sll
{
  // Function takes a constant Book as a parameter, inserts that book at the back of a singly linked list, and returns nothing.
  void operator()( const Book & book )
  {
    ///////////////////////// TO-DO (3) //////////////////////////////
      /// Write the lines of code to insert "book" at the back of "my_sll". Since the SLL has no size() function and no tail
      /// pointer, you must walk the list looking for the last node. Hint:  Do not attempt to insert after "my_sll.end()"
    my_sll.insert_after(before_back, book);
    /////////////////////// END-TO-DO (3) ////////////////////////////
  }

  std::forward_list<Book> & my_sll;  // singly linked list
};



struct insert_at_front_of_vector
{
  // Function takes a constant Book as a parameter, inserts that book at the front of a vector, and returns nothing.
  void operator()( const Book & book )
  {
    ///////////////////////// TO-DO (4) //////////////////////////////
      /// Write the lines of code to insert "book" at the front of "my_vector"
    my_vector.insert(my_vector.begin(), book);
    ////// ///////////////// END-TO-DO (4) ////////////////////////////
  }

  std::vector<Book> & my_vector;
};



struct insert_at_front_of_dll
{
  // Function takes a constant Book as a parameter, inserts that book at the front of a doubly linked list, and returns nothing.
  void operator()( const Book & book )
  {
    ///////////////////////// TO-DO (5) //////////////////////////////
      /// Write the lines of code to insert "book" at the front of "my_dll"
    my_dll.push_front(book);
    /////////////////////// END-TO-DO (5) ////////////////////////////
  }

  std::list<Book> & my_dll;  // doubly linked list
};



struct insert_at_front_of_sll
{
  // Function takes a constant Book as a parameter, inserts that book at the front of a singly linked list, and returns nothing.
  void operator()( const Book & book )
  {
    ///////////////////////// TO-DO (6) //////////////////////////////
      /// Write the lines of code to insert "book" at the front of "my_sll"
    my_sll.push_front(book);
    /////////////////////// END-TO-DO (6) ////////////////////////////
  }

  std::forward_list<Book> & my_sll;  // doubly linked list
};



struct insert_into_bst
{
  // Function takes a constant Book as a parameter, inserts that book indexed by the book's ISBN into a binary search tree, and
  // returns nothing.
  void operator()( const Book & book )
  {
    ///////////////////////// TO-DO (7) //////////////////////////////
      /// Write the lines of code to insert the key (book's ISBN) and value ("book") pair into "my_bst".
    std::string ISBN = ""; // kindly insert the variable for book's ISBN from the "book.hpp" file. Since I do not have it, I cannot do it without the file.
        if(my_bst.find(ISBN) == my_bst.end()) {
            // case when the ISBN is not present in the BST.
            my_bst[ISBN] = book;
        }
        else {
            // case when the ISBN value is already present in the BST, so we don't have to rework it (add it again into it).
            return;
        }
    /////////////////////// END-TO-DO (7) ////////////////////////////
  }

  std::map<std::string, Book> & my_bst;    // binary search tree
};



struct insert_into_hash_table
{
  // Function takes a constant Book as a parameter, inserts that book indexed by the book's ISBN into a hash table, and returns
  // nothing.
  void operator()( const Book & book )
  {
    ///////////////////////// TO-DO (8) //////////////////////////////
      /// Write the lines of code to insert the key (book's ISBN) and value ("book") pair into "my_hash_table".
    std::string ISBN = ""; // kindly insert the variable for book's ISBN from the "book.hpp" file. Since I do not have it, I cannot do it without the file.
    if(my_hash_table.find(ISBN) == my_hash_table.end()) 
    {
      my_hash_table[ISBN] = book;
    }
    else 
    {
      return;
    }
    /////////////////////// END-TO-DO (8) ////////////////////////////
  }

  std::unordered_map<std::string, Book> & my_hash_table;
};









/***********************************************************************************************************************************
**  Remove operations
***********************************************************************************************************************************/
struct remove_from_back_of_vector
{
  // Function takes no parameters, removes the book at the back of a vector, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (9) //////////////////////////////
      /// Write the lines of code to remove the book at the back of "my_vector". Remember, attempting to remove an element from an
      /// empty data structure is a logic error.  Include code to avoid that.
    if(my_vector.empty()) 
    {
      throw std::out_of_range("vector is empty");
    }
    else
    {
      my_vector.pop_back();
    }
    /////////////////////// END-TO-DO (9) ////////////////////////////
  }

  std::vector<Book> & my_vector;
};



struct remove_from_back_of_dll
{
  // Function takes no parameters, removes the book at the back of a doubly linked list, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (10) //////////////////////////////
      /// Write the lines of code to remove the book at the back of "my_dll". Remember, attempting to remove an element from an
      /// empty data structure is a logic error.  Include code to avoid that.
    if (my_dll.empty()) 
    {
      throw std::out_of_range("list is empty");
    }
    else
    {
      my_dll.pop_back();
    }
    /////////////////////// END-TO-DO (10) ////////////////////////////
  }

  std::list<Book> & my_dll;  // doubly linked list
};



struct remove_from_back_of_sll
{
  // Function takes no parameters, removes the book at the back of a singly linked list, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (11) //////////////////////////////
      /// Write the lines of code to remove the book at the back of "my_sll". Remember, attempting to remove an element from an
      /// empty data structure is a logic error.  Include code to avoid that. Since the SLL has no size() function and no tail
      /// pointer, you must walk the list looking for the last node.
      ///
      /// Hint:  If "my_sll" is empty, simply return.  Otherwise
      ///        o) Define two iterators called predecessor and current.  Initialize predecessor to the node before the beginning,
      ///           and current to the node at the beginning
      ///        o) Advance current to the next node
      ///        o) Walk the list until current is equal to end() advancing both predecessor and current each time
      ///           through the loop
      ///        o) Once current is equal to end(), then remove the node after predecessor
    if (my_sll.empty()) 
    {
      throw std::out_of_range("list is empty");
    }
    else
    {
      my_sll.erase_after(my_sll.begin() + my_sll.size() - 1);
    }
    /////////////////////// END-TO-DO (11) ////////////////////////////
  }

  std::forward_list<Book> & my_sll;  // singly linked list
};



struct remove_from_front_of_vector
{
  // Function takes no parameters, removes the book at the front of a vector, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (12) //////////////////////////////
      /// Write the lines of code to remove the book at the front of "my_vector". Remember, attempting to remove an element from an
      /// empty data structure is a logic error.  Include code to avoid that.
    if (my_vector.empty()) 
    {
      throw std::out_of_range("vector is empty");
    }
    else
    {
      my_vector.erase(0);
    }
    /////////////////////// END-TO-DO (12) ////////////////////////////
  }

  std::vector<Book> & my_vector;
};



struct remove_from_front_of_dll
{
  // Function takes no parameters, removes the book at the front of a doubly linked list, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (13) //////////////////////////////
      /// Write the lines of code to remove the book at the front of "my_dll". Remember, attempting to remove an element from an
      /// empty data structure is a logic error.  Include code to avoid that.
    if (my_dll.empty()) 
    {
      throw std::out_of_range("list is empty");
    }
    else
    {
      my_dll.pop_front();
    }
    /////////////////////// END-TO-DO (13) ////////////////////////////
  }

  std::list<Book> & my_dll;
};



struct remove_from_front_of_sll
{
  // Function takes no parameters, removes the book at the front of a singly linked list, and returns nothing.
  void operator()( const auto & )
  {
    ///////////////////////// TO-DO (14) //////////////////////////////
      /// Write the lines of code to remove the book at the front of "my_sll". Remember, attempting to remove an element from an
      /// empty data structure is a logic error.  Include code to avoid that.
    if (my_sll.empty()) 
    {
      throw std::out_of_range("list is empty");
    }
    else
    {
      my_sll.pop_front();
    }
    /////////////////////// END-TO-DO (14) ////////////////////////////
  }

  std::forward_list<Book> & my_sll;
};



struct remove_from_bst
{
  // Function takes a constant Book as a parameter, finds and removes from the binary search tree the book with a matching ISBN, and
  // returns nothing.
  void operator()( const Book & book )
  {
    ///////////////////////// TO-DO (15) //////////////////////////////
      /// Write the lines of code to remove the book from "my_bst" that has an ISBN matching "book". Remember, attempting to remove
      /// an element from an empty data structure is a logic error.  Include code to avoid that.
    my_bst.erase("book");
    /////////////////////// END-TO-DO (15) ////////////////////////////
  }

  std::map<std::string, Book> & my_bst;    // binary search tree
};



struct remove_from_hash_table
{
  // Function takes a constant Book as a parameter, finds and removes from the hash table the book with a matching ISBN, and returns
  // nothing.
  void operator()( const Book & book )
  {
    ///////////////////////// TO-DO (16) //////////////////////////////
      /// Write the lines of code to remove the book from "my_hash_table" that has an ISBN matching "book". Remember, attempting to
      /// remove an element from an empty data structure is a logic error.  Include code to avoid that.
    my_hash_table.erase("book");
    /////////////////////// END-TO-DO (16) ////////////////////////////
  }

  std::unordered_map<std::string, Book> & my_hash_table;
};









/***********************************************************************************************************************************
**  Search operations
***********************************************************************************************************************************/
struct search_within_vector
{
  // Function takes no parameters, searches a vector for a book with an ISBN matching the target ISBN, and returns a pointer to that
  // found book if such a book is found, nullptr otherwise.
  Book * operator()( const auto & )
  {
    ///////////////////////// TO-DO (17) //////////////////////////////
      /// Write the lines of code to search for the Book within "my_vector" with an ISBN matching "target_isbn".  Return a pointer
      /// to that book immediately upon finding it, or a null pointer when you know the book is not in the container.
    for (Book& b: my_vector)
    {
      if (target_isbn == b.isbn)
      {
        return b;
      }
    }
    return NULL;
    /////////////////////// END-TO-DO (17) ////////////////////////////
  }

  std::vector<Book> & my_vector;
  const std::string   target_isbn;
};



struct search_within_dll
{
  // Function takes no parameters, searches a doubly linked list for a book with an ISBN matching the target ISBN, and returns a
  // pointer to that found book if such a book is found, nullptr otherwise.
  Book * operator()( const auto & )
  {
    ///////////////////////// TO-DO (18) //////////////////////////////
      /// Write the lines of code to search for the Book within "my_dll" with an ISBN matching "target_isbn".  Return a pointer to
      /// that book immediately upon finding it, or a null pointer when you know the book is not in the container.
    for (Book &b: my_dll)
    {
      if (target_isbn == b.isbn)
      {
        return b;
      }
    }
    return NULL;
    /////////////////////// END-TO-DO (18) ////////////////////////////
  }

  std::list<Book>   & my_dll;
  const std::string   target_isbn;
};



struct search_within_sll
{
  // Function takes no parameters, searches a singly linked list for a book with an ISBN matching the target ISBN, and returns a
  // pointer to that found book if such a book is found, nullptr otherwise.
  Book * operator()( const auto & )
  {
    ///////////////////////// TO-DO (19) //////////////////////////////
      /// Write the lines of code to search for the Book within "my_sll" with an ISBN matching "target_isbn".  Return a pointer to
      /// that book immediately upon finding it, or a null pointer when you know the book is not in the container.

    /////////////////////// END-TO-DO (19) ////////////////////////////
  }

  std::forward_list<Book> & my_sll;
  const std::string         target_isbn;
};



struct search_within_bst
{
  // Function takes no parameters, searches a binary search tree for a book with an ISBN matching the target ISBN, and returns a
  // pointer to that found book if such a book is found, nullptr otherwise.
  Book * operator()( const auto & )
  {
    ///////////////////////// TO-DO (20) //////////////////////////////
      /// Write the lines of code to search for the Book within "my_bst" with an ISBN matching "target_isbn".  Return a pointer to
      /// that book immediately upon finding it, or a null pointer when you know the book is not in the container.
      /// Note: do not implement a linear search, i.e., do not loop from beginning to end.
    if (my_hash_table.find(target_isbn) != my_hash_table.end())
    {
      return &my_hash_table[target_isbn];
    }
    return NULL;
    /////////////////////// END-TO-DO (20) ////////////////////////////
  }

  std::map<std::string, Book> & my_bst;
  const std::string             target_isbn;
};



struct search_within_hash_table
{
  // Function takes no parameters, searches a hash table for a book with an ISBN matching the target ISBN, and returns a pointer to
  // that found book if such a book is found, nullptr otherwise.
  Book * operator()( const auto & )
  {
    ///////////////////////// TO-DO (21) //////////////////////////////
      /// Write the lines of code to search for the Book within "my_hash_table" with an ISBN matching "target_isbn".  Return a
      /// pointer to that book immediately upon finding it, or a null pointer when you know the book is not in the container.
      /// Note: do not implement a linear search, i.e., do not loop from beginning to end.
    /*auto it = my_hash_table.find(target_isbn);
        if(it == my_hash_table.end())
        {
          return nullptr;
        }
        else
        {
          return &(it->second);
        }*/
    if (my_hash_table.find(target_isbn) != my_hash_table.end())
    {
      return &my_hash_table[target_isbn];  
    }
    return NULL;    
    /////////////////////// END-TO-DO (21) ////////////////////////////
  }

  std::unordered_map<std::string, Book> & my_hash_table;
  const std::string                       target_isbn;
};
