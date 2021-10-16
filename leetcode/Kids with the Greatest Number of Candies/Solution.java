package leetcode.Kids with the Greatest Number of Candies;

class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
     List<Boolean> h = new ArrayList<>();
     int max = 0;
     for (int i : candies){
         if (i > max){
             max = i;
         }
     }
     for (int i = 0; i < candies.length; i++) {
         if (candies[i] + extraCandies >= max) h.add(true);
         else h.add(false);
     }
     return h;
    }
}
