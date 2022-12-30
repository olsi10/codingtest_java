package day1230;

// Greedy
// https://school.programmers.co.kr/learn/courses/30/lessons/42862

import java.util.*;

public class Gymsuit {
    public static int solution(int n, int[] lost, int[] reserver) {
        int answer = 0;


        Arrays.sort(lost);
        Arrays.sort(reserver);

        // 여벌을 가져온 학생이 도난 당한 경우
        for (int i = 0; i < lost.length; i++) {
            for (int j = 0; j < reserver.length; j++) {
                if (lost[i] == reserver[j]) {
                    answer++;
                    lost[i] -= 1;
                    reserver[j] -= 1;
                    break;
                }
            }
        }

        // 체육복을 빌릴 수 있는 범위는
        // 빌려주는 사람의 -1 =< reserver >= +1 이므로
        for (int i = 0; i < lost.length; i++) {
            for (int j = 0; j < reserver.length; j++) {
                if ((lost[i] - 1 == reserver[j] || (lost[i] + 1 == reserver[j]))) {
                    answer++;
                    reserver[j] -= 1;
                    break;
                }
            }
        }
        return answer;
    }

    public static void main(String[] args) {
        int n = 5;
        int[] lost = {2, 4};
        int[] reserver = {1, 3, 5};

        int gym1 = solution(n, lost, reserver);
        System.out.println(gym1);

        n = 5;
        int[] lost1 = {2, 4};
        int[] reserver1 = {3};

        int gym2 = solution(n, lost1, reserver1);
        System.out.println(gym2);
    }
}
