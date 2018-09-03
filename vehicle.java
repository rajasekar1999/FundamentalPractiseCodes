package myown;

public abstract class vehicle implements properties {
	public String color;
	public int speed;
	public int fuel;
	
	vehicle(){
		color = null;
		speed = 0;
	}
	
	vehicle(String s, int x){
		color = s;
		speed = x;
	}
	public String getColor() {
		return color;
	}
	public void setColor(String s) {
		color = s;
	}
	public int getSpeed() {
		return speed;
	}
	public void setSpeed(int s) {
		speed = s;
	}
	
	public void printDetails() {
		System.out.println("Color: " + color);
		System.out.println("Speed: " + speed);
	}

	public int checkFuel() {
		System.out.println(fuel);
		return fuel;
	}
	
	public int refuel(int s) {
		fuel = s;
		return fuel;
	}

}
