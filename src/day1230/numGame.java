package day1230;

import java.util.*;
// https://school.programmers.co.kr/learn/courses/30/lessons/12987
public class numGame {
    public int solution(int[] A, int[] B) {
        int answer = 0;

        // 뒤에서 정열하기 때문에 가장 큰 수끼리 비교하게 하기 위해
        // 맨 뒤에 숫자로 지정한다.
        int aidx = A.length - 1;
        int bidx = B.length - 1;

        // 가장 큰 수끼리 비교하게 하기 위해 정렬
        Arrays.sort(A);
        Arrays.sort(B);

        // a의 마지막부터 0까지 (뒤에서 앞으로)
        for(int i = aidx; i >= 0; i--) {
            // 만약 B의 마지막 값이 A의 마지막 값보다 크다면
            if(A[i] < B[bidx]) {
                // B가 이겼으니 승점 answer++
                answer++;
                // B가 이겼으니 한 칸 앞으로 땡기기
                bidx--;
            }
            // 만약 A가 이겼다면
            else {
                // A 한 칸 앞으로 땡기기
                aidx--;
            }
        }

        return answer;
    }
}
