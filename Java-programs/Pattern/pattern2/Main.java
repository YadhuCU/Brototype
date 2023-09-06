import java.util.Scanner;
/*

1 2 3
6 5 4
7 8 9

*/

public class Main {
  public static void main(String arg[]) {

    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the number of rows: ");

    int row = sc.nextInt();
    int count = 1;
    int count2 = 0;

    for (int i = 1; i <= row; i++) {
      if (i % 2 == 0) {
        count2 = i * row;
      }
      for (int j = 1; j <= row; j++) {

        if (i % 2 == 0) {
          System.out.print(count2 + " ");
          count++;
          count2--;
        } else {
          System.out.print(count + " ");
          count++;
        }
      }
      System.out.println();
    }
  }
}
