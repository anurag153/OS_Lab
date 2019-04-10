class MyThread implements Runnable
{ public void run()
	{for(int i=0;i<10;i++)
		System.out.println("Child Thread");
	}
}
public class ThreadDemo 
{
	public static void main(String arg[])
	{
		MyThread t=new MyThread();
		Thread t1=new Thread(t);
		t1.start();
		for(int i=0;i<10;i++)
		 System.out.println("Main Thread");
	}
}