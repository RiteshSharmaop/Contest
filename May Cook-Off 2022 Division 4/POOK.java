// package May Cook-Off 2022 Division 4;
import java.util.*;
public class POOK {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t!=0){
		    int n = sc.nextInt();
		    if(n==2 ||n==3){
		        System.out.println(n-1);
		    }else{
		        System.out.println(n);
		    }
		    t--;
		}
    }
}
