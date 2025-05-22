//package java.kilometer to mile;
import java.util.Scanner;
public class main {
    public static void main(String [] args){
        System.out.println("enter kilometers");
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        double m= a*0.621371;
        System.out.println("conversion in miles is " + m);


    }
    
}
