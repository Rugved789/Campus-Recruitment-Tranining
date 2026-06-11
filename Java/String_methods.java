public class String_methods {
    public static void main(String[] args) {
        String str1 = "Rugved";
        // String str2 = "Rugved";
        String str2 = new String("Rugved");

        // if(str1==str2){
        //     System.out.println("Same");
        // }
        // else{
        //     System.out.println("Not same");
        // }
        System.out.println(str1.length());
        System.out.println(str1.toLowerCase());
        System.out.println(str1.toUpperCase());
        System.out.println(str1.charAt(2));
        System.out.println(str1.equals(str2));
        System.out.println(str1 == str2);

        for(int i = str1.length()-1;i>=0;i--)
            System.out.print(str1.charAt(i));
        System.out.println();

        String str3 = new StringBuffer(str1).reverse().toString();
        System.out.println(str3);
        
    }
}
