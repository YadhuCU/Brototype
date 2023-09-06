// real world example for class;

class Account {

  int accountNumber;
  String name;
  float amount;

  // account creation
  void creatAccount(int a, String c, float b) {
    accountNumber = a;
    name = c;
    amount = b;
    System.out.println("Account created succesfully. Welcome " + name);
  }

  // add money
  void addMoney(float a) {
    amount += a;
    System.out.println(a + " added succesfully. Balance is " + amount);
  }

  void withdraw(float a) {
    if (amount < a) {
      System.out.println("Insuficiant Balance.");
    } else {
      amount -= a;
      System.out.println(a + " withdrawed succesfully. Balance is " + amount);
    }
  }
  void checkBalance() { System.out.println("Account Balance is " + amount); }
  void display() {
    System.out.println(accountNumber + " " + name + " " + amount);
  }
}

class TestAccount {
  public static void main(String arg[]) {
    Account employee = new Account();
    employee.creatAccount(293383, "Yadhukrishna CU", 1000);
    employee.addMoney(1000);
    employee.withdraw(10023);
    employee.checkBalance();
    employee.display();
  }
}
