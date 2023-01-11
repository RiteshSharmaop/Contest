import java.util.*;
public class F1RULE{
    public static void main(String[] args){

		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		while(t!=0){
		    int x,y;
		    x = sc.nextInt();
		    y = sc.nextInt();
		    
		    x = x * 107/100;
		    if(x>=y){
		        System.out.println("YES");
		    }else{
		        System.out.println("NO");
		    }
		    
		    t--;
		}
    }
}