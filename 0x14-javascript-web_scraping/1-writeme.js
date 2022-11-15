#!/usr/bin/node
// reads file prints the content of a file

const fs = require('fs');
fs.writeFile(process.argv[2], process.argv[3], (error) => {
  error && console.log(error);
});
