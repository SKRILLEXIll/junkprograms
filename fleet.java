/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		
		int pos[] ={10,8,0,5,3};
		int speed[] = {2,4,1,1,3};
		Stack posstk = new Stack<Integer>();
		Stack spdstk = new Stack<Integer>();
		posstk.push(pos[0]+speed[0]);
		spdstk.push(speed[0]);
		int count=0;
		boolean flag=false;
		int target =12;
		while(true){
		for(int i=1;i<pos.length;i++){
		    if(posstk.peek()>= target){
		        posstk.pop();
		        spdstk.pop();
		    }
		    if(posstk.size() == 1){
		        break;
		    }
		     System.out.println(posstk.peek());
		    if((int)posstk.peek() == pos[i]+speed[i]){
		        posstk.pop();
		        spdstk.pop();
		        
		        count++;
		        System.out.println("hiii");
		    }
		    posstk.push(pos[i]+speed[i]);
		        spdstk.push(speed[i]);
		}}
		System.out.println(count+" "+posstk.size());
	}
}
