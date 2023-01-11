import java.util.*;
public class TODOLIST {
    public static void main(Strinf[] args){
        Scanner sc= new Scanner(System.in);
		int t = sc.nextInt();
		while(t!=0){
		    int n = sc.nextInt();
		    int arr[] = new int[n];
		    int count=0;
		    for(int i=0; i<arr.length;i++){
		        arr[i]= sc.nextInt();
		        if(arr[i]>=1000){
		            count++;
		        }
		    }
		    
		    System.out.println(count);
		    
		    t--;
		}
    }
}
