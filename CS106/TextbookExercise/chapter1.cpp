/*
 * This program is the solutions of exercise of chapter 01
 * each solution is within a function
 */

#include <iostream>
#include "console.h"
#include "simpio.h"
#include "strlib.h"
using namespace std;

void exer1();
void exer2();
void exer3();
void exer4();
void exer5();
void exer6();
void exer7();
void exer8();
void exer9();
void exer10();
void exer11();

int main() {
    setConsoleSize(700, 400);
    //exer1();
    //exer2();
    //exer3();
    //exer4();
    //exer5();
    //exer6();
    //exer7();
    //exer8();
    //exer9();
    //exer10();
    exer11();
    return 0;
}

/*
1.Write a program that reads in a temperature in degrees Celsius and displays the corresponding temperature in degrees Fahrenheit. The conversion formula is F = C + 32
*/
void exer1() {
    double cels = getDouble("Enter a degress Celsius: ");
    cout << "Convert "
         << cels
         << " to degrees Fahrenheit: "
         << cels + 32 << endl;
}

/*
2.Write a program that converts a distance in meters to the corresponding English distance in feet and inches. The conversion factors you need are
1 inch = 0.0254 meters
1 foot = 12 inches
*/
void exer2() {
    double meter = getDouble("Enter a distance in meters: ");
    /* convert to feet and inches */
    double inch = meter / 0.0254;
    double foot = inch / 12;
    cout << meter << " meters eqaul " << inch << " inches" << endl;
    cout << meter << " meters eqaul " << foot << " feet" << endl;
}

/*
3.As mathematical historians have told the story, the German mathematician Carl Friedrich Gauss (1777–1855) began to show his mathematical talent at a very early age. When he was in elementary school, Gauss was asked by his teacher to compute the sum of the numbers between 1 and 100. Gauss is said to have given the answer instantly: 5050. Write a program that computes the answer to the question Gauss’s teacher posed.
*/
void exer3() {
    /* sum 1 to 100 */
    int sum = 0;
    for (int i = 1; i <= 100; i++)
        sum += i;
    cout <<  "the answer is " << sum << endl;
    /* Gauss' way */
    sum = 100 * 101 / 2;
    cout <<  "the answer is " << sum << endl;
}

/*
4.Write a program that reads in a positive integer N and then calculates and displays the sum of the first N odd integers. For example, if N is 4, your program should display the value 16, which is 1 + 3 + 5 + 7.
*/
void exer4() {
    int n = getInteger("Enter the number of odd integers:");
    int sum = 0;
    for (int i = 1; i < n; i++) {
        int odd = 2*i - 1; // 2*i - 1 to get the odd integers
        cout << odd << " + ";
        sum += odd;

    }
    cout << 2*n -1;
    sum += 2*n -1;
    cout << " = " << sum << endl;
}

/*
5.Write a program that reads in a list of integers from the user until the user enters the value 0 as a sentinel. When the sentinel appears, your program should display the largest value in the list, as illustrated in the following sample run:

Be sure to define the sentinel value as a constant in a way that makes it easy to change. You should also make sure that the program works correctly if all the input values are negative.
*/
void exer5() {
    // for integerToString, we should #include "strlib.h"
    const int sentinel = 0;
    string prompt = "Enter a integer (" +  integerToString(sentinel) + " to quit) :";
    int input = getInteger(prompt);
    int max = input; // store the largest value of each input
    while (input != sentinel) {
        input = getInteger(prompt);
        if (input > max)
            max = input;
    }
    cout << "The largest value is " << max << endl;
}

/*
6.For a slightly more interesting challenge, write a program that finds both the largest and the second-largest number in a list, prior to the entry of a sentinel.

If you once again use 0 as the sentinel, a sample run of this program might look like this:

The values in this sample run are the number of pages in the British hardcover editions of J. K. Rowling’s Harry Potter series. The output therefore tells us that the longest book ( Harry Potter and the Order of the Phoenix) has 766 pages and the second-longest book ( Harry Potter and the Goblet of Fire) weighs in at a mere 636 pages.
*/
void exer6() {
    const int sentinel = 0;
    string prompt = "Enter a integer (" +  integerToString(sentinel) + " to quit) :";
    int max, rmax; // max and the max of remain
    int input = getInteger(prompt);
    if (input == sentinel) {
        cout << "The largest value is " << input << endl;
        return; // quit because first input is sentinel
    } else if (input < sentinel){ // consider second input is sentinel
        max = sentinel;
        rmax = input;
    } else {
        max = input;
        rmax = sentinel;
    }
    while ((input = getInteger(prompt)) != sentinel) {
        if (input > max) {
            rmax = max;
            max = input;
        }
        else if (input > rmax)
            rmax = input;
    }
    cout << "The largest value is " << max << endl;
    cout << "The second-largest value is " << rmax << endl;
}
/* for the case
Enter a integer (-3 to quit) : 0
Enter a integer (-3 to quit) : -3
The largest value is 0
The second-largest value is -3
*/

/*
7.Using the AddIntegerList program from Figure 1-5 as a model, write a program AverageList that reads in a list of integers represent ing exam scores and then prints out the average. Because some unprepared student might actually get a score of 0, your program should use −1 as the sentinel to mark the end of the input.
*/
void exer7() {
    const double sentinel = -1;
    string prompt = "Enter the score of student ("
                    + integerToString(sentinel) + " to quit):";
    int count = 0; // for average, should store sum and input times
    double input, sum = 0;
    while ((input = getDouble(prompt)) != sentinel) {
        count++;
        sum = sum + input;
    }
    if (count == 0)
        cout << "No socre data" << endl;
    else
        cout << "The average of students' scores is " << sum / count << endl;
}

