#!/usr/bin/node

/**
 * This script prints the first argument passed to it.
 */

const firstArg = process.argv[2];
if (firstArg === undefined) {
  console.log('No argument');
} else {
  console.log(firstArg);
}
