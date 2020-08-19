import java.io.*;
import java.util.*;

public class PCRTesting {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        
        String patterns[] = new String[n];
        
        for(int i=0;i<n;i++){
            patterns[i]=sc.next();
        }
        
        int p=sc.nextInt();
        
        for(int i=0;i<p;i++){
			
            boolean condition=false;
            
            String s=sc.next();
            
            for(int j=0;j<n;j++){
                if(s.contains(patterns[j])){
                    condition=true;
                    break;
                }
            }
            
            if(condition){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
