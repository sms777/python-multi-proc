#!/usr/bin/python3

import sys
from multiprocessing import Pool, cpu_count
import primeModule

number_of_cpus = cpu_count()
print("Number of cpus :", number_of_cpus)
print("Looking for primes up to", sys.argv[1])
if __name__ == "__main__":
    pool = Pool(processes=number_of_cpus)

    result = pool.map(primeModule.prime, range(2, int(sys.argv[1])))
    print("Results :", result)
    amount = result.count(1)
    print("Number of primes :", amount)
