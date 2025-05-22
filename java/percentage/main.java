//package myApp.percentage;
import java.util.Scanner;


public class main {
    public static void main(String[] args){
        Scanner s= new Scanner(System.in);
        System.out.println("enter marks for subject 1 :");
        int a=s.nextInt();
        System.out.println("enter marks for subject 2 :");
        int b=s.nextInt();
        System.out.println("enter marks for subject 3 :");
        int c=s.nextInt();
        System.out.println("enter marks for subject 4 :");
        int d=s.nextInt();
        System.out.println("enter marks for subject 5 :");
        int e=s.nextInt();
        int sum=a+b+c+d+e;
        float per= ((float)sum/500)*100;
        System.out.println("percentage is :");
        System.out.println(per);
    }
    
}
