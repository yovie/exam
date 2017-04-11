package com.zamus.file;

import java.io.File;

public class FilePermission {

	public static void main(String[] args){
		String fn = "tmp.class";
		String workingDir = System.getProperty("user.dir");
		fn = workingDir + File.separator + fn;
		
		File F = new File(fn);
		if(F.exists()){
			System.out.println("read " + F.canRead());
			System.out.println("write " + F.canWrite());
			System.out.println("exec " + F.canExecute());
			F.setReadable(false);
			F.setWritable(false);
			F.setExecutable(false);
			System.out.println("read " + F.canRead());
			System.out.println("write " + F.canWrite());
			System.out.println("exec " + F.canExecute());
		}
	}
}
