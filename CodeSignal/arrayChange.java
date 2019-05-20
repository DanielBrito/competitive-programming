/* https://app.codesignal.com/arcade/intro/level-4/xvkRbxYkdHdHNCKjg */

public class arrayChange {

    public static void main(String[] args) {
        
        int[] array = {3122, -645, 2616, 13213, -8069};
        int sum=0, temp;
        
        for(int i=0; i<array.length-1; i++) {
            
            if(array[i+1]<=array[i]) {
                
                temp = array[i+1];
                
                array[i+1] = array[i+1]+((Math.abs(array[i]-array[i+1]))+1);
                
                sum = sum + Math.abs(array[i]-temp)+1;
            }
        }
        
        System.out.println(sum);
    }
}
