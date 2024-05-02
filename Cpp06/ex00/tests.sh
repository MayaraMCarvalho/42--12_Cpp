# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tests.sh                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 11:03:02 by macarval          #+#    #+#              #
#    Updated: 2024/05/02 15:47:47 by macarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# Run tests for CPP-06-ex01
# Usage: make test -OU- make && ./run_test.sh

# Colors
red='\033[31;1m'
blue='\033[36;1m'
green='\033[32;1m'
yellow='\033[33;1m'
purple='\033[35;1m'
gray='\033[37;1m'
reset='\033[0m'

# Caminho para o executável do seu programa em C
PROGRAM="./convert"

comp="make re && clear"

$comp
clear

echo
echo -e "${blue}---------------------------------------------------------------"
echo -e "************************ CONVERT TEST *************************"
echo -e "---------------------------------------------------------------"
echo -e "${blue}No argument test.."
echo -e "---------------------------------------------------------------${reset}"

# Test with no argument
echo -e "${yellow}./convert${reset}"
${PROGRAM}

echo -e "${blue}---------------------------------------------------------------"
echo -e "Invalid input tests..."
echo -e "---------------------------------------------------------------${reset}"

# Test with invalid inputs
echo -e "${yellow}./convert 🌊${reset}"
${PROGRAM} 🌊
echo -e "${yellow}\n./convert 🌊🌊${reset}"
${PROGRAM} 🌊🌊
echo -e "${yellow}\n./convert teste${reset}"
${PROGRAM} teste
echo -e "${yellow}\n./convert \"teste\"${reset}"
${PROGRAM} "teste"
echo -e "${yellow}\n./convert 'teste'${reset}"
${PROGRAM} 'teste'
echo -e "${yellow}\n./convert 0000r${reset}"
${PROGRAM} 0000r
echo -e "${yellow}\n./convert 9f${reset}"
${PROGRAM} 9f
echo -e "${yellow}\n./convert 99f${reset}"
${PROGRAM} 99f
echo -e "${yellow}\n./convert '\\n'${reset}"
${PROGRAM} "'\n'"
echo -e "${yellow}\n./convert '\\t'${reset}"
${PROGRAM} "'\t'"
echo -e "${yellow}\n./convert '\\r'${reset}"
${PROGRAM} "'\r'"
echo -e "${yellow}\n./convert '\\v'${reset}"
${PROGRAM} "'\v'"
echo -e "${yellow}\n./convert '\\b'${reset}"
${PROGRAM} "'\b'"
echo -e "${yellow}\n./convert '\\f'${reset}"
${PROGRAM} "'\f'"
echo -e "${yellow}\n./convert '\\a'${reset}"
${PROGRAM} "'\a'"
echo -e "${yellow}\n./convert '\\e'${reset}"
${PROGRAM} "'\e'"
echo -e "${yellow}\n./convert '\\0'${reset}"
${PROGRAM} "'\0'"
echo -e "${yellow}\n./convert '\\x0'${reset}"
${PROGRAM} "'\x0'"
echo -e "${yellow}\n./convert '\\x0f'${reset}"
${PROGRAM} "'\x0f'"
echo -e "${yellow}\n./convert ' '${reset}"
${PROGRAM} "' '"
echo -e "${yellow}\n./convert '	'${reset}"
${PROGRAM} "'	'"


echo -e "${blue}\n---------------------------------------------------------------"
echo -e "Limit tests..."
echo -e "---------------------------------------------------------------${reset}"

# Test with limits
echo -e "${yellow}./convert 2147483647${reset}"
${PROGRAM} 2147483647
echo -e "${yellow}\n./convert -2147483648${reset}"
${PROGRAM} -2147483648
echo -e "${yellow}\n./convert 2147483648${reset}"
${PROGRAM} 2147483648
echo -e "${yellow}\n./convert -2147483649${reset}"
${PROGRAM} -2147483649
echo -e "${yellow}\n./convert 340282346638528859811704183484516925440.0f${reset}"
${PROGRAM} 340282346638528859811704183484516925440.0f
echo -e "${yellow}\n./convert -340282346638528859811704183484516925440.0000000000000000f${reset}"
${PROGRAM} -340282346638528859811704183484516925440.0000000000000000f
echo -e "${yellow}\n./convert 340282346638528859811704183484516925455.9f${reset}"
${PROGRAM} 340282446638528859811704183484516925455.9f
echo -e "${yellow}\n./convert -340282446638528859811704183484516925499.9900000000000000f${reset}"
${PROGRAM} -340282446638528859811704183484516925499.9900000000000000f
echo -e "${yellow}\n./convert 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0${reset}"
${PROGRAM} 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0
echo -e "${yellow}\n./convert -179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0${reset}"
${PROGRAM} -179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0
echo -e "${yellow}\n./convert 179769313486239570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858399.9${reset}"
${PROGRAM} 179769313486239570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858399.9
echo -e "${yellow}\n./convert -179769313486239570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858399.9${reset}"
${PROGRAM} -179769313486239570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858399.9

