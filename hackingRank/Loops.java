import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        showResult(n);
    }
    
    public static void showResult(int n) {
        for (int i = 1; i <= 10; i ++) {
            System.out.printf("%d x %d = %d\n",n,i,n*i);
        }
    }
}
