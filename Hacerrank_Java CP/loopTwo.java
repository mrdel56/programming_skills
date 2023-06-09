import java.util.Scanner;

public class loopTwo {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    // Read the number of queries
    int t = scanner.nextInt();

    // Process each query
    for (int i = 0; i < t; i++) {
      // Read the values of a, b, and n
      int a = scanner.nextInt();
      int b = scanner.nextInt();
      int n = scanner.nextInt();

      // Generate and print the series
      int x = a;
      for (int j = 1; j <= n; j++) {
        
         int y =((int)(Math.pow(2,j))*b);
        System.out.print(x+y-a + " ");
      }
      System.out.println();
    }
  }
}