package day1226;

import java.util.Arrays;

public class arraysort {
    public static void main(String[] args) {
        int[] arr = {3, 2, 0, 1, 4};
        int idx = Arrays.binarySearch(arr, 2); // 잘못된 결과 idx = -5
        System.out.println(idx);

        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
        idx = Arrays.binarySearch(arr, 2); // 잘못된 결과  idx = 2;

        String[] name = {"a", "b", "c", "e", "d"};
        Arrays.toString(name);
        idx = Arrays.binarySearch(name, "d");
        System.out.println(idx);

    }
}