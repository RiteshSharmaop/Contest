// package May Cook-Off 2022 Division 4;
import java.util.*;
public class LEAGUE {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
		int t,n;
		t = sc.nextInt();
		while(t!=0){
		    n = sc.nextInt();
		    n = (n*3)/2;
		    if(n%3==0){
		        System.out.println(n);
		    }else{
		        System.out.println(n-1);
		    }
		    t--;
		}
    }
}
