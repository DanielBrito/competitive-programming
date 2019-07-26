/* https://algodaily.com/challenges/fizz-buzz */

function fizzBuzz(n) {
    var str = "";
    for (var i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            str += "fizzbuzz";
            continue;
        }
        else
        if (i % 3 == 0) {
            str += "fizz";
        }
        else
        if (i % 5 == 0) {
            str += "buzz";
        }
        else {
            str += i;
        }
    }
    return str;
}