function sumTotalCash(cid) {
  let sum = 0;

  for (let i = 0; i < cid.length; i++) {
    sum += cid[i][1];
  }

  return sum;
}

function checkCashRegister(price, cash, cid) {
  let diffChange = cash - price;
  let totalCash = sumTotalCash(cid);
  let change = [];

  if (diffChange > totalCash) {
    return { status: "INSUFFICIENT_FUNDS", change };
  }

  if (diffChange === totalCash) {
    return { status: "CLOSED", change: cid };
  }

  cid.reverse();

  for (let i = 0; i < cid.length; i++) {
    if (cid[i][0] === "ONE HUNDRED") {
      let auxSum = 0;
      while (cid[i][1] > 0 && diffChange - 100 >= 0) {
        diffChange -= 100;
        cid[i][1] -= 100;
        auxSum += 100;
      }

      if (auxSum > 0) {
        change.push(["ONE HUNDRED", auxSum]);
      }
    }

    if (diffChange > sumTotalCash(cid)) {
      return { status: "INSUFFICIENT_FUNDS", change: [] };
    }

    if (cid[i][0] === "TWENTY") {
      let auxSum = 0;
      while (cid[i][1] > 0 && diffChange - 20 >= 0) {
        diffChange -= 20;
        cid[i][1] -= 20;
        auxSum += 20;
      }

      if (auxSum > 0) {
        change.push(["TWENTY", auxSum]);
      }
    }

    if (diffChange > sumTotalCash(cid)) {
      return { status: "INSUFFICIENT_FUNDS", change: [] };
    }

    if (cid[i][0] === "TEN") {
      let auxSum = 0;
      while (cid[i][1] > 0 && diffChange - 10 >= 0) {
        diffChange -= 10;
        cid[i][1] -= 10;
        auxSum += 10;
      }

      if (auxSum > 0) {
        change.push(["TEN", auxSum]);
      }
    }

    if (diffChange > sumTotalCash(cid)) {
      return { status: "INSUFFICIENT_FUNDS", change: [] };
    }

    if (cid[i][0] === "FIVE") {
      let auxSum = 0;
      while (cid[i][1] > 0 && diffChange - 5 >= 0) {
        diffChange -= 5;
        cid[i][1] -= 5;
        auxSum += 5;
      }

      if (auxSum > 0) {
        change.push(["FIVE", auxSum]);
      }
    }

    if (diffChange > sumTotalCash(cid)) {
      return { status: "INSUFFICIENT_FUNDS", change: [] };
    }

    if (cid[i][0] === "ONE") {
      let auxSum = 0;
      while (cid[i][1] > 0 && diffChange - 1 >= 0) {
        diffChange -= 1;
        cid[i][1] -= 1;
        auxSum += 1;
      }

      if (auxSum > 0) {
        change.push(["ONE", auxSum]);
      }
    }

    if (diffChange > sumTotalCash(cid)) {
      return { status: "INSUFFICIENT_FUNDS", change: [] };
    }

    if (cid[i][0] === "QUARTER") {
      let auxSum = 0;
      while (cid[i][1] > 0 && diffChange - 0.25 >= 0) {
        diffChange -= 0.25;
        cid[i][1] -= 0.25;
        auxSum += 0.25;
      }

      if (auxSum > 0) {
        change.push(["QUARTER", auxSum]);
      }
    }

    if (diffChange > sumTotalCash(cid)) {
      return { status: "INSUFFICIENT_FUNDS", change: [] };
    }

    if (cid[i][0] === "DIME") {
      let auxSum = 0;
      while (cid[i][1] > 0 && diffChange - 0.1 >= 0) {
        diffChange -= 0.1;
        cid[i][1] -= 0.1;
        auxSum += 0.1;
      }

      if (auxSum > 0) {
        change.push(["DIME", auxSum]);
      }
    }

    if (diffChange > sumTotalCash(cid)) {
      return { status: "INSUFFICIENT_FUNDS", change: [] };
    }

    if (cid[i][0] === "NICKEL") {
      let auxSum = 0;
      while (cid[i][1] > 0 && diffChange - 0.05 >= 0) {
        diffChange -= 0.05;
        cid[i][1] -= 0.05;
        auxSum += 0.05;
      }

      if (auxSum > 0) {
        change.push(["NICKEL", auxSum]);
      }
    }

    if (diffChange > sumTotalCash(cid)) {
      return { status: "INSUFFICIENT_FUNDS", change: [] };
    }

    if (cid[i][0] === "PENNY") {
      let auxSum = 0;
      while (cid[i][1] > 0 && diffChange >= 0) {
        diffChange -= 0.01;
        cid[i][1] -= 0.01;
        auxSum += 0.01;
      }

      if (auxSum - 0.01 > 0) {
        change.push(["PENNY", auxSum]);
      }
    }
  }

  let finalSum = sumTotalCash(cid);

  if (diffChange > 0) {
    return { status: "INSUFFICIENT_FUNDS", change: [] };
  }

  if (finalSum === 0) {
    return { status: "CLOSED", change };
  }

  if (finalSum > 0) {
    return { status: "OPEN", change };
  }
}

const result1 = checkCashRegister(19.5, 20, [
  ["PENNY", 1.01],
  ["NICKEL", 2.05],
  ["DIME", 3.1],
  ["QUARTER", 4.25],
  ["ONE", 90],
  ["FIVE", 55],
  ["TEN", 20],
  ["TWENTY", 60],
  ["ONE HUNDRED", 100],
]);

console.log(result1);

const result2 = checkCashRegister(3.26, 100, [
  ["PENNY", 1.01],
  ["NICKEL", 2.05],
  ["DIME", 3.1],
  ["QUARTER", 4.25],
  ["ONE", 90],
  ["FIVE", 55],
  ["TEN", 20],
  ["TWENTY", 60],
  ["ONE HUNDRED", 100],
]);

console.log(result2);

const result3 = checkCashRegister(19.5, 20, [
  ["PENNY", 0.01],
  ["NICKEL", 0],
  ["DIME", 0],
  ["QUARTER", 0],
  ["ONE", 0],
  ["FIVE", 0],
  ["TEN", 0],
  ["TWENTY", 0],
  ["ONE HUNDRED", 0],
]);

console.log(result3);

const result4 = checkCashRegister(19.5, 20, [
  ["PENNY", 0.01],
  ["NICKEL", 0],
  ["DIME", 0],
  ["QUARTER", 0],
  ["ONE", 1],
  ["FIVE", 0],
  ["TEN", 0],
  ["TWENTY", 0],
  ["ONE HUNDRED", 0],
]);

console.log(result4);

const result5 = checkCashRegister(19.5, 20, [
  ["PENNY", 0.5],
  ["NICKEL", 0],
  ["DIME", 0],
  ["QUARTER", 0],
  ["ONE", 0],
  ["FIVE", 0],
  ["TEN", 0],
  ["TWENTY", 0],
  ["ONE HUNDRED", 0],
]);

console.log(result5);
