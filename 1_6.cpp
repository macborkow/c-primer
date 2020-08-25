/*

std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;

The above statement is not legal because leftshift operator requires left-hand operand for streaming data,
in this example to send our literals and variables's values to the standard output. For this statements
to work properly we would have to get rid of semicolons at the end of the first and the second line,
leaving only the last, closing one. In that way the standard output would get chained for all the
subsequent operations to utilize, as it would be the output of each of the former operations.


*/