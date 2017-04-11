package com.zamus.file;

import java.io.File;
import java.io.IOException;

public class FilePath {

	public static void main(String[] args) throws IOException{
		String fn = "tmp.class";
		String workingDir = System.getProperty("user.dir");
		System.out.println(workingDir);
		System.out.println(File.pathSeparator);
		System.out.println(File.separator);
		System.out.println(File.pathSeparatorChar);
		
		fn = workingDir + File.separator + fn;
		File F = new File(fn);
		if(F.createNewFile()){
			System.out.println("file created");
		}else{
			System.out.println("file already exists");
		}
		
		String absolutePath = F.getAbsolutePath();
		System.out.println(absolutePath);
		
		String osName = System.getProperty("os.name");
		System.out.println(osName);
	}
}