/*
8.Using the digitSum function from the section entitled “The while statement”

as a model, write a program that reads in an integer and then displays the number that has the same digits in the reverse order, as illustrated by this sample run:

input positive integer: 123456789
output integer: 987654321
*/
void exer8() {
    /* get the Integer part and remain by dividing 10 each time until Integer part is 0 */
    int input = getInteger("Enter a posivtive Integer: ");
    int reverse = 0;
    cout << "Reverse order of " << input << " is ";
    while(input != 0) {
        reverse *= 10;
        reverse += input % 10;
        input /= 10;
    }
    cout << reverse << endl;
}

/*
9.Every positive integer greater than 1 can be expressed as a product of prime numbers. This factorization is unique and is called the prime factorization.

For example, the number 60 can be decomposed into the factors 2 x 2 x 3 x 5, each of which is prime. Note that the same prime can appear more than once in the factorization.

Write a program to display the prime factorization of a number n, as illustrated by the following sample run:

60 = 2 x 2 x 3 x 5
*/
bool isPrim(int n) {
    /*
     * given a number x, only check the oddy number of 3 to sqrt(x)
     * further more, only check the prime number of 3 to sqrt(x)
     *
     */

    /* corner case */
    // if (n <= 1) return false; // becasue we begin with prime 2
    if (n <= 3) return true;
    /* for the loop to skip middle five numbers */
    if (n % 2 == 0|| n % 3 == 0) return false;
    /* loop test */
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
        i += 6;
    }
    /* pass all test */
    return true;
}
int getNextPrime(int n) {
    while(!isPrim(++n));
    return n;
}
void exer9() {
    /* prime factorization */
    int prime = 2;
    int num = getInteger("Enter a positive number: ");
    cout << num << " = ";
    while(num > 1) {
        if (num % prime == 0) {
            num = num / prime;
            if (num == 1) cout << prime;
            else cout << prime << " x ";
        } else
            prime = getNextPrime(prime);
    }
}

/*10. In 1979, Douglas Hofstadter, Professor of Cognitive Science at the University of Indiana, wrote Gödel, Escher, Bach, which he described as “a metaphorical fugue on minds and machines in the spirit of Lewis Carroll.” The book won the Pulitzer Prize for Literature and has over the years become one of the classics of computer science. Much of its charm comes from the mathematical oddities and puzzles it contains, many of which can be expressed in the form of computer programs. Of these, one of the most interesting concerns the sequence of numbers formed by repeatedly executing the following rules for some positive integer n:

1. If n is equal to 1, you’ve reached the end of the sequence and can stop.

2. If n is even, divide it by two.

3. If n is odd, multiply it by three and add one.

Although it also goes by several other names, this sequence is often called the hailstone sequence, because the values tend to go up and down, much as hailstones do in the clouds in which they form.

Write a program that reads in a number from the user and then generates the hailstone sequence from that point, as in the following sample run: As you can see, this program offers a narrative account of the process as it goes along, much as Hofstadter does in his book.

One of the fascinating things about the hailstone sequence is that no one has yet been able to prove that the process always stops. The number of steps in the process can get very large, but somehow it always seems to climb back down to one.
*/
void exer10() {
    /* hailstone sequance */
    int n = getInteger("Enter a positive integer: ");
    while(n > 1) {
        switch (n % 2) {
        case 0:
            cout << n << " is even, get ";
            n = n / 2;
            cout << n << endl;
            break;
        default:
            cout << n << " is odd, get ";
            n = n * 3 + 1;
            cout << n << endl;
            break;
        }
    }
    cout << "reched the end of the sequence" << endl;
}

/*
11.The German mathematician Leibniz (1646–1716) discovered the rather remarkable fact that the mathematical constant π can be computed using the following mathematical relationship:

$$\frac{\pi}{4}\sim 1-\frac{1}{3}+\frac{1}{5}-\frac{1}{7}+\cdots$$

The formula to the right of the equal sign represents an infinite series; each fraction represents a term in that series. If you start with 1, subtract one-third, add one-fifth, and so on, for each of the odd integers, you get a number that gets closer and closer to the value of π/4 as you go along.

Write a program that calculates an approximation of π consisting of the first 10,000 terms in Leibniz’s series.
*/
void exer11() {
    /* Leibniz’s series */
    const int terms = 10000;
    double pi = 0;
    for (int i = 0; i < terms; i++) {
        double t = 1 / (double)(2 * i + 1); // don't forget to converse int to double
        t = (i % 2 == 0 ? t : -t);
        pi += t;
    }
    pi *= 4;
    cout << "π consisting of the first " << terms << " terms is " << pi;
}

/*

12. You can also compute π by approximating the area bounded by a circular arc. Consider the following quarter circle:

which has a radius r equal to two inches. From the formula for the area of a circle, you can easily determine that the area of the quarter circle should be π

square inches. You can also approximate the area computationally by adding up the areas of a series of rectangles, where each rectangle has a fixed width and the height is chosen so that the circle passes through the midpoint of the top of the rectangle. For example, if you divide the area into 10 rectangles from left to right, you get the following diagram:

The sum of the areas of the rectangles approximates the area of the quarter circle. The more rectangles there are, the closer the approximation.

For each rectangle, the width w is a constant derived by dividing the radius by the number of rectangles. The height h, on the other hand, varies depending on the position of the rectangle. If the midpoint of the rectangle in the horizontal direction is given by x, the height of the rectangle can be computed using the sqrt function to express the distance formula h =

$$h=\sqrt{r^2 - x^2}$$

The area of each rectangle is then simply h × w.

Write a program to compute the area of the quarter circle by dividing it into 10,000 rectangles.
*/
