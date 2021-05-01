// https://www.freecodecamp.org/learn/javascript-algorithms-and-data-structures/intermediate-algorithm-scripting/dna-pairing

function pairElement(str) {
  var pairs = {
    A: "T",
    T: "A",
    C: "G",
    G: "C"
  };

  var arr = str.split("");

  return arr.map(el => [el, pairs[el]]);
}

pairElement("GCG");