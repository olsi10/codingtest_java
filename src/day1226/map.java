package day1226;

import com.sun.xml.internal.ws.api.ha.HaInfo;

import java.net.Inet4Address;
import java.util.*;

public class map {
    public static void main(String[] args) {
        Map<String, Integer> people = new HashMap<String, Integer>();

        people.put("a길동", 86);
        people.put("b길동", 96);
        people.put("c길동", 56);

        System.out.println("총 Entity = " + people.size());

        Set<Map.Entry<String, Integer>> set = people.entrySet();
        Iterator<Map.Entry<String, Integer>> it = set.iterator();

        while(it.hasNext()) {
            Map.Entry<String, Integer> e = it.next();
            System.out.println("\t" + e.getKey() + " : " + e.getValue());
        }

        Collection values = people.values();
        Collection keys = people.keySet();
        it = values.iterator();
        Iterator<Map.Entry<String, Integer>> it2 = keys.iterator();
        System.out.println("최고 정수 : " + Collections.max(values) + " 이름 : " + Collections.max(keys));
    }
}
