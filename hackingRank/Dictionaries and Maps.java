// Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []arg){
        HashMap<String,Integer> map = new HashMap<String,Integer>();
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            // Write code here
            map.put(name,phone);
        }
        while(in.hasNext()){
            String s = in.next();
            // Write code here
            if (map.get(s) == null) {
                System.out.println("Not found");
            }
            else {
                System.out.printf("%s=%d\n",s,map.get(s));
            }
        }
        in.close();
    }
}
