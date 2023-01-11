import java.util.*;
public class SEMCOURSES {
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
		int t = sc.nextInt();
		for(int i =1; i<=t;i++){
		    int x,y,z;
		    x = sc.nextInt();
		    y = sc.nextInt();
		    z = sc.nextInt();
		    System.out.println(x*y*z);
		}
    }
}
