package day1226;

import java.util.Arrays;

public class sort2 {
    public static void main(String[] args) {
        String[] str = {"a", "1", "가", "A", "3", "나"};
        for(String s : str) System.out.println(s + " "); // 정렬 전

        System.out.println();

        Arrays.sort(str);
        for(String s: str) System.out.println(s + "");
    }
}

// HashMap