class MyThread extends Thread
{
	public void run()
	{
		for(int i=0;i<10;i++)
		{System.out.println("Child Thread");}
	}
}
public class Test
{public static void main(String arg[])
	{MyThread t=new MyThread();
	 t.start();
      	for(int i=0;i<10;i++)
		{System.out.println("Main Thread");}

	 }
}