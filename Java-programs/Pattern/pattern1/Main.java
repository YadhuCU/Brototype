import java.util.Scanner;

public class Main {
  public static void main(String arg[]) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the number of rows: ");
    int num = sc.nextInt();

    for (int i = 1; i <= num; i++) {
      for (int j = 1; j <= i; j++) {
        System.out.print(j + " ");
      }
      System.out.println();
    }
  }
}
