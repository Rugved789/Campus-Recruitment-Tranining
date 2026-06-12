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

        Student std2 = new Student();
        std2.name = "Asha";
        std2.rollno = 52;
        std2.branch = "ECE";

        Student std3 = new Student();
        std3.name = "Karan";
        std3.rollno = 53;
        std3.branch = "ME";

        Student std4 = new Student();
        std4.name = "Nisha";
        std4.rollno = 54;
        std4.branch = "CE";

        Student std5 = new Student();
        std5.name = "Vikram";
        std5.rollno = 55;
        std5.branch = "CSE";

        System.out.printf("Name:%s Roll No:%d Branch:%s%n",std1.name,std1.rollno,std1.branch);
        System.out.printf("Name:%s Roll No:%d Branch:%s%n",std2.name,std2.rollno,std2.branch);
        System.out.printf("Name:%s Roll No:%d Branch:%s%n",std3.name,std3.rollno,std3.branch);
        System.out.printf("Name:%s Roll No:%d Branch:%s%n",std4.name,std4.rollno,std4.branch);
        System.out.printf("Name:%s Roll No:%d Branch:%s%n",std5.name,std5.rollno,std5.branch);
    }
}