import java.util.Scanner;

public class Main {

  int[][] array;
  int size;

  public static void main(String arg[]) {
    Main program = new Main();
    program.getArray();
    program.displayArray();
  }

  public void getArray() {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the size of array: ");
    size = sc.nextInt();

    array = new int[size][size];

    System.out.println("Enter the valued of array:");
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        array[i][j] = sc.nextInt();
      }
    }
  }

  public void displayArray() {
    System.out.println("Array: ");

    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        System.out.print(array[i][j] + " ");
      }
      System.out.println();
    }
  }
}
