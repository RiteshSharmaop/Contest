package Contest.CodeChef_APR22_LongChallange;
import java.util.*;
public class SST {
    public static void main(String[] arga){
        Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t!=0){
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    b = b/2;
		    if(a==b){
		        System.out.println("ANY");
		    }else if(a>b){
		        System.out.println("FIRST");
		    }else{
		        System.out.println("SECOND");
		    }
		    t--;
		}
    }
}
