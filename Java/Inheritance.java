public class Inheritance {
    public static void main(String[] args) {
        Animal[] animals = {
            new Dog("Rex", "German Shepherd"),
            new Cat("Whiskers", 9)
        };

        for (Animal a : animals) {
            System.out.println(a.getInfo());
            a.speak();
            System.out.println();
        }

        // Demonstrate upcast + downcast
        Animal a = new Dog("Buddy", "Labrador");
        if (a instanceof Dog) {
            Dog d = (Dog) a;
            System.out.println("Downcasted dog breed: " + d.getBreed());
        }
    }
}

abstract class Animal {
    protected String name;

    public Animal(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public abstract void speak();

    public String getInfo() {
        return getClass().getSimpleName() + " named " + name;
    }
}

class Dog extends Animal {
    private String breed;

    public Dog(String name, String breed) {
        super(name);
        this.breed = breed;
    }

    public String getBreed() {
        return breed;
    }

    @Override
    public void speak() {
        System.out.println(getName() + " says: Woof! I'm a " + breed + ".");
    }
}

class Cat extends Animal {
    private int lives;

    public Cat(String name, int lives) {
        super(name);
        this.lives = lives;
    }

    @Override
    public void speak() {
        System.out.println(getName() + " says: Meow! I have " + lives + " lives left.");
    }
}
