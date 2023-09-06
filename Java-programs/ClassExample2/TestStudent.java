// Ojects and Class Example: Initialization through reference
class Student {
  // class fields
  int id;
  String name;
}

class TestStudent {
  public static void main(String arg[]) {

    // creating objects
    Student s1 = new Student();
    Student s2 = new Student();

    // storing data through reference variable
    s1.id = 101;
    s1.name = "Yadhukrishna CU";

    s2.id = 102;
    s2.name = "Toxin";

    System.out.println(s1.id);
    System.out.println(s1.name);

    System.out.println(s2.id);
    System.out.println(s2.name);
  }
}
