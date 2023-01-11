// package May Cook-Off 2022 Division 4;
import java.util.*;
public class CMASKS {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
		int t,x,y;
		t = sc.nextInt();
		while(t!=0){
		    x = sc.nextInt();
		    y = sc.nextInt();
		    
		    x = x*100;
		    y = y*10;
		    if(x>=y){
		        System.out.println("Cloth");
		    }else{
		        System.out.println("Disposable");
		    }
		    t--;
		}
    }
}
