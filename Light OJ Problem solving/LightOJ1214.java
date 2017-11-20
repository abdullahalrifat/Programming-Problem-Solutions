import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created by abdullah on 2/2/17.
 */
public class LightOJ1214
{
    public static void main(String[] args) {
        BigInteger bi1, bi2;
        Scanner scan=new Scanner(System.in);
        int n;
        n=scan.nextInt();
        for(int i=1;i<=n;i++)
        {
            String a,b;
            a=scan.next();
            b=scan.next();
            bi1=new BigInteger(a);
            bi2=new BigInteger(b);
            BigInteger bi[] = bi1.divideAndRemainder(bi2);
            if(bi[1]==BigInteger.ZERO)
            {
                System.out.println("Case "+i+": divisible");
            }
            else
            {
                System.out.println("Case "+i+": not divisible");
            }
        }
    }
}
