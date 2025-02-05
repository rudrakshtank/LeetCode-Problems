~Problem Link: https://leetcode.com/problems/convert-the-temperature/description/

~Approach: The program takes a temperature in Celsius and converts it to both Kelvin and Fahrenheit. It initializes an empty vector, calculates the Kelvin and Fahrenheit equivalents using standard conversion formulas, and stores the results in the vector, which is then returned.

~Algorithm Used:

1. Initialize an empty vector v.

2. Compute Kelvin as celsius + 273.15 and store it in k.

3. Compute Fahrenheit as (celsius * 1.80) + 32.00 and store it in f.

4. Insert k and f into the vector.

Return the vector containing both converted values.

~Time Complexity:

The time complexity of this program is O(1) (constant time) since it performs a fixed number of arithmetic operations and vector insertions, regardless of the input value.
