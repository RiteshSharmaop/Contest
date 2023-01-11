import java.util.Scanner;

public class COMPRESSVD {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        int t = sc.nextInt();
        while(t!=0){
            int n = sc.nextInt();
            int arr[] = new int[n];
            for(int i = 0;i<arr.length;i++){
                arr[i] = sc.nextInt();
            }
            for(int i = 0;i<arr.length-1;i++){
                if(arr[i]==arr[i+1]){
                    n =  n-1;
                }
            }
            System.out.println(n);
            t--;
        }

    }
}
