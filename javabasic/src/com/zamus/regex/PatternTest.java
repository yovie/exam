package com.zamus.regex;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class PatternTest {
	
	private static final String USERNAME_PATTERN = "^[a-z0-9_-]{3,15}$";

	public static void main(String[] args){
		Pattern pattern  = Pattern.compile(USERNAME_PATTERN);
		Matcher match = pattern.matcher("jokobodo");
		System.out.print(match.matches());
	}
}