public class Person {
    private String name;
    private int age;
    private int cashAmount; //보유 현금
    private BankAccount account; //보유 계좌

    public Person(String pName, int pAge) {
        this.name = pName;
        if(pAge < 0) this.age = 12;
        else this.age = pAge;
    }

    public Person(String pName, int pAge, int pCashAmount) {
        this.name = pName;
        if(pAge < 0) this.age = 12;
        else this.age = pAge;
        if(pCashAmount < 0) this.cashAmount = 0;
        else this.cashAmount = pCashAmount;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getAge() {
        return age;
    }

    public int getCashAmount() {
        return cashAmount;
    }

    public void setCashAmount(int cashAmount) {
        this.cashAmount = cashAmount;
    }

    public BankAccount getAccount() {
        return account;
    }

    public void setAccount(BankAccount account) {
        this.account = account;
    }

    // 첫 번째 파라미터: 받는 사람 (Person)
    // 두 번째 파라미터: 이체할 금액 (정수)
    // 리턴 : 성공여부 (불린)
    public boolean transfer(Person to, int amount) {
        boolean success;

        if (amount < 0 || amount > this.getAccount().getBalance()) {
            success = false;
        } else {
            this.getAccount().setBalance(this.getAccount().getBalance() - amount);
            to.getAccount().setBalance(to.getAccount().getBalance() + amount);
            success = true;
        }

        System.out.println(success + " - from: " + this.getName()
                + ", to: " + to.getName()
                + ", amount: " + amount
                + ", balance: " + this.getAccount().getBalance());

        return success;
    }

    public boolean transfer(BankAccount to, int amount) {
        boolean success;

        if (amount < 0 || amount > this.getAccount().getBalance()) {
            success = false;
        } else {
            this.getAccount().setBalance(this.getAccount().getBalance() - amount);
            to.setBalance(to.getBalance() + amount);
            success = true;
        }

        System.out.println(success + " - from: " + this.getName()
                + ", to: " + to.getOwner().getName()
                + ", amount: " + amount
                + ", balance: " + this.getAccount().getBalance());

        return success;
    }

}
