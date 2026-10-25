# Inheritancde Assignment 
By Christine Hannah Adong, 25/U/30662

## Process taken
* I had to understand what inheritance meant in classes and how it is done.
* I started with creating the parent class and made it's member functions protected instead of private such that child classes can use them.
* I made a constructor to ensure initialization and a virtual destructor because according to the PPP by Bjarne, it is necessary for the base class to have a virtual destructor to prevent memory leakes and undefined behavoir. Also to delete child classes when accessed by a pointer in main.
* I made a print function for the base class public such that other child classes can access and update it accordingy.
* I made the first child class that is able to access public & protected data from the base class.
* The constructor in the customer class (first child), used the same string n & e in base class such that for the initializer list, I can use User( n, e) to simplify my work and avoid errors.
* For the print function in the customer class, I called the print function in the base class and modified it to print the additional details. This wway, the grand child class (VIP), can access it and print more than the parent class and modify it as well.
* The discount in VIP could have been protected as well but since I had no intention of making about derived class, I made it private to protect the data and ensure only that last class can access it.

## Picture of inheritance from code

![alt text](<inheritance assignment.jpg>)

## Goal of Assignment
* I believe the assignment goal was to undertsand the construct of inheritance in class and how derived classes can access information from those before it. I believe the goal was achieved. 
