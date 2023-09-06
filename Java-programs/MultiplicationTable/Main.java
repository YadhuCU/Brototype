import java.util.Scanner;

public class Main {
  public static void main(String ar[]) {

    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the number of Time Table: ");
    int num = sc.nextInt();

    for (int i = 1; i <= 10; i++) {
      System.out.println(i + " x " + num + " = " + i * num);
    }
  }
}
