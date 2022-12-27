package day1227;

import java.util.HashSet;
import java.util.Scanner;

class Member {
    int memberId;
    String memberName;

    public Member(int memberId, String memberName) {
        this.memberId = memberId;
        this.memberName = memberName;
    }

    public int getMemberId() {
        return memberId;
    }

    public void setMemberId(int memberId) {
        this.memberId = memberId;
    }

    public String getMemberName() {
        return memberName;
    }

    public void setMemberName(String memberName) {
        this.memberName = memberName;
    }

    @Override
    public String toString() {
        return "Member{ " +
                "회원 아이디 : " + memberId +
                ", 회원 이름 : '" + memberName + '\'' +
                '}';
    }
}

public class hashsetmember {
    public static void main(String[] args) {
        HashSet<Integer> set = new HashSet<Integer>();

        Scanner sc = new Scanner(System.in);

        System.out.print("회원 이름 : ");
        String name = sc.nextLine();
        System.out.print("회원 아이디 : ");
        int id = sc.nextInt();
        set.add(id);
        Member m1 = new Member(id, name);

        System.out.println("회원 이름 : ");
        String name1 = sc.nextLine();
        System.out.println("회원 아이디 : ");
        int id1 = sc.nextInt();
        set.add(id);
        Member m2 = new Member(id1, name1);

        System.out.println(m1);
        System.out.println(m2);

        System.out.println("아이디 목록 : " + set);
    }
}
