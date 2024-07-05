function stairCase(n) {
  let string = ""

  for (let i = 1; i <= n; i++) {
    string = ""
    for (let j = 1; j <= n; j++) {
      if (j > (n - i)) {
        string = string + "#"
      } else {
        string = string + " "
      }
    }
    console.log(string)
  }

}

function main() {
  const n = 10;

  stairCase(n);

}

main();
