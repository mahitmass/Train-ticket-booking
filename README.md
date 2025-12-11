# Train-ticket-booking
College project

🚆 SMST Railway Management System

A C-based Railway Reservation System developed as a first-semester engineering project. This application allows users to book tickets, manage reservations, and view train schedules with an interactive CLI interface.

👥 Team Members (SMST)

Swayam - Booking Logic & System Core

Mahit - UI/UX, Animations & Constants

Sheetal - Passenger Database & Input Handling

Tanvi - Payment Gateway Integration

✨ Features

Animated Welcome Banner: Custom ASCII art animation on startup.

Ticket Booking: Support for Rajdhani, Jodhpur, and Swatantrata Express.

Passenger Management: Capture details like Name, Age, Gender, and Food preferences.

File Handling: Automatically saves and loads ticket data (railway_db.dat) so bookings are not lost when the program closes.

Modification System: Modify passenger details or cancel tickets using a Recursive Search Algorithm.

Payment Simulation: Integrated mock payment gateway supporting UPI, Card, and Cash.

🛠️ Technical Concepts Used

File I/O: fopen, fwrite, fread for data persistence.

Structures: struct Ticket to manage complex data.

Pointers: Passing structure pointers to functions for memory efficiency.

Recursion: Used for searching ticket IDs in the database.

Pattern Printing: Logic for the large text banner.

🚀 How to Run

Ensure you have a C compiler (GCC) installed.

Compile the code:

gcc main.c -o railway_app


Run the application:

./railway_app

<img width="475" height="588" alt="image" src="https://github.com/user-attachments/assets/785f54ed-38e6-4ff4-bbd4-82c3ae5c4363" />
