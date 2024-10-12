# Array-Puzzle

100 Lockers Problem
Problem Description
A school has 100 lockers and 100 students. Initially, all lockers are closed. The students, numbered from stu1 to stu100, walk through the hallway one after the other, altering the state of the lockers.

stu1 opens every locker.
stu2 begins with locker 2 and toggles (opens if closed, closes if open) every second locker.
stu3 starts with locker 3 and toggles every third locker.
This pattern continues until stu100, who toggles only locker 100.
After all 100 students have walked through and changed the lockers, we need to determine which lockers are open.

Objective
The program must find and display which lockers are open after all students have completed their process. It will print the locker numbers of those that are open, displaying 5 open lockers per line for clarity.

Hint:
Use an array of 100 Boolean elements, where true indicates the locker is open and false indicates it is closed. Initially, all lockers are closed (false).

Example Output
The program will output the locker numbers that remain open, formatted to print 5 numbers per line.

How to Run
Implement the logic using C++ (or any preferred language).
The array should represent the lockers, and nested loops will simulate each student's behavior as they toggle the lockers.
