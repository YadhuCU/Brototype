class Student {
  int id;
  String name;

  Student(int i, String n) {
    id = i;
    name = n;
  }
  Student(Student s) {
    id = s.id;
    name = s.name;
  }
  void display() { System.out.println(id + " " + name); }
}

class Sample {
  public static void main(String arg[]) {
    Student s1 = new Student(2, "Yadhukrishna cu");
    Student s2 = new Student(s1);

    s1.display();
    s2.display();
  }
}
