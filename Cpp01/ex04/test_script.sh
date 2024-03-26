#!/bin/bash

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test_script.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 16:40:26 by thabeck-          #+#    #+#              #
#    Updated: 2024/03/26 12:02:33 by macarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
PROGRAM="./sed"

comp="make re && clear"

$comp
clear

path=files_sed

mkdir -p ${path}

# Create Test files
echo -e "${yellow}******************* SED IS FOR LOSERS TEST ********************"
echo -e "---------------------------------------------------------------"
echo -e "Creating test files..."
echo -e "---------------------------------------------------------------"
echo -e "emptyFile.txt"
echo -e "multipleMatches.txt"
echo -e "noMatches.txt"
echo -e "oneMatchPerLine.txt"
echo -e "numbers.txt"
echo -e "specialChars.txt"
echo -e "---------------------------------------------------------------"

# Create empty file
touch ./${path}/emptyFile.txt

# Create multiple matches file
echo "
No mar da vida navego, sem medo de me afogar,
Entre ondas de desafios, meu destino a desvendar,
Na maré alta da esperança, meu barco vai singrar,
E no mar de possibilidades, meu futuro vou encontrar.

Mar adentro, rumo ao horizonte sem fim,
Onde as ondas dançam ao som do meu tamborim,
Mar afora, onde a vida é uma canção sem fim,
E no mar de sonhos, vou tecendo o meu jardim.

Em cada mar revolto, uma lição a aprender,
E em cada mar tranquilo, um momento a agradecer,
Mar a dentro, mar afora, sem nunca temer,
Pois no mar da vida, eu sei que vou vencer.

Navego pela calmaria, onde a alma pode repousar,
E encontro na serenidade um jeito de me acalmar,
Pois mesmo em meio às tempestades, o mar sabe me guiar,
E me leva suavemente para onde devo chegar.
" > ./${path}/multipleMatches.txt

# Create multiple matches sed file
sed 's/mar/oceano/g' ./${path}/multipleMatches.txt > ./${path}/multipleMatches.txt.result

# Create no matches file
echo "Nas asas do vento, sussurros viajam,
Entre folhas dançantes, histórias gravam.
Sob céus de azul profundo e calmo,
Desenham sonhos, em silêncio, no asfalto.

Sob a luz da lua, segredos são revelados,
Em noites estreladas, desejos são semeados.
Nas marés da vida, corações navegam,
Em mares de esperança, destinos desbravam.
" > ./${path}/noMatches.txt

# Create no matches sed file
sed 's/tempo/amor/g' ./${path}/noMatches.txt > ./${path}/noMatches.txt.result

# Create one match per line file
echo "
Vida, um rio que flui sem cessar,
Vida entre margens de sonho e realidade,
Vida na jornada da existência, a caminhar,
Vida explorando os caminhos da eternidade.

Vida, um oceano de possibilidades,
Vida onde as ondas dos momentos nos levam,
Vida num constante movimento de diversidades,
Vida e nas marés da vida, sempre navegamos.
" > ./${path}/oneMatchPerLine.txt

# Create one match per line sed file
sed 's/Vida/Tempo/g' ./${path}/oneMatchPerLine.txt > ./${path}/oneMatchPerLine.txt.result

# Create numbers file
echo "586081531971244570312700063339
364715173976429798500203824266
290424467946038412833543191114
463584080110557127673230980960
491218804262672662037701840049
790802744957056819386902223236
239785984262495089859898053433
405387306522324932067284355157
426059986231455973412914129533
" > ./${path}/numbers.txt

# Create numbers sed file
sed 's/5/Z/g' ./${path}/numbers.txt > ./${path}/numbers.txt.result

# Create special chars file
echo "-*]~%&,\$^]\n#[=<{*-*}<;\$\$\n^\"%|>+.?'\n{;_^(>=$;\n]\\\\';\\\\&}=>'" > ./${path}/specialChars.txt

# Create special chars sed file
sed 's/</___\"\n*\n\"___/g' ./${path}/specialChars.txt > ./${path}/specialChars.txt.result

# Inicializar contadores
total_tests=0
successful_tests=0

# Inicializar número do teste
test_number=0

# Run tests_______________________________________________________________________

echo -e "Running tests..."
echo -e "---------------------------------------------------------------"

