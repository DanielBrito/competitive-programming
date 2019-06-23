/* https://app.codesignal.com/challenge/3BmaKTkLopdvbMDtr */

import java.util.Stack;

public class chessNotation {

	public static void main(String[] args) {
		
		String notation = "8/n2Q3R/8/8/2k3N1/2b1r2q/2B5/8";
		String output = "6n1/8/1Bbk4/6Q1/2r5/8/3N4/2q3R1";
		
		System.out.println(ChessNotation(notation).equalsIgnoreCase(output));
	}
	
	public static String ChessNotation(String notation) {
		
		char[][] board = new char[8][8];
		String resultNotation = "";
		int col=7, row=0;
		
		for(char ch: notation.toCharArray()) {
			
			if(ch!='/') {
				
				if(Character.isAlphabetic(ch)) {
					
					board[row++][col] = ch;
				}
				else {
					
					for(int j=0; j<ch-'0'; j++) {
						
						board[row++][col] = '1';
					}
				}
			}
			else {	
				
				col--;
				row=0;
			}
		}
		
		Stack<Character> stack = new Stack<Character>();
		
		char position;
		int number=0;
		
		for(int i=0; i<8; i++) {
			
			for(int j=0; j<8; j++) {
				
				position = board[i][j];
				
				if(Character.isAlphabetic(position)) {
					
					stack.push(position);
				}
				else {
					
					number = Character.getNumericValue(position);
					
					if(!stack.isEmpty()) {
						
						char temp = stack.pop();
						
						if(Character.isDigit(temp)) {
							
							number += Character.getNumericValue(temp);					
							stack.push((char)(number+'0'));
						}
						else {
							
							stack.push(temp);
							stack.push((char)(number+'0'));
						}
					}
					else {
						
						stack.push((char)(number+'0'));
					}
					
				}
			}
			
			if(i<7) stack.push('/');
		}
		
		while(!stack.isEmpty()) {
			
			resultNotation += stack.pop();
		}
		
		return new StringBuffer(resultNotation).reverse().toString();
	}
	
	public static void printBoard(char[][] board) {
		
		for(int i=0; i<8; i++) {
			
			for(int j=0; j<8; j++) {
				
				System.out.print("[" + board[i][j] + "]");
			}
			
			System.out.println();
		}
	}
}
