import java.util.Scanner;

public class ok {
    public static void main(String[] arsg){
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // String k = sc.nextLine();
        String arr[] = new String[n+1];
        for(int i = 0 ; i < arr.length;i++){
            arr[i] = sc.nextLine();
        }

        for(int i = 0;i<arr.length;i++){
            System.out.print(arr[i]);
        }
    }
}
