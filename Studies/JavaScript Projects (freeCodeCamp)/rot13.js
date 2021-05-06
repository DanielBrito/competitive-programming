function rot13(str) {
  let decripted = "";

  for (let i = 0; i < str.length; i++) {
    let decimal = str.charCodeAt(i);

    if (decimal >= 65 && decimal <= 90) {
      if (decimal + 13 <= 90) {
        decripted += String.fromCharCode(decimal + 13);
      } else {
        decripted += String.fromCharCode(decimal + 13 - 26);
      }
    } else {
      decripted += str.charAt(i);
    }
  }

  return decripted;
}

console.log(rot13("SERR PBQR PNZC"));
