package CodeChef.Apr_22_LongChallenge;
import java.util.*;
public class op {
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        int T = sc.nextInt();
        int arr[][] = new int[T][T];
        for(int i =0;i<arr.length;i++){
            for(int j =0;j<arr.length;j++){
                arr[i][j] = sc.nextInt();
            }
        }


        
        // for(int i =0;i<arr.length;i++){
        //     for(int j =0;j<arr.length;j++){
        if((arr[0][0]<<arr[0][2])>arr[0][1] ){
            System.out.println("NO");
        }else{
            System.out.println("YES");
        }


        if((arr[1][0]<<arr[1][2])>arr[1][1] ){
            System.out.println("NO");
        }else {
            System.out.println("YES");
        }

        if((arr[2][0]<<arr[2][2])>arr[2][1] ){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        //     }
        //     System.out.println();
        // }
        

        // int i = 1;
        // while(i<=T){

        //     if((x<<m)>y ){
        //         System.out.println("NO");
        //     }else{
        //         System.out.println("YES");
        //     }
        //     i++;
        // }



        sc.close();
    }
}
