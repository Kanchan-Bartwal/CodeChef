import java.io.*;
import java.util.Scanner;
public class Main 
{
    public static void main(String[]args)
    {
        Scanner ob=new Scanner(System.in);
        int t=0,i,j,k,len,count;
        String s="";
        char ch,sh;
        if(ob.hasNextInt())
        t=ob.nextInt();  //number of test cases
        for(i=1;i<=t;i++)
        {
            s=ob.next();  //accepting the string
            len=s.length();
            for(j=0;j<len;j++)
            {
                ch=s.charAt(j);
                count=0;
                for(k=0;k<len;k++)
                {
                   sh=s.charAt(k);
                   if(ch==sh)
                   count=count+1;
                }
                if(len-count==count)
                {
                    System.out.println("YES");
                    break;
                }
                else
                {
                    if(j==len-1)
                    System.out.println("NO");
                }
            }
        }
    }
}
