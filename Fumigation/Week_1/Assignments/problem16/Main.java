import java.util.Scanner;

public class Main {
  public static void main(String arg[]) {

    Scanner sc = new Scanner(System.in);

    System.out.print("Enter a number: ");
    int num = sc.nextInt();

    if (isPrime(num)) {
      System.out.println("Entered number is Prime Number.");
    } else {
      System.out.println("Entered number is not a Prime Number.");
    }
  }

  static boolean isPrime(int n) {

    if (n == 1) {
      return true;
    }

    for (int i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }
}
