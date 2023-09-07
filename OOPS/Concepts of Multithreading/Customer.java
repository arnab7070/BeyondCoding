class Bus implements Runnable {
    int available = 2, passenger;
    Bus(int passenger){
        this.passenger = passenger;
    }
    public synchronized void run() {
        String name = Thread.currentThread().getName();
        if(available >= passenger) {
            System.out.println(name+" Seat Reserved.");
            available-=passenger;
        }
        else {
            System.out.println("Sorry! Seat not available.");
        }
    }
}

class Customer {
    public static void main(String[] args) {
        Bus r = new Bus(1);
        Thread t1 = new Thread(r);
        Thread t2 = new Thread(r);
        Thread t3 = new Thread(r);
        t1.setName("Arnab");
        t2.setName("Bornob");
        t3.setName("Sornob");
        t1.start();        
        t2.start();
        t3.start();
    }

}
