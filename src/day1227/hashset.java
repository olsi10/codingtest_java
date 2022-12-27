package day1227;

import java.util.HashSet;

public class hashset {
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<String>();
        
        set.add("Milk");
        set.add("Ham");
        set.add("Ham");
        set.add("Butter");

        System.out.println(set);
        
        if(set.contains("Ham")) System.out.println("Ham 도 있음");
    }
}
