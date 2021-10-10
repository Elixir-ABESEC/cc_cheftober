//Question Link
//https://pepcoding.com/resources/online-java-foundation/recursion-on-the-way-up/print-maze-path-with-jumps-official/ojquestion

package PepCoding.Maze_Path_With_Jumps;
import java.util.*;

public class Solution{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        mazePaths(0,0,n-1,m-1,"");
        sc.close();
    }
    public static void mazePaths(int sr, int sc, int dr, int dc, String ans){
        if(sr>dr || sc>dc){
            return;
        }
        if(sr==dr && sc==dc){
            System.out.println(ans);
        }
        for(int i=1;i<=dc-sc;i++){
            mazePaths(sr,sc+i,dr,dc,ans+"h"+i);
        }
        for(int i=1;i<=dr-sr;i++){
            mazePaths(sr+i, sc,dr, dc, ans+"v"+i);
        }
        for(int i=1;i<=dc-sc && i<=dr-sr;i++){
            mazePaths(sr+i,sc+i,dr,dc,ans+"d"+i);
        }
    }
}