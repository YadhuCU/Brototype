import java.util.Scanner;
class Student {
  String name;
  static String school = "ABC School";
  int grade;
  int mark;

  Student(String name, int grade, int mark) {
    this.name = name;
    this.grade = grade;
    this.mark = mark;
  }
  public String getName() { return name; }
  public boolean isPassed() { return mark >= 50; }
  public void displayDetails() {
    System.out.println("Name: " + name);
    System.out.println("School: " + school);
    System.out.println("Grade: " + grade);
    System.out.println("Mark: " + mark);
    System.out.println("Result Status: " + (isPassed() ? "Passed" : "Failed"));
  }
}

public class StudentDetails {
  private static Student[] students = new Student[10];
  private static int numStudents = 0;

  public static void main(String arg[]) {
    int choice;
    Scanner sc = new Scanner(System.in);

    do {
      System.out.println("1. Add student");
      System.out.println("2. Search student");
      System.out.println("3. Display all students");
      System.out.println("4. Exit");
      System.out.print("Enter your choice: ");
      choice = sc.nextInt();

      switch (choice) {
      case 1:
        addStudent();
        break;
      case 2:
        findStudent();
        break;
      case 3:
        displayAllStudents();
        break;
      case 4:
        System.out.print("Exiting...");
        break;
      default:
        System.out.print("Invalid Option.");
        break;
      }

    } while (choice != 4);
  }
  public static void addStudent() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Student Name: ");
    String name = sc.nextLine();

    System.out.println("Enter Student Grade: ");
    int grade = sc.nextInt();

    System.out.println("Enter Student Mark: ");
    int mark = sc.nextInt();

    Student s = new Student(name, grade, mark);
    students[numStudents++] = s;

    System.out.println("Student added successfully. ");
  }
  public static void findStudent() {
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter student name: ");
    String name = sc.nextLine();
    boolean found = false;

    for (int i = 0; i < numStudents; i++) {
      if (students[i].getName().equals(name)) {
        students[i].displayDetails();
        found = true;
        break;
      }
      if (!found) {
        System.out.println("Student not found.");
      }
    }
  }
  public static void displayAllStudents() {
    for (int i = 0; i < numStudents; i++) {
      students[i].displayDetails();
      System.out.println("_________________________");
    }
  }
}
