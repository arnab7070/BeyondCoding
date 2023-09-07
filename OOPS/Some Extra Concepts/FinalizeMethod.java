class Database {
    private boolean isConnected = false;

    private Database buildConnection() {
        System.out.println("Database connection established");
        isConnected = true;
        return this;
    }
    
    void insert(int key, String value) {
        if(isConnected) {
            System.out.println("Inserted: "+ key + ": " + value);
        } else {
            System.out.println("Cannot insert. No active database connection.");
        }
    }
    // this is known as finalize method
    void close() {
        if(isConnected) {
            System.out.println("Closing database connection");
            isConnected = false;
        }
    }
    
    void showDatabaseData() {
        Database db = buildConnection();
        db.insert(10, "Arnab");
        db.close();
    }
}

public class FinalizeMethod {
    // finalize is a method which is available in object super class. The purpose of finalize method is to release the
    // resources that is allocated by unused object before removing unused object by garbage collector.
    // finalize method is protected by default
    public static void main(String[] args) {
        Database db = new Database();
        db.showDatabaseData();
    }
}

/*
Difference between final finally and finalize keyword
-------------------------------------------------------------------
final: final means restriction. 
1. final variables must be initialized at the time of declaration. 
2. final methods cannot be overriden
3. final class cannot be inherited into child class

finally: finally is a block
1. it is associated with try-catch block
2. we always write the clean up code in the finally block, it will always execute.

finalize: finalize is a method
1. when we want to release the resource, allocated to the unused object then this method is used
*/