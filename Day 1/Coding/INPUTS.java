package rohan;

import java.util.Scanner;

public class INPUTS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int n = sc.nextInt();
        System.out.println("your number is "+n);

        System.out.print("Enter name: ");
        String name = sc.next();
        System.out.println("hi "+name);

        System.out.print("Enter a floating point number: ");
        float x = sc.nextFloat();
        System.out.print("floating point number: "+x);
    }
}
