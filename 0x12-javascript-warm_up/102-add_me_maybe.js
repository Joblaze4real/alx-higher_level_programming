#!/usr/bin/node

/**
 * A Function that increments and calls a function.
 */

exports.addMeMaybe = function (number, theFunction) {
  theFunction(++number);
};
