public class OOPs_Concept {

	public static void main(String[] args) {
		Okay one = new Okay();
		one.Display();
		Okay two = new Okay("Shubham", 18);
		two.Display();
		Okay three = new Okay(18);
		three.Display();
		Okay four = new Okay();
		four.setData("Vaibhav", 17);
		four.Display();

	}

}

class Okay {
	private int age;
	private String name;
	int k = 5;

	public Okay() {
		System.out.println("Constructor is running!");
		this.age = 18;
		this.name = "Adult";
	}

	public Okay(String name, int age) {
		this.age = age;
		this.name = name;
	}

	public Okay(int age) {
		this.name = "No Name";
		this.age = age;
	}

	public void setData(String name, int age) {
		this.age = age;
		this.name = name;
	}

	public void Display() {
		k = k + age;
		System.out.println("Name of this person is " + name + " and the age is: " + k);
		System.out.println();
	}
}
