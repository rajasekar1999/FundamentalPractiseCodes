package myown;

public class Car extends vehicle {

	public int fuel=0;
	
	public Car(){
		color = null;
		speed = 0;
	}
	
	public Car(String s, int x) {
		super(s, x);
	}
	
	public void setSpeed(int s)
	{
		if(s<65)
		speed = s;
	}
	
	public int refuel(int s) {
		fuel = s;
		return fuel;
	}

	public int checkFuel() {
		System.out.println(fuel);
		return fuel;
	}
	
	public void printDetails() {
		System.out.println("Color: " + color);
		System.out.println("Speed: " + speed);
	}
}
