# Couple Dancing Competition 💃🕺

## Description

A couple-dancing competition is being organized where every dancing pair must consist of **one boy and one girl**.

A pair is considered **valid** only if the **absolute difference** between their heights is **exactly 5 cm**.

You are given the heights of **N boys** and **N girls**. Each participant can be paired **at most once**.

Your task is to determine:

1. Whether it is possible to pair **every boy** with exactly one girl.
2. The **maximum number of valid couples** that can be formed.

## Constraints

$12 \le N \le 10^5$ <br>
$100 \le \text{Height} \le 250$

## Rules

1. **Valid Pair:** A boy and a girl can form a couple only if

   $$
   |BoyHeight - GirlHeight| = 5
   $$

2. **Single Partner:** Each boy and each girl can belong to **at most one** couple.

3. **Maximum Matching:** Form the maximum possible number of valid couples while satisfying the above rules.

4. **Complete Pairing:** If every boy can be paired with exactly one girl, print **"YES"**; otherwise, print **"NO"**.

## Input Format

The first line contains a single integer:

- $N$ — the number of boys and girls.

The second line contains **N** space-separated integers representing the heights of the boys.

The third line contains **N** space-separated integers representing the heights of the girls.

## Output Format

Print two lines:

- The first line should contain **"YES"** if every boy can be paired; otherwise print **"NO"**.
- The second line should contain a single integer representing the **maximum number of valid couples** that can be formed.

## Example 1

### Input
```text
5
170 165 180 175 160
175 170 185 180 155
```

### Output
```text
YES
5
```

### Explanation

The following valid pairs can be formed:

- 170 ↔ 175
- 165 ↔ 170
- 180 ↔ 185
- 175 ↔ 180
- 160 ↔ 155

Every boy is successfully paired with exactly one girl.

---

## Example 2

### Input
```text
5
170 165 180 175 160
176 170 185 180 155
```

### Output
```text
NO
4
```

### Explanation

Only four valid couples can be formed. The boy with height **170 cm** cannot be paired because there is no girl whose height is **165 cm** or **175 cm**.