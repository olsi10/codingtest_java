package day1230;

import java.util.*;

public class budget {
    public int solution(int[] budgets, int M) {
        int answer = 0;

        // 이분탐색의 조건 : 정렬되어 있어야 함
        Arrays.sort(budgets);

        // 정렬 후 마지막 값
        int max = budgets[budgets.length - 1];
        int min = 0;

        while(min <= max) {
            int mid = (max + min) / 2; // 중앙값
            int sum = 0;

            for(int b : budgets) {
                // budgets 배열 속에 있는 게 중앙값 보다 크면
                if(b > mid) {
                    // 상한값 더함
                    sum += mid;
                }
                else {
                    // budgets 배열 속에 있는 게 중앙값 보다 작으면
                    // 요청한 값 그대로
                    sum += b;
                }
            }

            // 총 예산 지급액보다 적으면 min값을 바꿈
            if(sum <= M) {
                min = mid + 1;
                answer = mid;
            }
            else {
                max = mid - 1;
            }
        }
        return answer;
    }
}
