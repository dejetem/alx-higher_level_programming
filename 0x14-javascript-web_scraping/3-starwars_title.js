#!/usr/bin/node
// a script that prints the title of a Star Wars

const request = require('request');
request(`http://swapi.co/api/films/${process.argv[3]}`, function (error, response, body) {
  error && console.log(error);
  console.log(JSON.parse(body).title);
});
