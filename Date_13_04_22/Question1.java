package Contest.Date_13_04_22;
import java.util.*;
public class Question1 {
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        int t =sc.nextInt();
        
        for(int i=1;i<=t;i++){
            int n =sc.nextInt();
            int m =sc.nextInt();
            int k =sc.nextInt();
            if(n<=m*k){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
            
        }
    }
}
