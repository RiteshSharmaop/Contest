import java.util.*;
public class BIRDFARM {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
	    int t =sc.nextInt();
	    for(int i =1;i<=t;i++){
	        int x,y,z;
	        x = sc.nextInt();
	        y = sc.nextInt();
	        z = sc.nextInt();
	        if((z%x==0)&&(z%y==0)){
	            System.out.println("ANY");
	        }else if(z%x==0){
	            System.out.println("CHICKEN");
	        }else if(z%y==0){
	            System.out.println("DUCK");
	        }else{
	            System.out.println("NONE");
	        }
	    }
    }
}
