import java.util.*;
import java.lang.*;
import java.io.*;
class Kruskal 
{
    public Boolean che(int arr[][],int a, int b)
    {
        for(int i = 0; i < arr.length; i ++)
        {
            if((a == arr[i][0] && b == arr[i][1]) || (a == arr[i][1] && b == arr[i][0]))
                return false;
        }
        return true;
    }
    public int[][] check(int arr[][])
    {
        int [][]ch = new int[7][3];
        int c = 0;
        for(int i = 0; i < arr.length; i ++)
        {
            for(int j = 0; j < arr.length; j ++)
            {
                if(i < j)
                {
                    ch[c][0] = i;
                    ch[c][1] = j;
                    ch[c][2] = arr[i][j];
                    c++;
                }
            }
        }        
        Arrays.sort(ch, new Comparator< int []>()
        {
            public int compare(int []a1, int[]a2)
            {
                if(a1[2] > a2[2])
                    return 1;
                else
                    return -1;
            }
        });
        int ans[][] = new int[arr.length - 1][3];
        ans[0][0] = ch[0][0];
        ans[0][1] = ch[0][1]; 
        ans[0][2] = ch[0][2];
        c = 1;
        for(int i = 1; i < 7; i ++)
        {
            if(che(ans,ch[i][0], ch[i][1]))
            {
                ans[c][0] = ch[i][0];
                ans[c][1] = ch[i][1]; 
                ans[c][2] = ch[i][2];
                c++;
            }
        }
        return ans;
    }
    public static void main(String[] args)
	{
		int graph[][] = new int[][] { { 0, 2, 0, 6, 0 },
									{ 2, 0, 3, 8, 5 },
									{ 0, 3, 0, 0, 7 },
									{ 6, 8, 0, 0, 9 },
									{ 0, 5, 7, 9, 0 } };
		System.out.println(check(graph));
	}
}