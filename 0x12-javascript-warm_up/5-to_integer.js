#!/usr/bin/node

/**
 * This script checks if fArg can be converted
 * to an integer.
 */

const fArg = process.argv[2];
if (isNaN(fArg)) {
  console.log('Not a number');
} else {
  console.log('My number: ' + fArg);
}
