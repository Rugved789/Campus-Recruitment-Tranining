public class reverse {
    public static void main(String[] args) {
        Integer num = 122;
        String str = Integer.toString(num);
        System.out.println(str);
        String str2 = new StringBuffer(str).reverse().toString();
        System.out.println(str2);
        if(str.equals(str2)){
            System.out.println(num +" is Pallindrome");
        }
        else{
            System.out.println(num+ " is Not Pallindrome");
        }
    }
    
}
