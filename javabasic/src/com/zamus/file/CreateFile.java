package com.zamus.file;

import java.io.File;
import java.io.IOException;

public class CreateFile {
	
	public static void main(String[] args) throws IOException{
		File file = new File("/home/yovie/Temporary/tmp.java");
		if(file.createNewFile()){
			System.out.println("file created");
		}else{
			System.out.println("file already exists");
		}
	}
}