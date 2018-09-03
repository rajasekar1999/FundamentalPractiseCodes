package myown;

public class SportsCar extends Car {

	public SportsCar() {
		color = null;
		speed = 0;
	}
	
	public SportsCar(String s, int x) {
		super(s, x);
	}

	public void setSpeed(int s) {
		if(s<100)
		speed = s;
	}
}
