import java.io.*;
import java.util.Scanner;
public class Main 
{
    public static void main(String[]args)
    {
        Scanner ob=new Scanner(System.in);
        int t=0;char c='!';
        if(ob.hasNextInt())
        t=ob.nextInt();
        for(int i=1;i<=t;i++)
        {
            if(ob.hasNext())
            c=ob.next().charAt(0);
            if((c=='B')||(c=='b'))
            System.out.println("BattleShip");
            else if((c=='C')||(c=='c'))
            System.out.println("Cruiser");
            else if((c=='D')||(c=='d'))
            System.out.println("Destroyer");
            else if((c=='F')||(c=='f'))
            System.out.println("Frigate");
        }
    }
}
