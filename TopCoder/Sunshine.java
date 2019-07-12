/* https://community.topcoder.com/stat?c=problem_statement&pm=15574 */

public class Sunshine {

	public static void main(String[] args) {
		
		System.out.println(weatherReport(12, 8));
	}
	
	public static String weatherReport(int totalDays, int rainyDays) {
		
		// Array to store the beauty of Peter's holiday;
		char[] beauty = new char[totalDays];
		int b=0;
		
		int sunny, rainy;
		
		// Determines if beauty[] is completely filled
		boolean filled=false;
		
		// Determines the intercalation between sunny and rainy in beauty[]:
		if(totalDays==rainyDays) {
			
			sunny = 0;
			rainy = rainyDays;
		}
		else {
			
			sunny = (int) Math.floor(totalDays/(rainyDays+1));
			rainy = (int) Math.ceil((double)rainyDays/(double)(totalDays-rainyDays));
		}

		// Loop to set the rainy and sunny days based on the previous result:
		while(filled==false) {
			
			for(int i=0; i<sunny && filled==false; i++) {
				
				beauty[b++] = 'S';
				
				if(b==totalDays) filled=true;
			}
			
			for(int i=0; i<rainy && filled==false; i++) {
				
				beauty[b++] = 'R';
				
				if(b==totalDays) filled=true;
			}			
		}
		
		return new String(beauty);
	}
}
