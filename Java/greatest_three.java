public class greatest_three {
    public static void main(String[] args) {
        int num1=10;
        int num2=1;
        int num3=5;

        if(num1>num2 && num1>num3){
            System.out.println("Num1 is greater");
        }
        else if(num2>num1 && num2>num3){
            System.out.println("Num2 is greater");
        }
        else{
            System.out.println("Num3 is greater");
        }
    }
}
