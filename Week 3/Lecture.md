Algorithms

We're often using these to quickly find the answer for problems. Not only are we concerned about speed but efficiency.

We'll use 'O' as representation that we're looking at the rough idea how fast an algorithm operates. For example, linear search would be:

O(n)

In the phone book analogy, this is going one page at a time until you find the person you're looking for. We then have binary search:

O(log n)

This would be splitting the phone book over and over, using the half that has the answer we're seeking, until its reduced to the solution.

This is asymptotic notation, where we're determing the effectiveness of algorithms. There's also omega (Horse shoe), which refers to the ideal outcome (Linear search getting the solution on the first try), and theta (Minus symbol in a circle) which is when the best and worst case of an algo are the same.

We have not used an algo of this type yet, but we will.

---

Data Structures

The issue with algorithms is they can fall apart if the data its searching is randomized. The phonebook anology works well because everyone is alphabetized. So how we go about filtering the incorrect solutions is straight forward.

Data structures is how we can ensure the data being used is kept in an organized fashion. For the phonebook analogy, how can we pair the name of the person and their phone number?

You could manually keep two lists and make sure the name and number always line up. But that's rather fragile. Instead, we can create a structure to hold this data.

You'll declare the structure at the start of your code:

typedef struct
{
    string name;
    string number;
} person;

And then define it in main like so:

int main(void)
{
    person people[3];

    people[0].name = "David";
    people[0].number = "111-111-1111";
    
}

---

So our fancy data structure will keep our data organized. But we're still manually entering the lists in the correct order. How would we go about sorting so our data structures can be nice and tidy to be searched through?

Well it comes back to algorithms. Its algorithms all the way down, baby.

If we have a random array of numbers {7, 2, 5, 4, 1, 6, 0, 3} one way of sorting could by going through the list, find the smallest, and move it to the start. Whatever is currently at the start could take the smallest previous position. So our list would turn into:

{0, 2, 5, 4, 1, 6, 7, 3}

We have now shortened our array as well since 0 is now in its correct spot. Go through this loop until the array is complete.

But you could also go about this by looking at the first pair and move the largest down. In our example:

{7, 2, 5, 4, 1, 6, 0, 3}

We would swap 7 and 2 giving us:

{2, 7, 5, 4, 1, 6, 0, 3}

Rinse and repeat until we get:

{2, 5, 4, 1, 6, 0, 3, 7}

So instead of finding the smallest number and getting it into place, we've now got the largest number in the correct spot.

These are two algorithms that solve the same problem. Each have pros and cons and it really depends on how you want to solve your problem.
