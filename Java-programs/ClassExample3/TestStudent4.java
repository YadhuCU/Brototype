// Object and Class Example: Initialization through Methods

class Student {
  int id;
  String name;

  void insertRecord(int r, String n) {
    id = r;
    name = n;
  }
  void displayRecord() { System.out.println(id + " " + name); }
}

class TestStudent4 {
  public static void main(String arg[]) {
    Student s1 = new Student();
    Student s2 = new Student();

    s1.insertRecord(99, "Yadhukrishna CU");
    s2.insertRecord(66, "Toxin");

    s1.displayRecord();
    s2.displayRecord();
  }
}
