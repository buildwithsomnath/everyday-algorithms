# The Checkout Queue Problem 🛄

## Description
A mall is running a special promotional offer. There is a queue of $n$ customers waiting outside to enter. Due to safety regulations, the mall has a strict capacity limit and can only accommodate a maximum of $k$ people inside at any given time.

To handle the crowd, the mall has opened $m$ parallel checkout counters. The security team manages the crowd by letting customers in batches. Because of the layout of the exit, a new batch of customers can only enter the mall once the entire previous batch has finished their purchases and left.

### Constraints
$1 \le n \le 10^{9}$ <br>
$1 \le k \le 5000$ <br>
$1 \le m \le 100$ <br>

### Rules
1. Batch Processing: Customers enter the mall in batches of $k$ people. (The final batch will contain $n \bmod k$ people if $n$ is not a multiple of $k$).

2. Conversion Rate: Every customer who enters the mall has exactly a 50% ($1/2$) probability of buying an item.

3. Optimal Queueing: Customers who decide to buy will instantly and optimally distribute themselves across the $m$ checkout counters to minimize the time their batch spends in the mall.

4. Checkout Time: Each purchase takes exactly $1$ second to process. Therefore, the time taken by a single batch is determined by the longest line among the $m$ checkout counters.

5. Batch Synchronization: The next batch cannot enter until the slowest checkout counter finishes processing the current batch. Customers who do not buy anything wait for the rest of their batch at the exit (this takes $0$ extra seconds).

## Input Format
A single line containing three space-separated integers:

- $n$: The total number of customers waiting outside.<br>
- $k$: The maximum capacity of the mall (batch size).<br>
- $m$: The number of parallel checkout counters.

## Output Format
Print a single integer: the expected total time in seconds required to serve all $n$ customers.
