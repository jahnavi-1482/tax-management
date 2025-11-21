* Abstract

This project is a simple Tax Management System developed in the C programming language. It allows users to enter taxpayer details, compute tax based on predefined income slabs, and display all stored records. The tax calculation follows a progressive slab system and stores each taxpayer's income, calculated tax, and net income. The program uses structures and arrays to manage multiple records and provides an interactive, menu-driven interface.

* Features of the Program

Menu-driven interface for easy navigation.

Ability to add multiple taxpayer records (up to 100).

Automatic tax calculation based on income slabs.

Displays all saved taxpayer records.

Uses structures (struct) for organized data storage.

Supports continuous execution until the user chooses to exit.

*Technical Requirements
1. System Requirements

Any computer capable of running a C compiler
(Windows, Linux, macOS)

Minimum 256 MB RAM

5 MB disk space (negligible storage requirement)

2. Software Requirements

A C compiler such as:

GCC (GNU Compiler Collection)

Clang

MinGW (for Windows)

Turbo C/C++ (legacy)

A text editor or IDE:

VS Code

Code::Blocks

Dev-C++

Sublime Text

Notepad++

3. Programming Requirements

Knowledge of:

C variables and data types

Functions

Structures

Arrays

Loops and conditional statements

Standard input/output (stdio.h)

4. File Handling Requirements

No file handling is used in this program.
All data is stored in memory (RAM) during runtime.

5. Compilation Requirements

Standard C compiler capable of compiling C99 or above.

Command to compile (example):

gcc tax_management.c -o tax

* Functional Requirements
1. User Interface Requirements

Must display a menu with the following options:

Add Taxpayer

Display Records

Exit

Accepts user input through keyboard.

Shows clear prompts and success messages.

2. Taxpayer Record Operations

Add Taxpayer

Accept taxpayer name

Accept annual income

Calculate tax using calculateTax() function

Compute net income

Store record into an array

Display Records

Print all saved taxpayer information:

Name

Income

Tax

Net Income

Exit Program

Terminates program execution safely

3. Data Management Requirements

Maximum records: 100

Structure used:

typedef struct {
    char name[50];
    double income;
    double tax;
    double netIncome;
} TaxPayer;


Data stored temporarily in records[] array

Data lost when program closes (no file saving)

* How to Run the Program
1. Compile the Program

If using GCC:

gcc tax_management.c -o tax


If using Windows with MinGW:

gcc tax_management.c -o tax.exe


If using Linux:

gcc tax_management.c -o tax

2. Run the Executable

Windows:

tax.exe


Linux/macOS:

./tax

3. Data File

No external data file is required.

All records exist only during the program session.

<img width="135" height="48" alt="Screenshot 2025-11-21 053410" src="https://github.com/user-attachments/assets/8e33867d-65cb-4ccd-b52c-81ffc65f5840" />




<img width="126" height="172" alt="Screenshot 2025-11-21 053058" src="https://github.com/user-attachments/assets/84561042-8f63-43aa-9b6f-a1dac1a67f97" />
