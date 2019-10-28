import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 

public static void takeIn()
{
    // don't accept any & or / as characters

    BufferedReader reader =  new BufferedReader(new InputStreamReader(System.in));
    System.out.println("Enter a name);

    String in = reader.readLine();

    
}