echo -e "${blue}\n---------------------------------------------------------------"
echo -e "Char tests..."
echo -e "---------------------------------------------------------------${reset}"

# Test with char
echo -e "${yellow}./convert 'c'${reset}"
${PROGRAM} "c"
echo -e "${yellow}\n./convert 'a'${reset}"
${PROGRAM} "a"
echo -e "${yellow}\n./convert 'A'${reset}"
${PROGRAM} "A"
echo -e "${yellow}\n./convert 'l'${reset}"
${PROGRAM} "l"
echo -e "${yellow}\n./convert 'e'${reset}"
${PROGRAM} "e"
echo -e "${yellow}\n./convert 'x'${reset}"
${PROGRAM} "x"
echo -e "${yellow}\n./convert '/'${reset}"
${PROGRAM} "/"
echo -e "${yellow}\n./convert '?'${reset}"
${PROGRAM} "?"
echo -e "${yellow}\n./convert ':'${reset}"
${PROGRAM} ":"
echo -e "${yellow}\n./convert '%'${reset}"
${PROGRAM} "%"

echo -e "${blue}\n---------------------------------------------------------------"
echo -e "Int tests..."
echo -e "---------------------------------------------------------------${reset}"

# Test with integer
echo -e "${yellow}./convert 0${reset}"
${PROGRAM} 0
echo -e "${yellow}\n./convert 1${reset}"
${PROGRAM} 1
echo -e "${yellow}\n./convert -1${reset}"
${PROGRAM} -1
echo -e "${yellow}\n./convert 42${reset}"
${PROGRAM} 42
echo -e "${yellow}\n./convert -42${reset}"
${PROGRAM} -42
echo -e "${yellow}\n./convert 65${reset}"
${PROGRAM} 65
echo -e "${yellow}\n./convert 314${reset}"
${PROGRAM} 314

echo -e "${blue}\n---------------------------------------------------------------"
echo -e "Float tests..."
echo -e "---------------------------------------------------------------${reset}"

# Test with float
echo -e "${yellow}./convert 0.0f${reset}"
${PROGRAM} 0.0f
echo -e "${yellow}\n./convert 1.1f${reset}"
${PROGRAM} 1.1f
echo -e "${yellow}\n./convert -1.1f${reset}"
${PROGRAM} -1.1f
echo -e "${yellow}\n./convert 42.2f${reset}"
${PROGRAM} 42.2f
echo -e "${yellow}\n./convert 4.2f${reset}"
${PROGRAM} 4.2f
echo -e "${yellow}\n./convert -4.2f${reset}"
${PROGRAM} -4.2f
echo -e "${yellow}\n./convert 65.56f${reset}"
${PROGRAM} 65.56f
echo -e "${yellow}\n./convert 3.14f${reset}"
${PROGRAM} 3.14f
echo -e "${yellow}\n./convert 42.0f${reset}"
${PROGRAM} 42.0f

echo -e "${blue}\n---------------------------------------------------------------"
echo -e "Double tests..."
echo -e "---------------------------------------------------------------${reset}"

# Test with double
echo -e "${yellow}./convert 0.0${reset}"
${PROGRAM} 0.0
echo -e "${yellow}\n./convert 1.1${reset}"
${PROGRAM} 1.1
echo -e "${yellow}\n./convert -1.1${reset}"
${PROGRAM} -1.1
echo -e "${yellow}\n./convert 42.2${reset}"
${PROGRAM} 42.2
echo -e "${yellow}\n./convert 4.2${reset}"
${PROGRAM} 4.2
echo -e "${yellow}\n./convert -4.2${reset}"
${PROGRAM} -4.2
echo -e "${yellow}\n./convert 65.56${reset}"
${PROGRAM} 65.56
echo -e "${yellow}\n./convert 3.14${reset}"
${PROGRAM} 3.14

echo -e "${blue}\n---------------------------------------------------------------"
echo -e "Pseudo literal tests..."
echo -e "---------------------------------------------------------------${reset}"

# Test with pseudo literal
echo -e "${yellow}./convert nan${reset}"
${PROGRAM} nan
echo -e "${yellow}\n./convert nanf${reset}"
${PROGRAM} nanf
echo -e "${yellow}\n./convert +inf${reset}"
${PROGRAM} +inf
echo -e "${yellow}\n./convert -inf${reset}"
${PROGRAM} -inf
echo -e "${yellow}\n./convert +inff${reset}"
${PROGRAM} +inff
echo -e "${yellow}\n./convert -inff${reset}"
${PROGRAM} -inff

echo -e "${blue}\n---------------------------------------------------------------"
echo -e "Tests finished..."
echo -e "---------------------------------------------------------------${reset}"
