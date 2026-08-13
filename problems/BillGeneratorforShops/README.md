# Create a Bill Generator for a Shop 🏪

## Description
The Bill Generator Should be in a Class where the Owner start:
1. Create Bill
2. Exit Bill Generator

After the Create Bill Execute there are four options
1. Add Item by (name, price, quantity, datetime)
2. Delete Item by product number
3. Total Bill
### Constraints
* Quantity is always a positive Integer.
* Price can be decimal

## Input Format
The Bill Generator Start with Constructor.

## Output Format
last Output should be `Total Amount`

## Example
====Bill Generator====
1. Create Bill Generator
2. Exit Bill Generator
   Enter your choice:
   1

   ==== Add Item====
1. Add Item
2. Delete Item
3. Total Bill
4. Exit

   Enter your choice: 1
   Enter name: Green-Chili
   Enter price: 15
   Enter quantity: 1

#0 Green-Chili 15.00 1.00 Thu Aug 13 12:44:01 2026

==== Add Item====
1. Add Item
2. Delete Item
3. Total Bill
4. Exit

   Enter your choice: 1
   Enter name: Onion
   Enter price: 60
   Enter quantity: 0.5

#0 Green-Chili 15.00 1.00 Thu Aug 13 12:44:01 2026
#1 Onion 60.00 0.50 Thu Aug 13 12:44:18 2026

==== Add Item====
1. Add Item
2. Delete Item
3. Total Bill
4. Exit
   Enter your choice:
   3

   #0 Green-Chili 15.00 1.00 Thu Aug 13 12:44:01 2026
   #1 Onion 60.00 0.50 Thu Aug 13 12:44:18 2026

==== Total Bill ====

   Total: 45

   ====Bill Generator====
1. Create Bill Generator
2. Exit Bill Generator
   
Enter your choice: 2
   
Goodbye
