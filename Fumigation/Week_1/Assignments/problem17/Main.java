import java.util.Scanner;

public class Main {
  public static void main(String arg[]) {

    Main calculation = new Main();

    Scanner sc = new Scanner(System.in);
    int choice;

    do {
      System.out.println("1. Addition.");
      System.out.println("2. Substraction.");
      System.out.println("3. Multiplication.");
      System.out.println("4. Division.");
      System.out.println("0. Exit.");
      System.out.print("Enter your choice: ");
      choice = sc.nextInt();

      switch (choice) {
      case 1:
        calculation.addition();
        break;
      case 2:
        calculation.substraction();
        break;
      case 3:
        calculation.multiplication();
        break;
      case 4:
        calculation.division();
        break;
      case 0:
        System.out.println("Exiting..");
        break;
      default:
        System.out.println("Invalid option.");
        break;
      }

    } while (choice != 0);
  }

  // Addition.
  public void addition() {
    Scanner sc = new Scanner(System.in);

    System.out.print("enter the First number: ");
    double num1 = sc.nextDouble();

    System.out.print("Enter the Second Number: ");
    double num2 = sc.nextDouble();

    double result = num1 + num2;

    System.out.println("Result: " + result);
    System.out.println("*******************************");
  }

  // Substraction.
  public void substraction() {

    Scanner sc = new Scanner(System.in);

    System.out.print("enter the First number: ");
    double num1 = sc.nextDouble();

    System.out.print("Enter the Second Number: ");
    double num2 = sc.nextDouble();

    double result = num1 - num2;

    System.out.println("Result: " + result);
    System.out.println("*******************************");
  }

  // Multiplication.
  public void multiplication() {

    Scanner sc = new Scanner(System.in);

    System.out.print("enter the First number: ");
    double num1 = sc.nextDouble();

    System.out.print("Enter the Second Number: ");
    double num2 = sc.nextDouble();

    double result = num1 * num2;

    System.out.println("Result: " + result);
    System.out.println("*******************************");
  }

  // Division
  public void division() {

    Scanner sc = new Scanner(System.in);

    System.out.print("enter the First number: ");
    double num1 = sc.nextDouble();

    System.out.print("Enter the Second Number: ");
    double num2 = sc.nextDouble();

    double result = num1 / num2;

    System.out.println("Result: " + result);
    System.out.println("*******************************");
  }
}
