package day1228;

public class thread {
    public static void main(String[] args) {


        // 일반 방식
        new Thread(new Runnable() {
            @Override
            public void run() {
                System.out.println("스레드 실헹");
            }
        }).start();

        // 람다 방식
        new Thread( () -> System.out.println("스레드 실행")).start();
    }
}