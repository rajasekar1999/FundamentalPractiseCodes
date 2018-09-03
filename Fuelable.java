package myown;

public class Fuelable extends Car {

	public Fuelable(String s, int x) {
		super(s, x);
	}
	
	public int refuel(int s) {
		fuel = s;
		return fuel;
	}

	public int checkFuel() {
		System.out.println(fuel);
		return fuel;
	}

}
