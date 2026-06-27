# The Bus Seating Problem 🚌

## Description
A custom algorithmic problem based on a real-world observation of a family on a bus. 

We have an empty bus with paired seats, `n` adults (parents), and `m` children. We need to determine if everyone can be seated safely based on specific rules.

### Constraints
* Both `n` and `m` are greater than 1 (at least 2 adults and 2 children).
* The children always outnumber the adults (`m > n`).

### Seating Rules
1. Two children can sit together safely.
2. No two adults can sit together.
3. A child CANNOT sit alone. They must sit with another child or an adult.
4. Adults can sit with children.

## Input Format
Two space-separated integers `n` (adults) and `m` (children).

## Output Format
Print `YES` if it is possible to seat everyone safely, otherwise print `NO`.

## Example
**Input:**
`3 7`

**Output:**
`YES`

*(Explanation: 3 children sit with the 3 adults. The 4 remaining children form 2 safe pairs.)*