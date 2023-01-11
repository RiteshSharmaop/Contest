import java.util.Scanner;

public class ne{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        StringBuilder sb = new StringBuilder();
        sb = sc.nextLine();

        for(int i = 0 ; i<n;i++){
            if(sb.charAt(i) == "A" ){
                System.out.print("T");
            }else if(sb.charAt(i) == "T" ){
                System.out.print("A");
            }else if(sb.charAt(i) == 'G' ){
                System.out.print("C");
            }else{
                System.out.println("G");
            }
        }

        // System.out.println();
        // System.out.println(neww);
    }
}