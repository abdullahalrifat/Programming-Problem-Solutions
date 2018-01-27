import java.util.Scanner;
import java.util.Stack;

/**
 * Created by student on 9/29/2016.
 */
public class Main
{
    public static void main(String[] args)
    {
        Stack<String>forward=new Stack<>();
        Stack<String>back=new Stack<>();
        Scanner scan=new Scanner(System.in);
        int t=scan.nextInt();
        scan.nextLine();
        for(int i=1;i<=t;i++)
        {
            back.clear();
            forward.clear();
            String current="http://www.lightoj.com/";
            System.out.println("Case "+i+":");
            while(true)
            {
                String ca=scan.nextLine();
                if(ca.equals("QUIT"))
                {
                    break;
                }
                else
                {
                    if(ca.equals("BACK"))
                    {
                        if(back.isEmpty())
                        {
                            System.out.println("Ignored");
                        }
                        else
                        {
                            forward.push(current);
                            current=back.pop();
                            System.out.println(current);
                        }
                    }
                    if(ca.equals("FORWARD"))
                    {
                        if(forward.isEmpty())
                        {
                            System.out.println("Ignored");
                        }
                        else
                        {
                            back.push(current);
                            current=forward.pop();
                            System.out.println(current);
                        }
                    }
                    else
                    {
                        String sp[]=ca.split(" ");
                        if(sp[0].equals("VISIT"))
                        {
                            back.push(current);
                            current=sp[1];
                            forward.clear();
                            System.out.println(current);
                        }
                    }
                }
            }
        }
    }
}