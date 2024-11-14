import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        demonstrateBasicSyntax();
        useOperators();
        makeDecisionWithConditionals();
        demonstrateLoops();
    }
    // Task 1: Demonstrate Basic Syntax and Variable Declarations
    public static void demonstrateBasicSyntax() {
        System.out.println("Task 1: Basic Syntax and Variable Declarations");

        int number = 10;
        double price = 19.99;
        String name = "Geron";
        boolean isStudent = true;

        System.out.println("Number: " + number);
        System.out.println("Price: $" + price);
        System.out.println("Name: " + name);
        System.out.println("Is Student: " + isStudent);
        System.out.println();
    }

    // Task 2: Using Different Operators
    public static void useOperators() {
        System.out.println("Task 2: Using Operators");

        int a = 10;
        int b = 5;

        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        int quotient = a / b;

        System.out.println("Sum: " + sum);
        System.out.println("Difference: " + difference);
        System.out.println("Product: " + product);
        System.out.println("Quotient: " + quotient);

        boolean isEqual = a == b;
        boolean isNotEqual = a != b;
        boolean isGreater = a > b;

        System.out.println("Is Equal: " + isEqual);
        System.out.println("Is Not Equal: " + isNotEqual);
        System.out.println("Is Greater: " + isGreater);

        boolean result = (a > b) && (b > 0);
        System.out.println("Result of (a > b) && (b > 0): " + result);
        System.out.println();
    }

    // Task 3: Conditional Statements
    public static void makeDecisionWithConditionals() {
        System.out.println("Task 3: Conditional Statements");

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        if (number > 0) {
            System.out.println("The number is positive.");
        } else if (number < 0) {
            System.out.println("The number is negative.");
        } else {
            System.out.println("The number is zero.");
        }

        System.out.println();
    }

    // Task 4: Loops and Array Iteration
    public static void demonstrateLoops() {
        System.out.println("Task 4: Loops");

        int[] numbers = {1, 2, 3, 4, 5};

        System.out.println("Using a for loop:");
        for (int i = 0; i < numbers.length; i++) {
            System.out.println("Number: " + numbers[i]);
        }

        System.out.println("\nUsing a while loop:");
        int index = 0;
        while (index < numbers.length) {
            System.out.println("Number: " + numbers[index]);
            index++;
        }
        System.out.println();
    }
}