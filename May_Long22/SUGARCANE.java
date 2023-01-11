import java.lang.constant.DynamicConstantDesc;
import java.util.*;

import javax.xml.transform.stream.StreamSource;
public class SUGARCANE {
    public static void  main(String[] args){
        Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t!=0){
		    int n; //float n;  //int n
		    int a, b;//float a ,b;
		    n= sc.nextInt();
		    n = n * 50;
            // float o = (float)n;
		    a = n * 2/10;


            b = n* 3/10 ;

            int j = a+a+b;

            System.out.println(n - j);
            
            // float p = n-(a+a+b);
            // int k = (int)p;
            // System.out.println(k);
		    t--;
		}
    }
}
