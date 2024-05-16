#!/bin/bash

# Run tests for CPP-01-ex04
# Usage: make test -OU- make && ./run_tests.sh

# Colors
red='\033[31;1m'
blue='\033[36;1m'
green='\033[32;1m'
yellow='\033[33;1m'
purple='\033[35;1m'
gray='\033[37;1m'
reset='\033[0m'

# Caminho para o executável do seu programa em C
PROGRAM="./RPN"

comp="make re && clear"

$comp
clear

# Create Test folder
mkdir -p Test

# Create Test files_______________________________________________________________

echo -e "${blue}---------------- REVERSE POLISH NOTATION TEST -----------------"
echo "---------------------------------------------------------------"
echo "Creating test files..."
echo "---------------------------------------------------------------"
echo "subject1.result..."
echo "subject2.result..."
echo "subject3.result..."
echo "aleatory1.result..."
echo "aleatory2.result..."
echo "aleatory3.result..."
echo "noArgumentError.result..."
echo "outOfRangeError.result..."
echo "fewOperandsError.result..."
echo "invalidCharError.result..."
echo "invalidCharSubjectError.result..."
echo "divisionByZeroError.result..."
echo "invalidExpressionError.result..."
echo "---------------------------------------------------------------"

echo "[36;1m42[0m" > ./Test/subject1.result
echo "[36;1m42[0m" > ./Test/subject2.result
echo "[36;1m0[0m" > ./Test/subject3.result
echo "[36;1m9[0m" > ./Test/aleatory1.result
echo "[36;1m15[0m" > ./Test/aleatory2.result
echo "[36;1m-1[0m" > ./Test/aleatory3.result

