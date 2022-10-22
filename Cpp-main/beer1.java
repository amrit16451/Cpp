public class MinimumBottlesCode {

 public static void main(String[] args) {

  // pass in quantity through command-line arguments

  int quantity = Integer.parseInt(args[0]);
  System.out.println(minimumBottles(quantity));
 }

 public static int minimumBottles(int quantity) {

  /*
   * Company sells water bottles of 1litres, 5 litres, 7litres, & 10
   * litres
   */

  int nums[] = { 7, 5, 10 };
  int minBottles = 0;
  int result = 0;
  /*
   * Iterate the given bottles of sizes - 5 litres, 7litres, and
   * 10litres(without 1litres). For Each Iteration : It finds the number
   * of bottles required to fullfill the given quantity for the order. The
   * final result is the least number of bottles in all the iterations.
   */
  for (int i = 0; i < nums.length; i++) {

   /*
    * say first dividing the given quantity 43 with 7 gives a
    * perfectDivs of 6 and remaining as 1, if the remaining is less
    * than 5 - this quantity is satisfied by 1litre bottles so - 6
    * bottles of 7 litre + 1 bottle of 1 litre
    */

   int perfectDivs = quantity / nums[i];

   int remaining = quantity % nums[i];

   if (remaining == 0) {
    minBottles = perfectDivs;

   } else if (remaining == 5) {
    minBottles = perfectDivs + 1;

   } else if (remaining == 7) {
    minBottles = perfectDivs + 1;

   } else if (remaining > 7 && remaining < 10) {
    minBottles = perfectDivs + remaining % 7 + 1;

   } else if (remaining > 5 && remaining < 7) {
    minBottles = perfectDivs + remaining % 5 + 1;

   } else if (remaining < 5) { // satisfied by 1 litre bottles
    minBottles = perfectDivs + remaining;

   }

   if (i == 0) {
    result = minBottles;
   }
   if (result > minBottles) {
    result = minBottles;
   }

  }

  return result;
 }
}