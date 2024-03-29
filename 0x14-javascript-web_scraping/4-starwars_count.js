#!/usr/bin/node
// a script that prints the number of movies where the character “Wedge Antilles” is present

const request = require('request');
const find = '/18/';
request(process.argv[2], function (error, response, body) {
  if (error) throw new Error(error);
  let num = 0;
  for (const film of JSON.parse(body).results) {
    for (const character of film.characters) {
      num += (character.includes(find) ? 1 : 0);
    }
  }
  console.log(num);
});
