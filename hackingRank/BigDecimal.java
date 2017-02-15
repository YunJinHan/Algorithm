import java.math.BigDecimal;
import java.util.*;
class Solution{
    public static void main(String []args){
        //Input
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        String []s=new String[n+2];
        for(int i=0;i<n;i++){
            s[i]=sc.next();
        }
        sc.close();

        BigDecimal[] a = new BigDecimal[n];
        for (int i = 0; i < n; i++) {
            a[i] = new BigDecimal(s[i]);
        }
        Arrays.sort(a);

        String[] t = new String[n+2];
        for (int i = 0; i < n; i++) {
            int j = n-1;
            while (true) {
                try {
                    if (a[i].compareTo(new BigDecimal(s[j])) == 0) break;
                    j--;
                }
                catch (NullPointerException npe) {
                    j--;
                }
            }
            t[n-i-1] = s[j];
            s[j] = null;
        }
        System.arraycopy(t, 0, s, 0, n);
        for(int i=0;i<n;i++)
        {
            System.out.println(s[i]);
        }
    }
}