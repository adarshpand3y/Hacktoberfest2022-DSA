import java.util.*;

public class compare_two_linked_list {

  public static void main(String[] args) {
    LinkedList<String> s1 = new LinkedList<String>();
    s1.add("Black");
    s1.add("Pink");
    s1.add("White");
    s1.add("Green");
    s1.add("Red");

    LinkedList<String> s2 = new LinkedList<String>();
    s2.add("Red");
    s2.add("Green");
    s2.add("Black");
    s2.add("Orange");

    //comparison output in linked list
    LinkedList<String> s3 = new LinkedList<String>();
    for (String e : s1) s3.add(s2.contains(e) ? "Yes" : "No");
    System.out.println(s3);
  }
}
