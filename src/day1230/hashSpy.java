package day1230;

import java.util.*;
// https://school.programmers.co.kr/learn/courses/30/lessons/42578
public class hashSpy {
        public int solution(String[][] clothes) {
            int clothes_type = 0;

            HashMap<String, Integer> h = new HashMap<>();

            // 1. 옷을 종류별로 구분하기
            // for(int i = 0; i < clothes.length; i++) {
            //     // h 해시맵에 옷 종류(string)와 옷 종류의 개수를 쌍으로 해시맵에 저장.
            //     h.put(clothes[i][0], h.getOrDefault(clothes[i][1], 0) + 1);
            // }
            for(String[] clothe : clothes) {
                String type = clothe[1];
                h.put(type, h.getOrDefault(type, 0) + 1);
            }

            // 2. 입지 않는 경우를 추가하여 모든 조합 계산
            Iterator<Integer> it = h.values().iterator();
            int answer = 1;

            // hasNext() = bool 타입 반환, [참거짓값]
            // next() = 매개변수 혹은 iterator 되는 타입으로 반환, [정수값]
            while(it.hasNext()) {
                answer *= it.next().intValue() + 1;
            }

            // 위에 while문과 같음
            // for(Integer c : h.values) {
            //     answer = answer * (c + 1); // 사용하지 않는 경우 1 추가해 경우해 수 구함
            // }

            return answer - 1;
        }
    }



    // // 의상의 타입 개수
    // for(int i = 0; i < clothes.length; i++) {
    //     for(int j = 0; j < clothes[i].length; j++) {
    //         if(clothes[i][1] != clothes[j][1]) {
    //             // 본인과 비교하는 경우는 넘기기
    //             if(i == 0) continue;
    //             // 타입 개수 ++
    //             else clothes_type++;
    //         }
    //     }
    // }

    // answer = answer *
    // answer = clothes_type;

    // 아무것도 입지 않은 경우도 구해지기 때문에 -1