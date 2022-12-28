package day1227;

public class MyFunctionalInterfaceEx {
    public static void main(String[] args) {
        MyFunctionalInterface f1;

        f1 = () -> {
            String str = "method call1";
            System.out.println(str);
        };
        f1.method();

        f1 = () -> {
            System.out.println("method call2");
        };
        f1.method();

        f1 = () -> System.out.println("method call3");
        f1.method();
    }
}
