/**
*
*   Author: 	jay.dnb@outlook.in
*   Created: 	
*
*   Synopsis: ~$
*
**/

class Solution
{
    public static int solution(int[] l) {
        int length = l.length;
        int cc = 0;
        for (int i = 0; i < l.length - 2; i++)
            for (int j = i+1; j < l.length - 1; j++)
                if (l[j] % l[i] == 0)
                    for (int k = j+1; k < l.length; k++)
                        if (l[k] % l[j] == 0)
                            cc+=1;
        return cc;
    }

    public static void main(String[] args)
    {

        Solution s = new Solution();
        int a[] = new int[7];
        for(int g = 1; g <= 7; g++)
        	a[g-1] = g;
        System.out.print(s.solution(a));
        
    }

}
