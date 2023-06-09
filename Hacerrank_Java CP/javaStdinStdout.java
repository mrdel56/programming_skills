import java.util.Scanner;

public class javaStdinStdout {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int intnum = scanner.nextInt();
        double doublenum = scanner.nextDouble();
        
        scanner.nextLine();
        String s = scanner.nextLine();
        

        System.out.println("String: " + s);
        System.out.println("Double: " + doublenum);
        System.out.println("Int: " + intnum);
    }
}
