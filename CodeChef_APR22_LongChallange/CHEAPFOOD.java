package Contest.CodeChef_APR22_LongChallange;
import java.util.*;
public class CHEAPFOOD {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t!=0){
		    int x,z,l;
		    Double dis;
		    x = sc.nextInt();
		    dis = x*0.1;
            dis = x-dis;
            int di = (int)Math.round(dis);
            
		    z = x-100;
		    if(z<=dis){
                System.out.println(100);
            }else{
		        System.out.println(x-di);
		    }
		    t--;
		}
    }
}
