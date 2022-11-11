/**
 * ClassConcepts
 */
class Student{
    int roll;
    String name;
    String department;
}
//In one file only on public class can reside & file name should be of Public Class Name
public class ClassConcepts {

    public static void main(String[] args) {
        Student st1 = new Student(); //st1 object created
        //We are assigning values to the object created
        st1.name = "Arnab";
        st1.department = "CSE";
        st1.roll = 81;
        System.out.println(st1.department + "->" + st1.name + "->" + st1.roll);
    }
}