# Test 1
((total_tests++))
echo -e "\n${purple}--------------------------- Test 1 ----------------------------"
echo -e "Test for file with no matches for <string_to_find>..."
echo -e "---------------------------------------------------------------"
echo -e "${gray}${PROGRAM} noMatches.txt tempo amor"
echo -e "${purple}---------------------------------------------------------------"
${PROGRAM} noMatches.txt tempo amor
echo -e "${blue}---------------------------------------------------------------"
if [  $? -eq 0 ]; then
	diff_output=$(diff ./${path}/noMatches.txt.result ./files_sed/noMatches.txt.sed)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ PASSED${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ FAILED${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"

# Test 2
((total_tests++))
echo -e "\n${purple}--------------------------- Test 2 ----------------------------"
echo -e "Test for file with one match per line..."
echo -e "---------------------------------------------------------------"
echo -e "${gray}${PROGRAM} oneMatchPerLine.txt Vida Tempo"
echo -e "${purple}---------------------------------------------------------------"
${PROGRAM} oneMatchPerLine.txt Vida Tempo
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff ./${path}/oneMatchPerLine.txt.result ./files_sed/oneMatchPerLine.txt.sed)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ PASSED${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ FAILED${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"

# Test 3
((total_tests++))
echo -e "\n${purple}--------------------------- Test 3 ----------------------------"
echo -e "Test for file with multiple matches for <string_to_find>..."
echo -e "---------------------------------------------------------------"
echo -e "${gray}${PROGRAM} multipleMatches.txt mar oceano"
echo -e "${purple}---------------------------------------------------------------"
${PROGRAM} multipleMatches.txt mar oceano
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff ./${path}/multipleMatches.txt.result ./files_sed/multipleMatches.txt.sed)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ PASSED${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ FAILED${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"

# Test 4
((total_tests++))
echo -e "\n${purple}--------------------------- Test 4 ----------------------------"
echo -e "Test for file with numbers..."
echo -e "---------------------------------------------------------------"
echo -e "${gray}${PROGRAM} numbers.txt 5 Z"
${PROGRAM} numbers.txt 5 Z
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff ./${path}/numbers.txt.result ./files_sed/numbers.txt.sed)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ PASSED${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ FAILED${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"

# Test 5
((total_tests++))
echo -e "\n${purple}--------------------------- Test 5 ----------------------------"
echo -e "Test for file with special characters..."
echo -e "---------------------------------------------------------------"
echo -e "${gray}${PROGRAM} specialChars.txt \"<\" \"___\"
*
\"___\""
echo -e "${purple}---------------------------------------------------------------"
${PROGRAM} specialChars.txt "<" "___\"
*
\"___"
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff ./${path}/specialChars.txt.result ./files_sed/specialChars.txt.sed)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ PASSED${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ FAILED${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"

# Test 6
((total_tests++))
echo -e "\n${purple}--------------------------- Test 6 ----------------------------"
echo -e "Test for empty file..."
echo -e "---------------------------------------------------------------"
echo -e "${gray}${PROGRAM} emptyFile.txt 5 Z"
echo -e "${purple}---------------------------------------------------------------${red}"
echo -e "[31;1m\nInput file is empty\n" > ././${path}/error1.txt
${PROGRAM} emptyFile.txt 5 Z > ././${path}/error1.output 2>&1
${PROGRAM} emptyFile.txt 5 Z
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff ./${path}/error1.txt ./${path}/error1.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ PASSED${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ FAILED${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"

echo -e "${blue}---------------------------------------------------------------"
echo -e "Tests finished..."
echo -e "---------------------------------------------------------------${reset}"

# Test 7
((total_tests++))
echo -e "\n${purple}--------------------------- Test 7 ----------------------------"
echo -e "Test for empty file..."
echo -e "---------------------------------------------------------------"
echo -e "${gray}${PROGRAM} noExist.txt 5 Z"
echo -e "${purple}---------------------------------------------------------------${red}"
echo -e "[31;1m\nError opening the file '${path}/noExist.txt'!\n" > ././${path}/error2.txt
${PROGRAM} noExist.txt 5 Z > ././${path}/error2.output 2>&1
${PROGRAM} noExist.txt 5 Z
echo -e "${blue}---------------------------------------------------------------"
if [ $? -eq 0 ]; then
	diff_output=$(diff ./${path}/error2.txt ./${path}/error2.output)
	if [ -z "$diff_output" ]; then
		echo -e "${green}✅ PASSED${reset}"
		((successful_tests++))
	else
		echo -e "${red}❌ FAILED${reset}"
	fi
fi
echo -e "${blue}---------------------------------------------------------------"

echo -e "${blue}---------------------------------------------------------------"
echo -e "Tests finished..."
echo -e "---------------------------------------------------------------${reset}"


# Calcular porcentagem de acertos
percentage=$(echo "scale=2; $successful_tests / $total_tests * 100" | bc)

# Imprimir resultados com cores
echo -e "\n\e[33mTestes realizados: \e[94m$total_tests\e[0m\n\e[33mTestes OK: \e[94m$successful_tests\e[0m\n\e[33mPorcentagem de acertos: \e[94m$percentage%\e[0m\n"

# Limpar recursos, se necessário
# ...

echo -e "Testes concluídos.\n"
# make fclean > /dev/null

