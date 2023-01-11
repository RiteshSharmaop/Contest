// package May Cook-Off 2022 Division 4;
import java.util.*;
public class CGYM {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
		int t,x,y,z;
		t = sc.nextInt();
		while(t!=0){
		    x = sc.nextInt();
		    y = sc.nextInt();
		    z = sc.nextInt();
		    
		    if(x<=z){
		        if(x+y<=z){
		            System.out.println(2);
		        }else{
		            System.out.println(1);
		        }
		    }else{
		        System.out.println(0);
		    }
		    t--;
		}
    }
}
