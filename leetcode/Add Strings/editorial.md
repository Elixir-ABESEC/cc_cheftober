Name: Add Strings

Problem: Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.
You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

Example 1:
Input: num1 = "11", num2 = "123"
Output: "134"

Example 2:
Input: num1 = "456", num2 = "77"
Output: "533"

Example 3:
Input: num1 = "0", num2 = "0"
Output: "0"


Explanation for "why am I doing -'0'?":
The ASCII value of digits 0-9 is from 48 to 57. If num1 is 3 then i is 0, so num1.charAt(i--) - '0' means ASCII value of (num1.charAt(i--)) - ASCII value of ('0') which is 51-48=3 and 3 is what we want to add to the sum. If -'0' is eliminated then simply ASCII value of (num1.charAt(i--)) which is 51 will be added to the sum so we subtract the ASCII value of the digit from that of zero because we want the digit itself and not its ASCII value in the sum. Try to dry run once by eliminating -'0' and once by keeping it. You'll get the difference more clearly.