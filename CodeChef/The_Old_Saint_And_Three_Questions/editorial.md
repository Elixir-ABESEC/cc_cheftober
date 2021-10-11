## The Old Saint And Three Questions
Once upon a time, there was a hero and an old saint. And like in any story with a hero and an old saint, the old saint asked the hero — three questions!

But here's the twist: each question was a binary question, which means that the answer to each must be either a `Yes` or a `No`, not none, not both. Our hero, who was not so wise in the ways of science, answered them arbitrarily and just hoped he is correct. The old saint, being so old, does not remember which answers were correct. The only thing that he remembers is - how many of them were `Yes`, and how many of them were `No`. Our hero will pass the test if the old saint cannot distinguish his responses from the set of correct answers i.e. if the number of `Yes` and `No` in the responses matches that in the correct answers, regardless of their order.

You are given the answers to each of the three questions, and the responses of the hero to the same. Find whether the hero will be able to pass the old saint's test.



**Examples**

```
Input : 1 0 1
        1 1 0

Output : YES

Input : 0 0 0
        1 1 1

Output : NO

```

**Explanation**
1. Count the number of `1` in saint questions (first string).
2. Count the number of `1` in hero answers (second string).
3. If both the count is equal, then we can say that hero passed the test.

**Question Link**
<a href="https://www.codechef.com/CDMN21B/problems/THREEQ/">Question Link</a>  