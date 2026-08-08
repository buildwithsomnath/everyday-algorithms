# The Parking Management 🚗🅿️

## Description

You are managing a parking lot that has a limited number of parking spaces.

Cars arrive one by one. If a parking space is available, the car can enter the parking lot immediately. If all parking spaces are occupied, the car must wait in a **waiting queue**.

When a parked car exits the parking lot, the first car from the waiting queue should automatically enter the parking lot.

Your task is to implement a **Parking Management System using queues** that supports the following operations:

1. **Car Entry** – Add a new car to the parking lot if space is available. Otherwise, add it to the waiting queue.
2. **Car Exit** – Remove the first parked car. If there are cars waiting, move the first waiting car into the parking lot.
3. **Display Queues** – Display all currently parked cars and all cars waiting.
4. **Exit** – Terminate the parking management system.

Each car is automatically assigned a unique car number in the order in which it arrives.

## Constraints

- The number of parking spaces is a positive integer.
- At most one car can occupy one parking space.
- Cars enter the waiting queue in the order they arrive.
- Cars leave the parking lot in the order they entered.
- The waiting queue follows the **FIFO (First-In, First-Out)** principle.
- Car numbers start from `1`.
- The parking lot and waiting queue can contain any number of cars within the available system memory.
- If there are no parked cars when a car exit operation is performed, display:
  `No cars available!`

## Rules

- If `current parked cars < parking spaces`, the arriving car is parked immediately.
- If the parking lot is full, the arriving car is placed in the waiting queue.
- When a car exits:
  - The first parked car leaves.
  - If a waiting car exists, the first waiting car enters the parking lot.
- The first waiting car must always be given priority when a parking space becomes available.
- Both the parked-car list and waiting-car list must follow the **queue** data structure.
- Car numbers are generated automatically and sequentially.

## Input Format

The program first asks the user to enter the total number of available parking spaces.

After that, the user repeatedly selects one of the following operations:

```text
1. Car Entry
2. Car Exit
3. Car Waiting Queue
4. Exit