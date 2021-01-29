public class BankAccount {
    private int balance;
    private Person owner;

    public BankAccount(int pBalance) {
        if(pBalance < 0) this.balance = 0;
        else this.balance = pBalance;
    }

    public BankAccount(Person pOwner) {
        this.owner = pOwner;
        this.balance = 0;
    }

    public BankAccount(int pBalance, Person pOwner) {
        if(pBalance < 0) this.balance = 0;
        else this.balance = pBalance;
        this.owner = pOwner;
    }

    // 파라미터 : 입금할 액수(정수)
    // 리턴 : 성공여부(불린)
    boolean deposit(int amount) {
        if(amount < 0 || balance < amount){
            System.out.println("입금 실패입니다. 잔고: "+owner.getAccount().balance+"원, 현금: "+owner.getCashAmount()+"원");
            return false;
        }else{
            owner.setCashAmount(owner.getCashAmount()-amount);
            owner.getAccount().balance += amount;
            System.out.println(amount+"원 입금하였습니다. 잔고: "+owner.getAccount().balance+"원, 현금: "+owner.getCashAmount()+"원");
            return true;
        }
    }

    // 파라미터 : 출금할 액수(정수)
    // 리턴 : 성공여부(린)ㅡ
    boolean withdraw(int amount) {
        // 2. write code here
        if(amount < 0 || balance < amount){
            System.out.println("출금 실패입니다. 잔고: "+owner.getAccount().balance+"원, 현금: "+owner.getCashAmount()+"원");
            return false;
        }else{
            owner.getAccount().balance -= amount;
            owner.setCashAmount(owner.getCashAmount()+amount);
            System.out.println(amount+"원 출금하였습니다. 잔고: "+owner.getAccount().balance+"원, 현금: "+owner.getCashAmount()+"원");
            return true;
        }
    }

    // 첫 번째 파라미터: 받는 사람 (Person)
    // 두 번째 파라미터: 이체할 금액 (정수)
    // 리턴 : 성공여부 (불린)
    public boolean transfer(Person to, int amount) {
        boolean success;

        if (amount < 0 || amount > balance) {
            success = false;
        } else {
            owner.getAccount().setBalance(owner.getAccount().getBalance() - amount);
            to.getAccount().setBalance(to.getAccount().getBalance() + amount);
            success = true;
        }

        // 결과값 출력
        System.out.println(success + " - from: " + owner.getName()
                + ", to: " + to.getName()
                + ", amount: " + amount
                + ", balance: " + balance);

        return success;
    }

    // 첫 번째 파라미터: 받는 사람의 계정 (BankAccount)
    // 두 번째 파라미터: 이체할 금액 (정수)
    // 리턴 : 성공여부 (불린)
    public boolean transfer(BankAccount to, int amount) {
        boolean success;

        if (amount < 0 || amount > balance) {
            success = false;
        } else {
            owner.getAccount().setBalance(owner.getAccount().getBalance() - amount);
            to.setBalance(to.getBalance() + amount);
            success = true;
        }

        // 결과값 출력
        System.out.println(success + " - from: " + owner.getName()
                + ", to: " + to.getOwner().getName()
                + ", amount: " + amount
                + ", balance: " + balance);

        return success;
    }


    public void setBalance(int balance) {
        this.balance = balance;
    }

    public int getBalance() {
        return this.balance;
    }

    public void setOwner(Person owner) {
        this.owner = owner;
    }

    public Person getOwner() {
        return this.owner;
    }
}
