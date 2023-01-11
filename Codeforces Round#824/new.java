public class new{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t--){
            int n = sc.nextInt();

            n /= 3;
            n -= 2;
            System.out.println(n);
        }
    }
}