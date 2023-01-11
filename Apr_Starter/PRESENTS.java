import java.util.*;
public class PRESENTS {
    public static void main(String[] arsg){
        Scanner sc = new Scanner(System.in);
		int t =sc.nextInt();
		while(t!=0){
		    int n = sc.nextInt();
		    System.out.println(n-(n/5));
		    t--;
		}
    }
}
