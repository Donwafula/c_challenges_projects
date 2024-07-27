Project Description: Library Management System
Overview
The Library Management System project involves creating a console-based application to manage a library's collection of books. The system will allow users to add new books, view the list of books, search for books by title, and delete books from the library. This project will utilize basic programming concepts such as variables, functions, conditional statements, loops, and nested loops.

Features
Add Book: Users can add new books to the library by entering the book's title, author, and year of publication.
View Books: Users can view a list of all books currently in the library.
Search Book by Title: Users can search for books by entering a part or full title. The system will display all matching books.
Delete Book by Title: Users can delete a book from the library by entering the title. The system will remove the first matching book found.
Exit: Users can exit the application.
User Interface
The system will present a text-based menu to the user with the following options:

Add Book
View Books
Search Book by Title
Delete Book by Title
Exit
Users will select an option by entering the corresponding number.

Data Structures
Book Structure: A structure to store book details including title, author, and year of publication.
Library Array: An array of Book structures to store the library's collection.
Detailed Description of Features
Add Book
Prompt the user to enter the book's title, author, and year of publication.
Store the book details in the library array.
Increment the count of books in the library.
View Books
Display a list of all books in the library.
For each book, display the title, author, and year of publication.
Search Book by Title
Prompt the user to enter a title or part of a title to search for.
Search through the library array to find all books with titles containing the search string.
Display the details of all matching books.
Delete Book by Title
Prompt the user to enter the title of the book to delete.
Search through the library array to find the first book with the matching title.
Remove the book from the library by shifting the subsequent books up in the array.
Decrement the count of books in the library.
Exit
Exit the application.
Steps for Implementation
Define Data Structures

Define a Book structure with fields for title, author, and year.
Define an array of Book structures to store the library.
Implement Menu Interface

Display the menu options to the user.
Read the user's choice and call the corresponding function.
Implement Add Book Feature

Prompt for book details.
Store the book in the library array.
Update the count of books.
Implement View Books Feature

Loop through the library array.
Display the details of each book.
Implement Search Book Feature

Prompt for a search string.
Loop through the library array.
Check if each book's title contains the search string.
Display matching books.
Implement Delete Book Feature

Prompt for the title of the book to delete.
Loop through the library array to find the book.
Shift subsequent books up in the array.
Update the count of books.
Implement Exit Feature

Exit the application.
Flowchart
Create a flowchart to visualize the steps and the flow of the program. The flowchart should include the following elements:

Start: Begin the program.
Display Menu: Show the menu options.
Get User Choice: Read the user's choice.
Conditional Branches:
If the user chooses to add a book, go to the "Add Book" process.
If the user chooses to view books, go to the "View Books" process.
If the user chooses to search for a book, go to the "Search Book" process.
If the user chooses to delete a book, go to the "Delete Book" process.
If the user chooses to exit, go to the "Exit" process.
Add Book Process:
Prompt for and read book details.
Store the book in the library array.
Update the count of books.
Return to the menu.
View Books Process:
Loop through the library array.
Display book details.
Return to the menu.
Search Book Process:
Prompt for and read the search string.
Loop through the library array.
Check if each book's title contains the search string.
Display matching books.
Return to the menu.
Delete Book Process:
Prompt for and read the title of the book to delete.
Loop through the library array to find the book.
Shift subsequent books up in the array.
Update the count of books.
Return to the menu.
Exit Process: End the program.
Feel free to come up with the steps and flowchart based on this detailed description, and I'll be happy to provide
