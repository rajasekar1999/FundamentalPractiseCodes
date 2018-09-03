package myown2;
import java.util.*;

import myown.vehicle;
import myown.Car;
import myown.SportsCar;

public abstract class Test {
	private static Scanner in;
	public static void main(String[] args) {
		in = new Scanner (System.in);
		vehicle car = new Car();
		vehicle sportscar = new SportsCar();
		int ch = 1;
		while(ch!=0) {
			System.out.println("1. Create a vehicle");
			System.out.println("2. Print the details of a vehicle");
			System.out.println("3. Change the properties of a car");
			System.out.println("4. Get properties of a car");
			System.out.println("5. Check the fuel conditions: ");
			int ch1;
			System.out.println("Enter your choice: ");
			ch1 = in.nextInt();
			if(ch1==1) {
				System.out.println("1. Normal Car");
				System.out.println("2. Sports Car");
				System.out.println("Enter the type of the car: ");
				int type = in.nextInt();
				System.out.println("Enter the color of the vehicle: ");
				String color = in.next();
				System.out.println("Enter the speed of the vehicle: ");
				int speed = in.nextInt();
				if(type==1) {
					car.setColor(color);
					car.setSpeed(speed);
				}
				if(type==2) {
					sportscar.setColor(color);
					sportscar.setSpeed(speed);
				}
			}
			if(ch1==3) {
				System.out.println("1. Change speed");
				System.out.println("2. Change color");
				int ch2 = in.nextInt();
				if(ch2==1)
				{
					System.out.println("Enter the speed: ");
					int speed = in.nextInt();
					car.setSpeed(speed);
				}
				if(ch2==2)
				{
					System.out.println("Enter the color: ");
					String color = in.nextLine();
					car.setColor(color);
				}
			}
			if(ch1==2) {
				if(car.color!=null) {
					car.printDetails();
				}
				if(sportscar.color!=null) {
					sportscar.printDetails();
				}
			}
			if(ch1==4) {
				System.out.println("1. Get speed");
				System.out.println("2. Get color");
				int ch3 = in.nextInt();
				if(car.color!=null) {
					if(ch3==1)
						System.out.println(car.getSpeed());
					else if(ch3==2)
						System.out.println(car.getColor());
				}
				if(sportscar.color!=null) {
					sportscar.printDetails();
				}
			}
			if(ch1==5) {
				System.out.println("1. Check Fuel");
				System.out.println("2. Refuel");
				int ch4 = in.nextInt();
				if(car.color!=null) {
					if(ch4==1)
						System.out.println(car.checkFuel());
					if(ch4==2) {
						System.out.println("Enter the fuel amount: ");
						int s = in.nextInt();
						car.refuel(s);
					}
				}
				if(sportscar.color!=null) {
						if(ch4==1)
							System.out.println(sportscar.checkFuel());
						if(ch4==2) {
							System.out.println("Enter the fuel amount: ");
							int s = in.nextInt();
							sportscar.refuel(s);
						}	
					}
				}
			System.out.println("Do you want to continue? (1/0): ");
			ch = in.nextInt();
		}
	}
}