import java.io.*;
import java.util.Scanner;
public class Main 
{
    public static void main(String[]args)
    {
        Scanner ob=new Scanner(System.in);
        int t=0,i,len,j,countl=0,countu=0,countd=0,counts=0;
        String str;
        char ch;
        if(ob.hasNextInt())
        t=ob.nextInt();
        for(i=1;i<=t;i++)
        {
            str=ob.next();
            len=str.length();
            if(len>=10)
            {
                for(j=0;j<len;j++)
                {
                    ch=str.charAt(j);
                    if((ch>=97)&&(ch<=122))
                    countl=countl+1;
                    if((j!=0)&&(j!=len-1))
                    {
                        if((ch>=65)&&(ch<=90))
                        countu=countu+1;
                        else if((ch>=48)&&(ch<=57))
                        countd=countd+1;
                        else if(ch=='@'||ch=='#'||ch=='%'||ch=='&'||ch=='?')
                        counts=counts+1;
                    }
                }
                if((countl!=0)&&(countu!=0)&&(countd!=0)&&(counts!=0))
                System.out.println("YES");
                else
                System.out.println("NO");
                countl=0;countu=0;countd=0;counts=0;
            }
            else
            {
                System.out.println("NO");
            }
        }
    }
}
