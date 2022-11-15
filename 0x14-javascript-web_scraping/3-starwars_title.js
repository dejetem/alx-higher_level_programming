#!/usr/bin/node
// a script that prints the title of a Star Wars

const request = require('request');
const BASE_URL = 'https://swapi-api.hbtn.io/api';
if (process.argv.length > 2) {
  request(`${BASE_URL}/films/${process.argv[2]}/`, (err, res, body) => {
    if (err) {
      console.log(err);
    }
    console.log(JSON.parse(body).title);
  });
}

