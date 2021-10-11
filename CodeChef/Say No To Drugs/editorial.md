## Say No To Drugs
There are `N` people participating in a race. The `Nth` participant is your friend, so you want him to win. You are not a man of ethics, so you decided to inject some units of a Performance Enhancement Drug (don't ask where that came from) in your friend's body.
* From the charts, you came to know the speed of every player. Formally, for a player `i`, his speed is denoted by `Si`.
* The change in speed with one unit of the drug is `K` units. Note that `K` can be `negative`, which means the drug has more side effects than benefits.
* Of course, there will be a drug test before the race, so your friend will be caught if the number of units of the drug in his blood is greater than or equal to `L`.

**Note: A player wins the race if he has the maximum speed among all the participants. If there are more than one people with a maximal speed, they tie at first place, and no one wins!**

**Examples**

```
Input : 4 2 2
        2 1 3 2

Output : Yes

Input : 4 2 2
        2 1 4 2

Output : No

Input : 3 -10 100
        12 11 9

Output : No
```

**Explanation**
* We have to calculate the maximum drug that we can inject in our friend, So he can win the race.

## Approach
**First we have to find out the maximum speed of the player other than our friend speed.**

**Case 1:- When speed of our friend > maximum speed of the other players.**
* Just print `Yes`.

**Case 2:- When speed of our friend <= maximum speed of the other players.**
# Increase our friend speed by giving him drugs.

* Multiply the `change in spped by ine drug` with the `minimum amount of drung for use` `k*(l-1)`. This will then added to the friend's speed.
* Check for the `increased speed of the friend` > `maximum speed of the player` . If yes then print `Yes` otherwise print `No`.
