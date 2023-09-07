package arnab;
// to compile a package we need to run the command javac -d . Package.java
class Package {
    /*
        A package arrange number of classes, interfaces, and sub-packages of same type into a particular group
        Note: Package is nothing but folder in windows
        There are two types of package

        1. Pre-Defined: (this packages are already created by java developers)
            -> java.lang: heart of the java because without using this package we cannot write single code of java. no need to import this package by default it is imported on a java program.
            -> java.util: this package is used to implement data structure of java. It contain utility classes also know as collection framework.
            -> java.io: This package is very useful to perform input output operations on file
            -> java.applet: This package mainly used to develop GUI related application. Applet programs are web related program created at server but executed at client machine.
            -> java.awt: awt stands for abstract window toolkit. It also used to develop GUI application. The difference is, it is a stand alone program & it contain main() unlike applet.
            -> java.net: if we are working with networking related programs then we use this package.
            -> java.SQL: it is used to work with database related workings.
            -> javax.swing: it is also used for building GUI related applications. It is platform independent.

        2. User-Defined: (this packages which are created by java programmer or user for their own use)
            -> package p1
            -> package add
            -> package mypack
        Access Modifier & their relationship with packages:
        ------------------------------------------------------------------------------------------------------------------
        Access Modifier         Within Class        Within Package       Outside package by subclass      Outside package
        ------------------------------------------------------------------------------------------------------------------
        private                     ✔                     X                        X                           X
        default                     ✔                    ✔                        X                           X
        protected                   ✔                    ✔                        ✔                          X
        public                      ✔                    ✔                        ✔                          ✔

        Advantages of using package:
        -----------------------------
        1. Reusabilty
        2. Security
        3. Fast Searching
        4. Naming Conflict
        5. Hiding

        Disadvantages of using package:
        --------------------------------
        1. We cannot pass parameters to packages.

    
    */

    private void show() {
        System.out.println("Hello World...");
    }
    public static void main(String[] args) {
        Package p = new Package();
        p.show();
    }
}