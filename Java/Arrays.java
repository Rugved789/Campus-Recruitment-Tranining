public class Arrays {
    public static void main(String[] args) {
            int arr[] = {1,45,5,15,52};
            int max=arr[0];

            for(int i=0;i<arr.length;i++){
                if(arr[i]>max){
                    max=arr[i];
                }
            }
        System.out.println("First Higest:"+max);
        
        int sec_max = arr[0];
        for(int i=0;i<arr.length;i++){
                if(arr[i]>sec_max && arr[i]<max ){
                    sec_max=arr[i];
                }
        
        }
        System.out.println("Second Higest:"+sec_max);

    }
}
