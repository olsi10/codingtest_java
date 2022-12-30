package day1230;

import java.util.*;

// https://school.programmers.co.kr/learn/courses/30/lessons/42748

public class kNum {
    public static int[] solution(int[] array, int[][] commands) {

        // commands의 길이만큼 수를 잘라서 뽑아내므로
        int[] answer = new int[commands.length];

        for(int i = 0; i < commands.length; i++) {
            int[] temp = new int[commands[i][1] - (commands[i][0] - 1)];

            for(int j = 0; j < temp.length; j++) {
                temp[j] = array[j + (commands[i][0] - 1)];
            }

            Arrays.sort(temp);
            answer[i] = temp[commands[i][2] - 1];
        }


        return answer;
    }

    public static void main(String[] args) {
        int[] array = {1,5,2,6,3,7,4};
        int[][] commands = {{2,5,3}, {4,4,1}, {1,7,3}};
        int[] k = solution(array, commands);
    }
}
