package day1230;

import java.util.*;
// https://school.programmers.co.kr/learn/courses/30/lessons/42746

public class maxNum {
    public String solution(int[] numbers) {
        String answer = "";
        int charCnt = 0;

        // 주어진 수로 가장 큰 수를 만들어서 넣을 배열 생성
        String[] arr = new String[numbers.length];

        // numbers의 정수 타입 원소들을 arr 배열에 문자열 타입으로 하나씩 삽입
        for(int i = 0; i < numbers.length; i++) {
            arr[i] = String.valueOf(numbers[i]);
        }

        // 내림차순 정렬, 오름차순 정렬시 -> (n1 + n2)
        Arrays.sort(arr, new Comparator<String>() {
            @Override
            public int compare(String n1, String n2) {
                return (n2 + n1).compareTo(n1 + n2);
            }
        });

        // 문자열 합치기 (내림차순으로 정렬했으므로)
        for(int i = 0 ; i < arr.length; i++) {
            answer += arr[i];
            // 만약 numbers의 모든 원소가 0일 경우
            if(arr[i].equals("0")) {
                charCnt++;
            }
        }
        // numbers의 원소 중 0의 개수가 arr의 길이와 같다면
        // 아무리 합쳐도 최대 수는 0이므로 "0"을 리턴하게 한다.
        if(arr.length == charCnt) {
            return answer = "0";
        }

        return answer;
    }
}
