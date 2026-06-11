class Student{
    int rollno;
    String name;
    String branch;
}
public class ClassesAndObjects {
    public static void main(String[] args) {
        Student std1 = new Student();
        std1.name = "Rugved";
        std1.rollno=51;
        std1.branch="CSE";

        System.out.println(std1.name + " " +std1.rollno + " " + std1.branch);
    }
}