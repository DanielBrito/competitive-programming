// Skills verification (Java)

import java.util.*;
import java.util.regex.*;

class Parser{
    public boolean isBalanced(String s){
        
        Stack<Character> stack = new Stack<Character>();
        char top;
        
        for(int i=0; i<s.length(); i++){
            
            if(s.charAt(i)=='{' || s.charAt(i)=='('){
                
                stack.add(s.charAt(i));
            }
            
            if(s.charAt(i)=='}' || s.charAt(i)==')'){
                
                if(stack.size()>0){
                    
                    top = stack.pop();
                }
                else{
                    
                    return false;
                }                
                
                if((top=='{' && s.charAt(i)!='}') || (top=='(' && s.charAt(i)!=')')){
                    
                    return false;
                }
            }
        }
        
        return stack.size()==0 ? true : false;
    }
}
class Solution {
	
	public static void main(String[] args) {
		Parser parser = new Parser();
        
		Scanner in = new Scanner(System.in);

		while (in.hasNext()) {
			System.out.println(parser.isBalanced(in.next()));
		}
        
		in.close();
	}
}
