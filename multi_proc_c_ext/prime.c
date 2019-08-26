#include <Python.h>

int Cprime(int n)
{
   int c = 2;
 
   for ( c = 2 ; c <= n - 1 ; c++ )
   {
      if ( n%c == 0 )
      {
         return 0;
      }
   }
   if ( c == n )
      return 1;
}

static PyObject* prime(PyObject* self, PyObject* args)
{
    int n;

    if(!PyArg_ParseTuple(args, "i", &n))
        return NULL;

    return Py_BuildValue("i", Cprime(n));
}

static PyMethodDef primeMethods[] = {
    { "prime", prime, METH_VARARGS, "Determines if a number is prime" },
    { NULL, NULL, 0, NULL }
};

static struct PyModuleDef primeModule = {
    PyModuleDef_HEAD_INIT,
    "primeModule",
    "Prime Module",
    -1,
    primeMethods
};

PyMODINIT_FUNC PyInit_primeModule(void)
{
    return PyModule_Create(&primeModule);
}