package day1226;

// gpa 오름차순 출력

import java.util.Arrays;

public class sort {

    static class Stucent implements Comparable {
        private String name;
        private double gpa;
        public Stucent(String n, double g) {
            name = n;
            gpa = g;
        }
        public Stucent(String n) {
            name = n;
        }
        public String getName() {
            return name;
        }
        public double getGpa() {
            return gpa;
        }
//        public int compareTo(Object obj) {
//            Stucent other = (Stucent) obj;
//            if(gpa < other.gpa) return -1;
//            else if(gpa > other.gpa) return 1;
//            else return 0;
//        }

        public int compareTo(Object obj) {
            Stucent other = (Stucent) obj; // 형변환
            return (this.name.compareTo(other.name));
        }
    }

//    문자열 비교할 때
//
//    compareTo(Object j) return (this.name.comapreTo(j.name));
//    // j의 name이 크면 양수, 같으면 0, 작으면 음수 리턴
//
        //-----------
//
//    숫자 비교 - 오름차순
//    compareTo(Object j) return (this.id - j.id);
//
//    숫자 비교 - 내림차순
//    compareTo(Object j) return (j.id - this.id);

    public static void main(String[] args) {
        Stucent[] s = new Stucent[3];
        s[0] = new Stucent("ㄷ", 1);
        s[1] = new Stucent("ㄴ", 4);
        s[2] = new Stucent("ㄱ", 3);

        Arrays.sort(s);
        System.out.println("오름차순 출력~~~");
        for(Stucent ss : s) System.out.println("이름 = " + ss.getName() + "학점 = " + ss.getGpa());
    }
}