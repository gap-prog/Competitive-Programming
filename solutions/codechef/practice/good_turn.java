// CodeChef Problem Link: https://www.codechef.com/problems/GDTURN

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        for (int i = 1; i <= T; ++i) {
            int X = scanner.nextInt();
            int Y = scanner.nextInt();
            if (X + Y > 6) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
	}
}
