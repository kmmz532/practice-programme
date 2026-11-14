<?php
const MIN = 1;
const MAX = 100;

for ($i = MIN; $i <= MAX; ++$i) {
  printf("%d ", $i);
  if ($i % 5 === 0) printf("Fizz");
  if ($i % 3 === 0) printf("Buzz");
  printf("\n");
}