echo "[31;1mInvalid number of parameters!
Usage: ./RPN <reverse polish notation>
[0m" > ./Test/noArgumentError.result
echo "[31;1mError: Number out the allowed range![0m" > ./Test/outOfRangeError.result
echo "[31;1mError: Too few operators![0m" > ./Test/fewOperandsError.result
echo "[31;1mError: Invalid character in expression![0m" > ./Test/invalidCharError.result
echo "[31;1mError: Invalid character in expression![0m" > ./Test/invalidCharSubjectError.result
echo "[31;1mError: Division by zero![0m" > ./Test/divisionByZeroError.result
echo "[31;1mError: Invalid expression![0m" > ./Test/invalidExpressionError.result


# Initialize counters
total_tests=0
successful_tests=0

# Initialize test number
test_number=0

# Run tests_______________________________________________________________________

echo -e "${blue}-------------------------------------------------------------"
echo "Running tests..."
echo "---------------------------------------------------------------"

# Test 1
((total_tests++))
echo -e "${blue}--------------------------- Test 1 ----------------------------"
echo "Test for valid expression, from subject..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"8 9 * 9 - 9 - 9 - 4 - 1 +\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/subject1.result
echo -e "${yellow}Output result: "
${PROGRAM} "8 9 * 9 - 9 - 9 - 4 - 1 +" > ./Test/subject1.output
${PROGRAM} "8 9 * 9 - 9 - 9 - 4 - 1 +"
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/subject1.result Test/subject1.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"

# Test 2
((total_tests++))
echo -e "${blue}--------------------------- Test 2 ----------------------------"
echo "Test for valid expression, from subject..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"7 7 * 7 -\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/subject2.result
echo -e "${yellow}Output result: "
${PROGRAM} "7 7 * 7 -" > ./Test/subject2.output
${PROGRAM} "7 7 * 7 -"
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/subject2.result Test/subject2.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"
echo -e "${reset}"

# Test 3
((total_tests++))
echo -e "${blue}--------------------------- Test 3 ----------------------------"
echo "Test for valid expression, from subject..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"1 2 * 2 / 2 * 2 4 - +\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/subject3.result
echo -e "${yellow}Output result: "
${PROGRAM} "1 2 * 2 / 2 * 2 4 - +" > ./Test/subject3.output
${PROGRAM} "1 2 * 2 / 2 * 2 4 - +"
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/subject3.result Test/subject3.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"
echo -e "${reset}"

# Test 4
((total_tests++))
echo -e "${blue}--------------------------- Test 4 ----------------------------"
echo "Test for valid expression, aleatory..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"1 6 1 - + 2 / 1 2 + * \""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/aleatory1.result
echo -e "${yellow}Output result: "
${PROGRAM} "1 6 1 - + 2 / 1 2 + * " > ./Test/aleatory1.output
${PROGRAM} "1 6 1 - + 2 / 1 2 + * "
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/aleatory1.result Test/aleatory1.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"
echo -e "${reset}"

# Test 5
((total_tests++))
echo -e "${blue}--------------------------- Test 5 ----------------------------"
echo "Test for valid expression, aleatory..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"5 9 * 3 /\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/aleatory2.result
echo -e "${yellow}Output result: "
${PROGRAM} "5 9 * 3 /" > ./Test/aleatory2.output
${PROGRAM} "5 9 * 3 /"
echo -e "${blue}"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/aleatory2.result Test/aleatory2.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"
echo -e "${reset}"

# Test 6
((total_tests++))
echo -e "${blue}--------------------------- Test 6 ----------------------------"
echo "Test for valid expression, aleatory..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"2 3 -\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/aleatory3.result
echo -e "${yellow}Output result: "
${PROGRAM} "2 3 -" > ./Test/aleatory3.output
${PROGRAM} "2 3 -"
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/aleatory3.result Test/aleatory3.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"
echo -e "${reset}"

# Test 7
((total_tests++))
echo -e "${blue}--------------------------- Test 7 ----------------------------"
echo "Test for invalid number of arguments (too few)..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM}"
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/noArgumentError.result
echo -e "${yellow}Output result: "
${PROGRAM} > ./Test/noArgumentError.output
${PROGRAM}
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/noArgumentError.result Test/noArgumentError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"
echo -e "${reset}"

# Test 8
((total_tests++))
echo -e "${blue}--------------------------- Test 8 ----------------------------"
echo "Test for number out of permitted range..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"2 11 +\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/outOfRangeError.result
echo -e "${yellow}Output result: "
${PROGRAM} "2 11 +" > ./Test/outOfRangeError.output
${PROGRAM} "2 11 +"
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/outOfRangeError.result Test/outOfRangeError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"
echo -e "${reset}"

# Test 9
((total_tests++))
echo -e "${blue}--------------------------- Test 9 ----------------------------"
echo "Test for expression with too few operands..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"2 +\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/fewOperandsError.result
echo -e "${yellow}Output result: "
${PROGRAM} "2 +" > ./Test/fewOperandsError.output
${PROGRAM} "2 +"
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/fewOperandsError.result Test/fewOperandsError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"
echo -e "${reset}"

# Test 10
((total_tests++))
echo -e "${blue}--------------------------- Test 10 ---------------------------"
echo "Test for expression with invalid character..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"2 2 %\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/invalidCharError.result
echo -e "${yellow}Output result: "
${PROGRAM} "2 2 %" > ./Test/invalidCharError.output
${PROGRAM} "2 2 %"
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/invalidCharError.result Test/invalidCharError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"
echo -e "${reset}"

# Test 11
((total_tests++))
echo -e "${blue}--------------------------- Test 11 ---------------------------"
echo "Test for expression with invalid character, from subject..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"(1 + 1)\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/invalidCharSubjectError.result
echo -e "${yellow}Output result: "
${PROGRAM} "(1 + 1)" > ./Test/invalidCharSubjectError.output
${PROGRAM} "(1 + 1)"
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/invalidCharSubjectError.result Test/invalidCharSubjectError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"
echo -e "${reset}"

# Test 12
((total_tests++))
echo -e "${blue}--------------------------- Test 12 ---------------------------"
echo "Test for division by zero..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"2 0 /\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/divisionByZeroError.result
echo -e "${yellow}Output result: "
${PROGRAM} "2 0 /" > ./Test/divisionByZeroError.output
${PROGRAM} "2 0 /"
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/divisionByZeroError.result Test/divisionByZeroError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"
echo -e "${reset}"

# Test 13
((total_tests++))
echo -e "${blue}--------------------------- Test 13 ---------------------------"
echo "Test for invalid expression..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"2 2 2 +\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/invalidExpressionError.result
echo -e "${yellow}Output result: "
${PROGRAM} "2 2 2 +" > ./Test/invalidExpressionError.output
${PROGRAM} "2 2 2 +"
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/invalidExpressionError.result Test/invalidExpressionError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi

# Test 14
((total_tests++))
echo -e "${blue}--------------------------- Test 14 ---------------------------"
echo "Test for invalid expression..."
echo "---------------------------------------------------------------"
echo -en "${gray}"
echo "${PROGRAM} \"\""
echo -e "${blue}---------------------------------------------------------------"
echo -e "${purple}Output expected: "
cat ./Test/invalidExpressionError.result
echo -e "${yellow}Output result: "
${PROGRAM} "" > ./Test/invalidExpressionError.output
${PROGRAM} ""
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff Test/invalidExpressionError.result Test/invalidExpressionError.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ Passed${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ Failed${reset}"
	fi
fi

echo -e "${blue}---------------------------------------------------------------"
echo "Tests finished..."
echo -e "---------------------------------------------------------------${reset}"

# Calculate percentage of hits
percentage=$(echo "scale=4; $successful_tests / $total_tests * 100" | bc)

# Print results with color
echo -en "\n\e[33mTotal number of tests performed: \e[94m$total_tests"
echo -en "\n\e[33mTests OK: \e[94m$successful_tests"
echo -e "\n\e[33mPercentage of hits: \e[94m$(printf "%.2f" "$percentage")%\n"

if [ "$(printf "%.2f" "$percentage")" = "100.00" ]; then
	echo -e "${green}------------------- 𝙲𝚘𝚗𝚐𝚛𝚊𝚝𝚞𝚕𝚊𝚝𝚒𝚘𝚗𝚜!!!🎉🎊 -------------------\n"
else
	echo -e "${red}-------------------- 𝚄𝚗𝚏𝚘𝚛𝚝𝚞𝚗𝚊𝚝𝚎𝚕𝚢!!!⛔😩 ---------------------\n"
fi



