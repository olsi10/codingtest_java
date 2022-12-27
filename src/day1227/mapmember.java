package day1227;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

class S {
    int sno;
    String name;


    public S(int sno, String name){
        this.sno = sno;
        this.name = name;
    }

}

public class mapmember {
    public static void main(String[] args) {
        Map<String, Integer> m = new HashMap<String, Integer>();

        m.put("1. 홍길동", 90);
        m.put("1. 홍길동", 56);
        m.put("2. 이길동", 78);

        Set<Map.Entry<String, Integer>> s = m.entrySet();

        System.out.println("총 Entry = " + m.size());
        System.out.println(m);

    }
}
