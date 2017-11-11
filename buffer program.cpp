import java.io.*;

public class login{
String user,pass;
public static void main(String[] args)throws IOException{
BufferReader in = new Bufferedreader(new InputStreamReader(System.in));
System.out.print("Usename: ");
user=in.reaLine();
System.out.print("Password: ");
pass=in.reaLine();
if(user.equals("Java") && pass.equals("Jedi"))
{
System.out.print("log in OK");
}
else
{
System.out.print("ERROR!");
}
 }
}

