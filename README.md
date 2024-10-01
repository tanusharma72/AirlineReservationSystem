# AirlineReservationSystem


This project is a flight booking system written in C++. It allows customers to register, select flights, and generate a ticket. Here's a detailed explanation of the project:

Classes and Their Purpose

Management:

Contains a constructor that automatically calls the mainMenu() function to initiate the system's main menu when an object of Management is created.

Details:

Stores customer details, such as customer ID, name, age, gender, address, etc.
Provides the information() method to take and save customer information.

registration:

Contains the flights() function to display available flight options and allows the customer to book a flight.
The customer can choose among different destinations like Dubai, Canada, UK, India, USA, Australia, and Europe.
Each destination has multiple flight options with different dates, times, and prices.
The charges static variable stores the cost of the booked flight, and choice stores the selected destination.

ticket:

Inherits from both registration and Details classes.
Contains the Bill() function that writes ticket details to a file named records.txt.
The dispBill() function reads and displays the ticket details from the file.
mainMenu() Function
The mainMenu() function provides the main menu options for the flight booking system. The user can:

Add Customer Details:

Calls the information() function from the Details class to input customer details.

Flight Registration:

Calls the flights() function from the registration class to book a flight.

Get Ticket and Charges:

Calls the Bill() function from the ticket class to generate and save the ticket details to a file.
Calls the dispBill() function to display the ticket.

Exit:

Ends the program.
Flow of the Program
When the program runs, an object of the Management class is created, and the mainMenu() function is called.
The user can choose to add their details, book a flight, or view their ticket.
When a flight is booked, the charges and selected destination are saved.
The ticket is generated with the details, including customer information and flight cost, and saved to a file (records.txt).
The user can then display the ticket details.

Key Concepts Used

Classes and Objects:

The project uses multiple classes (Management, Details, registration, ticket) to organize different parts of the booking system.

File Handling: 

Ticket information is written to and read from a text file (records.txt) using ofstream and ifstream.

Inheritance: 

The ticket class inherits from both registration and Details classes to access their functionality.

Static Variables:

Static variables like charges, choice, c_id, name, and gender are used to share data across all instances of a class.

Improvements

Code Repetition:

The flights() function has repeated blocks of code for different destinations. This could be optimized by creating a more generalized function to handle flight booking.

Input Validation: 

Input validation could be improved, especially for cases like cin >> back; where it expects specific values to return to the main menu.
Dynamic Memory Allocation: Currently, the program uses fixed-size arrays and static variables, which could be replaced with dynamic memory allocation or containers like std::vector for better flexibility.
This project provides a good example of object-oriented programming in C++, covering the use of classes, inheritance, file handling, and user interaction via menus.
