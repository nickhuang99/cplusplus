/*
 * driver.hh
 *
 *  Created on: 2022年1月2日
 *      Author: nick
 */

#ifndef TESTS_CONFLICT_AMBIGUITY___DRIVER_HH_
#define TESTS_CONFLICT_AMBIGUITY___DRIVER_HH_


# include "parser.hh"

// Give Flex the prototype of yylex we want ...
# define YY_DECL \
	yy::parser::token_kind_type yylex (yy::parser::value_type* node)
// ... and declare it for the parser's sake.
YY_DECL;


#endif /* TESTS_CONFLICT_AMBIGUITY___DRIVER_HH_ */
