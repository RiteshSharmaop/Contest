/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t!=0){
		    int n = sc.nextInt();
		    int s = 0;
		    int l = 0;

		    String arr[] = new String[n];
		    for(int i = 0;i<arr.length;i++){
		        arr[i] = sc.next();
                String[] part = arr[i].split("(?<=\\D)(?=\\d)");
                String p = part[1];
                Integer op =Integer.valueOf(p);  
                if (op == 38){
		            s++;
		        }else{
		            l++;
                }
		    }
		    System.out.println(s+" "+l);
		    t--;
		}
	}
}
