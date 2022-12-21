#!/usr/bin/node
const Square2 = require('./5-square');

class Square extends Square2 {
  constructor (size) {
    super(size);
    this.size = size;
  }

  charPrint (c) {
    if (typeof c === 'undefined') {
      c = 'X';
    }
    for (let i = 0; i < this.size; i++) {
      for (let j = 0; j < this.size; j++) {
        process.stdout.write(c);
      }
      console.log();
    }
  }
}

module.exports = Square;
