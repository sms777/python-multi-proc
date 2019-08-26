from multiprocessing import Pool
import primeModule

print("Number of cpus : ", multiprocessing.cpu_count())


if __name__ == "__main__":
    pool = Pool(processes=4)              # start 4 worker processes

    print(pool.map(primeModule.prime, range(10)))
