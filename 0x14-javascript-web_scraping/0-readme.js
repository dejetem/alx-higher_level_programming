#!/usr/bin/node
// reads prints the content of a file

const fs = require('fs');
fs.readFile(process.argv[2], 'utf-8', (error, data) => {
  console.log(error || data);
});
