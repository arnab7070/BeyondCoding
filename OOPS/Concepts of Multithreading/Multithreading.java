/*
    Multitasking vs Mutithreading:
        1. Process-Based (Mutiple Program / Multitasking / Time cannot be saved / Working function of task is different)
        2. Thread-Based (Single Program / Multithreading / Time can be saved / Working function of tasks is same)
    What is Multithreading?
    Multithreading is a process to execute multiple threads at the same time without dependency of other threads.
    
    What is Thread?
    Thread is a pre-defined class which is available in java.lang package. Thread is a basic unit of CPU & well-known for independent execution.
    
    How to create Thread in JAVA?
    1. By extending thread class.
    2. By implementing runnable interface.

    What is thread scheduler?
    Thread scheduler is the part of processor which executes multiple threads on a single processor randomly.
    Supports three scheduling algorithm
    1. FCFS
    2. SJF
    3. Round Robin

    What is thread life cycle?
    As we know a thread is well known for independent execution. During the life cycle a thread can move different states.
    1. New State (Born)
    2. Runnable State (Ready)
    3. Running State (Execution)
    4. Waiting State (Blocked)
    5. Dead State (Exit)

    What is Sleep method?
    Sleep is a static method of thread class which throws checked exception i.e. InterruptedException. The main purpose of
    sleep method is to put a thread into temporary waiting state. [Example: Thread.sleep(1000)]

    What is Join()?
    The main purpose of join method is to put the thread into temporary wating state, if we want to execute complete any 
    particular thread among all threads available in thread pool. Join method also throw a checked exception i.e. InterruptedException

    What is suspend()?
    The main purpose of the suspend method is to put the thread running state to waiting state.

    What is resume()?
    This method is used to resume a suspended thread from waiting state to runnable state.

    What is yield()?
    This is a method of thread class that allows to run another thread which has same priority by passes its current state.

    What is stop()?
    Stop is a method of thread class which is used to terminate a thread permanently.

    What is isAlive()?
    isAlive() is a pre-defined method of thread class through which we can verify wheather a thread is alive or not.
    Note:
    1. If thread isAlive then it will return true otherwise false.
    2. If we use isAlive method before the start method then it will print false but after the start method it will print true.

    What is interrupt()?
    interrupt() is a method of thread class that is used to interrupt the thread.
    Note:
    If any thread is in sleeping or blocked state then we can easily interrupt the execution of thread by throwing InterruptedException
   
    What is thread priority?
    In java it is possible to assign the priority of thread. by using setPriority() and getPriority() we can assign thread priority.
    Thread class also provides us 3 pre-defined final static variable and its value lie between 1 to 10
    Thread.MIN_PRIORITY = 1
    Thread.NORM_PRIORITY = 5
    Thread.MAX_PRIORITY = 10

    What is Synchronization?
    Multithreading is very good when we want to complete our task as soon as possible, but in some case it may provide some
    wrong results or some corrupted data. This situation occur whenever same resource is accessible by multiple threads at 
    the same time.

    Synchronization is a technique through which we can control multiple threads among the number of threads only one thread
    will enter inside the synchronized area.
    1. method level synchronization
    2. block level synchronization

*/

// By extending thread class
class Test extends Thread {
    public void run() {
        String name = Thread.currentThread().getName();
        for (int i = 0; i < 3; i++) {
            System.out.println("Child Thread of "+name);
            // try {
            //     Thread.sleep(1000);
            // } catch (InterruptedException e) {
            //     System.out.println(e);
            // } 
        }
    }
}

class Thread1 extends Thread {
    public void run() {
        String name = Thread.currentThread().getName();
        for(int i = 0; i < 3; i++){
            System.out.println(name);
            // try {
            //     Thread.sleep(1000);
            // } catch (InterruptedException e) {
            //     e.printStackTrace();
            // }
        }
    }
}

class Thread2 extends Thread {
    public void run() {
        String name = Thread.currentThread().getName();
        for(int i = 0; i < 3; i++){
            System.out.println(name);
            Thread.yield();
        }
    }
}

// By implementing runnable interface
class Test2 implements Runnable {
    @Override
    public void run() {
        for (int i = 0; i < 5; i++) {
            System.out.println("Runnable");
        }
    }
}

public class Multithreading {
    // Simulteneous output
    public static void main(String[] args) {
        // Test t = new Test();
        // Test tt1 = new Test();
        // Test tt2 = new Test();
        // Test2 t2 = new Test2();
        // Thread tr = new Thread(t2);
        // tt1.start();
        // try {
        //     tt1.join(); // Waits for this thread to terminate.
        // } catch (InterruptedException e) {
        //     e.printStackTrace();
        // }
        // t.start();
        // t.suspend(); // depricated
        // tt2.start();
        // t.resume(); // depricated

        // for (int i = 0; i < 5; i++) {
        //     System.out.println("Main Thread");
        // }

        Thread1 t1 = new Thread1();
        Thread2 t2 = new Thread2();
        t1.setName("Thread 1");
        t1.setName("Thread 2");
        // System.out.println(t1.isAlive()); // false
        t1.start();
        // t1.interrupt();
        t2.start();
        // t2.setPriority(Thread.MAX_PRIORITY);
        // t1.setPriority(Thread.MIN_PRIORITY);
        // System.out.println(t1.isAlive()); // true
        // t1.stop(); // depricated
    }
}

/*
 * Output:
 * --------
 * Main Thread
 * Main Thread
 * Child Thread
 * Child Thread
 * Child Thread
 * Child Thread
 * Child Thread
 * Main Thread
 * Main Thread
 * Main Thread
 */
