from distutils.core import setup, Extension

setup(name='primeModule', version='1.0', \
      ext_modules=[Extension('primeModule', ['prime.c'])])
