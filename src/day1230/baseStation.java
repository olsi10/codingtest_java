package day1230;

// Greedy
//https://school.programmers.co.kr/learn/courses/30/lessons/12979
public class baseStation {
    public static int solution(int n, int[] stations, int w) {
        int answer = 0;
        int pos = 1;
        int index = 0;

        // pos가 모든 동을 돈다
        while (pos <= n) {
            // index가 stations의 길이보다 작고 기존의 전파 범위 왼쪽 끝 <= 현재 위치인지
            // -> 전파 범위 내에 있는가
            if (index < stations.length && stations[index] - w <= pos) {
                pos = stations[index] + w + 1;
                index++;
            // 이미 잇으면
            } else {
                ++answer;
                pos += 2 * w + 1;
            }
        }

        return answer;
    }

    public static void main(String[] args) {
        int n = 11;
        int[] stations = {4, 11};
        int w = 1;

        int base1 = solution(n, stations, w);
        System.out.println(base1);
   }
}

