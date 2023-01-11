package Contest.CodeChef_APR22_LongChallange;
import java.util.*;
public class SIXFRIENDS {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t!=0){
		    int x,y;
		    x = sc.nextInt();
		    y =sc.nextInt();
		    x = x*3;
		    y = y*2;
		    if(x>=y){
		        System.out.println(y);
		    }else{
		        System.out.println(x);
		    }
		    t--;
		}
    }
}
