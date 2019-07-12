public class Pair {
	
	int a;
	int b;
	
	public Pair(int a, int b) {
		
		this.a = a;
		this.b = b;
	}
	
	public static Pair cons(int a, int b) {
		
		return new Pair(a, b);
	}
	
	public static int car(Pair p) {
		
		return p.a;
	}
	
	public static int cdr(Pair p) {
		
		return p.b;
	}
}
