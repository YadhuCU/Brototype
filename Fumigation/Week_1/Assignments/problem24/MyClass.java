import java.util.Scanner;
public class MyClass extends Area {
  public static void main(String ar[]) {

    Scanner sc = new Scanner(System.in);
    MyClass shape = new MyClass();
    int choice;

    do {
      System.out.println("1. Circle.");
      System.out.println("2. Square.");
      System.out.println("3. Rectangel.");
      System.out.println("4. Triangle.");
      System.out.println("0. Exit.");
      System.out.print("Enter your choice: ");
      choice = sc.nextInt();

      switch (choice) {
      case 1:
        shape.circle();
        break;
      case 2:
        shape.square();
        break;
      case 3:
        shape.rectangle();
        break;
      case 4:
        shape.triangle();
        break;
      case 0:
        System.out.println("Exiting..");
        break;
      default:
        System.out.println("Invalid Entry.");
      }

    } while (choice != 0);
    sc.close();
  }
  void circle() {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the radius: ");
    float r = sc.nextFloat();
    double result = circle(r);
    System.out.println("Area of the circle is: " + result);
  }
  void square() {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the length of side: ");
    float a = sc.nextFloat();
    double result = square(a);
    System.out.println("Area of the square is: " + result);
  }
  void rectangle() {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the length : ");
    float l = sc.nextFloat();
    System.out.print("Enter the width : ");
    float w = sc.nextFloat();
    double result = rectangle(l, w);
    System.out.println("Area of the rectangle is: " + result);
  }
  void triangle() {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the height : ");
    float h = sc.nextFloat();
    System.out.print("Enter the base : ");
    float b = sc.nextFloat();
    double result = triangle(h, b);
    System.out.println("Area of the triangle is: " + result);
  }
}
class Area {
  double circle(float r) { return 3.14 * r * r; }
  double square(float a) { return a * a; }
  double rectangle(float l, float w) { return l * w; }
  double triangle(float h, float b) { return (h * b) / 2; }
}
