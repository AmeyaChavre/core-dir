// a simple program to demonstrate object literal in ES6


let firstName = "Mike";

let lastName = "Jackson";

// declare an object literal "Old Style"

// let fullName = {firstName:firstName,lastName:lastName};

// now declare the above statement in ES-6 style

let fullName = {firstName,lastName}; // please , notice that we have have skipped mentioning the values and only mentioned the keys.

console.log(fullName);

console.log(typeof(fullName));

