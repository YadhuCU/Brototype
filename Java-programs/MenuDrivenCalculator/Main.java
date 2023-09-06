import java.util.Scanner;

public class Main {

  public static void main(String arg[]) {

    Scanner sc = new Scanner(System.in);
    Main operation = new Main();

    int choice;

    do {
      System.out.println("Menu Driven Calculator.");
      System.out.println("1.Addition.");
      System.out.println("2.Substraction.");
      System.out.println("3.Multiplication.");
      System.out.println("4.Division.");
      System.out.println("0.Exit.");
      System.out.print("Enter Number of your choice: ");
      choice = sc.nextInt();

      switch (choice) {
      case 1:
        operation.addition();
        break;
      case 2:
        operation.substraction();
        break;
      case 3:
        operation.multiplication();
        break;
      case 4:
        operation.division();
        break;
      case 0:
        System.out.println("Exiting the program...");
        break;
      default:
        System.out.println("Enter the correct option.");
        break;
      }

    } while (choice != 0);
  }

  // addition
  public void addition() {
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the first number: ");
    double num1 = sc.nextDouble();

    System.out.print("Enter the second number: ");
    double num2 = sc.nextDouble();

    double result = num1 + num2;

    System.out.println("Result: " + result);
    System.out.println("*******************************");
  }
  // substraction
  public void substraction() {

    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the first number: ");
    double num1 = sc.nextDouble();

    System.out.print("Enter the second number: ");
    double num2 = sc.nextDouble();

    double result = num1 - num2;

    System.out.println("Result: " + result);
    System.out.println("*******************************");
  }
  // multiplication
  public void multiplication() {

    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the first number: ");
    double num1 = sc.nextDouble();

    System.out.print("Enter the second number: ");
    double num2 = sc.nextDouble();

    double result = num1 * num2;

    System.out.println("Result: " + result);
    System.out.println("*******************************");
  }
  // division
  public void division() {

    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the first number: ");
    double num1 = sc.nextDouble();

    System.out.print("Enter the second number: ");
    double num2 = sc.nextDouble();

    double result = num1 / num2;

    System.out.println("Result: " + result);
    System.out.println("*******************************");
  }
}
