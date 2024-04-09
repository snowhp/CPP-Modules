#!/bin/bash

numbers=$(shuf -i 1-100000 -n 3000)

numbers_str=$(echo $numbers | tr '\n' ' ')

echo $numbers_str

./PmergeMe $numbers_str
