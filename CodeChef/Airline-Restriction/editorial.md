## Airline Restrictions

  

***Problem :*** 
-----------

Chef has 3 bags that she wants to take on a flight. They weigh A, B, and C kgs respectively. She wants to check-in exactly two of these bags and carry the remaining one bag with her.

  

The airline restrictions says that the total sum of the weights of the bags that are checked-in cannot exceed D kgs and the weight of the bag which is carried cannot exceed E kgs. Find if Chef can take all the three bags on the flight.

  

**Example 1:**

  

**Input:**

3

1 1 1 15 5

8 7 6 15 5

8 5 7 15 6

  

**Output:**

YES

NO

YES

  

**Explanation:**

Test case 1: Chef can check-in the first and second bag (since 1+1=2≤15) and carry the third bag with her (since 1≤5).

  

Test case 2: None of the three bags can be carried in hand without violating the airport restrictions.

  

Test case 3: Chef can check-in the first and the third bag (since 8+7≤15) and carry the second bag with her (since 5≤6).

  

## Solution :

The possible combinations that can be are as follows:

  

Bag A and Bag B are checked in while Bag C is carried.

Bag B and Bag C are checked in while Bag A is carried.

Bag A and Bag C are checked in while Bag B is carried.

  

If any of the combinations satisfy the airline rules then Chef can take all the three bags and hence print **YES** else **NO**.