class Solution {
    public int reverse(int x) {
        long t=0;
        while(x!=0){
            long r=x%10;
            t=t*10+r;
            x=x/10;
        }
        if(t>Math.pow(-2,31) && t<Math.pow(2,31)-1){
            return (int)t;
        }
        return 0;
    }
}