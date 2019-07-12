public class Cons {
	
	int a;
	int b;
	
	Cons(int a, int b){
		
		this.a = a;
		this.b = b;
	}
	
	public int getFirst() {
		
		return a;
	}
	
	public int getLast() {
		
		return b;
	}
	
	public static int car(Cons pair) {
		
		return pair.getFirst();
	}
	
	public static int cdr(Cons pair) {
		
		return pair.getLast();
	}
}