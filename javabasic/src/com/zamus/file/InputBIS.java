package com.zamus.file;

import java.io.BufferedInputStream;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class InputBIS {

	public static void main(String[] args) {
		String fn = "tmp.class";
		String workingDir = System.getProperty("user.dir");
		fn = workingDir + File.separator + fn;

		File F = new File(fn);
		FileInputStream Fis = null;
		BufferedInputStream Bis = null;
		DataInputStream Dis = null;
		try {
			Fis = new FileInputStream(F);
			Bis = new BufferedInputStream(Fis);
			Dis = new DataInputStream(Bis);

			while (Dis.available() != 0) {
				System.out.println(Dis.readLine());
			}
		} catch (Exception e) {
			e.printStackTrace();
		}finally{
			try{
				Dis.close();
				Bis.close();
				Fis.close();
			}catch(IOException e){
				e.printStackTrace();
			}
		}
	}
}
