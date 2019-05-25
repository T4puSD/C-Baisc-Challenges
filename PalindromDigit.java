import java.util.*;

class PalindromDigit{

	static boolean isPalindrom(int x){
		String s = String.valueOf(x);
		//System.out.println(s);
		//int l = s.length()-1;
		boolean status = true;

		for(int i=0;i<s.length()/2;i++){
			if(s.charAt(i) == s.charAt(s.length()-1-i)){
				//System.out.println("ture"+s.charAt(i));
				status = true;
			} else{
				//System.out.println("false");
				//status = false;
				return false;
			}
		}
		return true;
	}
	public static void main(String[] args) {
		int x = 110011;
		System.out.println(isPalindrom(x));
	}
}