import java.util.Scanner;

public class javaOutput{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i;
        System.out.println("================================");
        for(i=0;i<3;i++){
            String s = sc.next();
            int num = sc.nextInt();
            System.out.printf("%-15s%03d\n",s,num);
        }
        System.out.println("================================");
    }
}