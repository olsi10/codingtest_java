package day1227;

import java.util.HashSet;
import java.util.Scanner;

class Hs {
    String name;

    public Hs(String name) {
        this.name = name;
    }
}

public class hashinput {
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<String>();

        Scanner sc = new Scanner(System.in);

        for(int i = 0; i < 3; i++) {
            System.out.print("추가할 회원의 이름은? : ");
            String value = sc.nextLine();
            set.add(value);
        }



        System.out.print("회원 리스트 : ");
        System.out.print(set);
    }
}
