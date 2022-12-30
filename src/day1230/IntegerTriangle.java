package day1230;

public class IntegerTriangle {
    public int solution(int[][] triangle) {
        int answer = 0;

        // 트리의 행만큼, 첫 번째 인덱스부터 반복이 시작되므로 i = 1
        for(int i = 1; i < triangle.length; i++){
            // 트리의 해당 행의 열만큼
            for(int j = 0; j < triangle[i].length; j++){
                if(j == 0) {

                    triangle[i][j] = triangle[i][j] + triangle[i-1][j];

                } else if (i == j){
                    triangle[i][j] = triangle[i][j] + triangle[i-1][j-1];
                } else {
                    // 내 윗줄에 왼쪽 값
                    int left = triangle[i][j] + triangle[i-1][j-1];
                    // 내 윗줄에 오른쪽 값
                    int right = triangle[i][j] + triangle[i-1][j];
                    // 둘 중에 큰 값 넣기
                    triangle[i][j] = Math.max(left, right);
                }
                answer = Math.max(answer, triangle[i][j]);
            }
        }
        return answer;
    }
}
