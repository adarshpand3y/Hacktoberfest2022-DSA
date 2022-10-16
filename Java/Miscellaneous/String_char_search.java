// This program is used to find characters in a string

import java.util.Arrays;

public class String_char_search {
    public static void main(String[] args) {
        String n = "deep";
        char t = 'i';
        System.out.println(Arrays.toString(n.toCharArray()));
        System.out.print(find(n, t));
    }

    static boolean find(String n, char t) {
        if (n.length() == 0) {
            return false;
        }
        for (char ch : n.toCharArray()) {
            if (ch == t) {
                return true;
            }
        }
        return false;
    }
}
