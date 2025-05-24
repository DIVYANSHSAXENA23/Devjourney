//package java.CGPA of 3 subjects;
import java.util.Scanner;
public class main {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        System.out.println("enter marks for subject 1 :");
        float a=s.nextFloat();
        System.out.println("enter marks for subject 2 :");
        float b=s.nextFloat();
        System.out.println("enter marks for subject 3 :");
        float c=s.nextFloat();
        float Cgpa=(a+b+c)/30;
        System.out.println("CGPA is :");
        System.out.println(Cgpa);
        
    }
}

