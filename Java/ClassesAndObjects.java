class Student{
    private int rollno;
    private String name;
    private String branch;

    // Setter method
    public void setInfo(String name, int rollno, String branch){
        this.name = name;
        this.rollno = rollno;
        this.branch = branch;
    }

    // Getter methods
    public int getRollno(){
        return this.rollno;
    }

    public String getName(){
        return this.name;
    }

    public String getBranch(){
        return this.branch;
    }

    // Combined getter method
    public String getInfo(){
        return "Name:" + this.name + " Roll No:" + this.rollno + " Branch:" + this.branch;
    }
}
public class ClassesAndObjects {
    public static void main(String[] args) {
        Student std1 = new Student();
        std1.setInfo("Rugved", 51, "CSE");

        Student std2 = new Student();
        std2.setInfo("Asha", 52, "ECE");

        Student std3 = new Student();
        std3.setInfo("Karan", 53, "ME");

        Student std4 = new Student();
        std4.setInfo("Nisha", 54, "CE");

        Student std5 = new Student();
        std5.setInfo("Vikram", 55, "CSE");

        System.out.println(std1.getInfo());
        System.out.println(std2.getInfo());
        System.out.println(std3.getInfo());
        System.out.println(std4.getInfo());
        System.out.println(std5.getInfo());
    }
}