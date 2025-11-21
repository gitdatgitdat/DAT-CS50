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

---

Selection Sort

If we have a random array of numbers {7, 2, 5, 4, 1, 6, 0, 3} one way of sorting could by going through the list, find the smallest, and move it to the start. Whatever is currently at the start could take the smallest previous position. So our list would turn into:

{0, 2, 5, 4, 1, 6, 7, 3}

We have now shortened our array as well since 0 is now in its correct spot. Go through this loop until the array is complete.

We can imagine that in code like this:

for i from 0 to n - 1
	Find the smallest number between numbers[i] and numbers[n-1]
	Swap smallest number with numbers[i]

---

Bubble Sort

You could also go about this by looking at the first pair and move the largest down. In our example:

{7, 2, 5, 4, 1, 6, 0, 3}

We would swap 7 and 2 giving us:

{2, 7, 5, 4, 1, 6, 0, 3}

Rinse and repeat until we get:

{2, 5, 4, 1, 6, 0, 3, 7}

So instead of finding the smallest number and getting it into place, we've now got the largest number in the correct spot.

We can imagine that in code like this:

Repeat n times
	For i from 0 to n - 2
		if numbers[i] and numbers[i+1] out of order
			Swap them
	if no swaps
		stop

---

These are two algorithms that solve the same problem. Selection Sort is actually one of the slowest due to how it repeatedly checking the remaining items over and over again. As this array gets longer, even though the list is getting shorter as wwe go, the more and more time this will take.

Bubble sort, while going through its process differently, also will eventually run into a similar problem where its checking the same elements repeatedly. It has the same upbound as Selection. However its lower is better since we can tell it to stop if no swaps are made during its pass.

---

Recursion

So how can we go through a sorting situation without repeatedly check the same elements over and over? That's where Recursion comes in. A recursive algo is one that calls itself.

if no doors left
	Return false
If number behind middle door
	Return true
Else if number < middle door
	Search left half
Else if number > middle door
	Search right half
	
Using recursion or a loop depends on the problem and there can be problems that are solvable by both. Generally, problems are considered recursive when the element is repeating itself. Think of the mario problem from week 1.

#
##
###
####

Row 1 is the same as row 2, but just one more brick. Similarly row 3 is the same as row 4, minus one brick.

---

Merge Sort

If only one number
	Quit
Else
	Sort left half of numbers
	Sort right half of numbers
	Sort both lists
	
Say go back to our array of 8.

1346 0257

We compare 1 and 0, remove 0 and leave:

0

1346 257

We then compare 1 and 2, remove 1, and leave:

01

346 257

We then compare 3 to 2, remove 2, and leave:

012

346 57

We then compare 3 to 5, remove 2, and leave:

0123

46 57

Then:

01234

6 57

Then:

012345

6 7

Then:

0123456

 7
 
Then:

01234567

---

So that is how we'd merge two lists. But how would we get our two lists to begin with? Lets say we have:

63415270

Well, lets sort the left half:

6341

And do it again:

63

And do it again:

6 3

Well now we're done split. Lets merge, which gives us:

36

We are now one quarter of the way done! The next pair, following the same process, would be:

4 1

Which would change to:

14

And now matched with:

36 14

Which gives:

1346

You would repeat this with the other half, and now you have your two lists to compare using this divide and conquer approach.

---

So does merge have a lot of steps? Is it kind of a brain wrinkler at times when thinking of recursion? Absolutely, but its much faster in completing its task due to the few amount of times its touching each element.