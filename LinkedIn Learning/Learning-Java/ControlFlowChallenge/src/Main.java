import java.util.Scanner;

public class Main {

    public static void main(String args[]) {
        String question = "Which of these is a true statement?";
        String choiceOne = "Java is an Object Oriented Language.";
        String choiceTwo = "We never declare a class in Java.";
        String choiceThree = "Java is easier to code on than Python.";

        String correctAnswer = choiceTwo;

        // Write a print statement asking the question
        System.out.println(question);
        // Write a print statement giving the answer choices
        System.out.println(choiceOne + "\n" + choiceTwo + "\n" + choiceThree);

        // Have the user input an answer
        Scanner in = new Scanner(System.in);
        // Retrieve the user's input
        String ans = in.next();

        // If the user's input matches the correctAnswer...
        if (ans.equals(correctAnswer)) {
            System.out.println("Congratulation!");
        }
        // then the user is correct and we want to print out a congrats message to the user.

        // If the user's input does not match the correctAnswer...
        else {
            System.out.println("Incorrect.");
        }
        // then the user is incorrect and we want to print out a message saying that the user is incorrect as well as what the correct choice was.

    }

}