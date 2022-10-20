#include "libmypy.h"
#include <Python.h>

char hellofunc_docs[] = "Hello world description.";
char heymanfunc_docs[] = "Echo your name and passed number.";

static PyMethodDef helloworld_funcs[] = {
	{"hello", (PyCFunction)hello, METH_NOARGS, hellofunc_docs},
	{"heyman", (PyCFunction)heyman, METH_VARARGS, heymanfunc_docs},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef helloworld_mod = {
	PyModuleDef_HEAD_INIT,
	"helloworld",
	"mod doc",
	-1,
	helloworld_funcs,
};

PyMODINIT_FUNC PyInit_helloworld(void) {
	return PyModule_Create(&helloworld_mod);
}
