package day1226;

public class foreach {
    public static void main(String[] args) {
        String[] oldStrArr = {"java", "array", "copy"};
        String[] newStrArr = new String[5];

        System.arraycopy(oldStrArr, 0, newStrArr, 0, oldStrArr.length);

//        for(int i = 0; i < newStrArr.length; i++) {
//            System.out.println(newStrArr[i] + ", ");
//        }

        for(String n : newStrArr) {
            System.out.println(n + ", ");
        }
    }
}
