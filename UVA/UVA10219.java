import java.math.BigInteger;
import java.util.Scanner;

/**
 * Created by abdullah on 2/2/17.
 */


public class UVA10219
{

    public static void main(String[] args)
    {
        int a,b;
        Scanner scan=new Scanner(System.in);
        while(scan.hasNextInt())
        {
            a=scan.nextInt();
            b=scan.nextInt();
            System.out.println(cal(a,b).toString().length());
        }
    }
    static BigInteger cal(final int N, final int K) {
        BigInteger ret = BigInteger.ONE;
        for (int k = 0; k < K; k++) {
            ret = ret.multiply(BigInteger.valueOf(N-k))
                    .divide(BigInteger.valueOf(k+1));
        }
        return ret;
    }
}
