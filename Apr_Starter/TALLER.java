import java.util.*;
public class TALLER {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
		int t,a,b;
		t = sc.nextInt();
		while(t!=0){
		    a = sc.nextInt();
		    b = sc.nextInt();
		    if(a>b){
		        System.out.println("A");
		    }else{
		        System.out.println("B");
		    }
		    t--;
		}
    }
}
