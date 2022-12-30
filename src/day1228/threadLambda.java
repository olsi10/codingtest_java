package day1228;

import java.util.Timer;

public class threadLambda {
    public static void main(String[] args) {

        // 람다식
        new Thread( () -> {
            while(true) {
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    throw new RuntimeException(e);
                }
                System.out.println("beep");
            }
        }).start();

//        Timer t = new Timer(1000, event -> System.out.println("bepp"));
//        t.start();

        // 일반 방법
//        new Thread(new Runnable() {
//            @Override
//            public void run() {
//                try {
//                    Thread.sleep(1000);
//                } catch (InterruptedException e) {
//                    throw new RuntimeException(e);
//                }
//                System.out.println("beep");
//            }
//        }).start();
    }
}
