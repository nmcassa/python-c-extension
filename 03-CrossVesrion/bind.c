#include "libmypy.h"

char hellofunc_docs[] = "Hello world description.";
char heymanfunc_docs[] = "Echo your name and passed number.";
char addfunc_docs[] = "Add two numbers function.";

PyMethodDef helloworld_funcs[] = {
	{"hello", (PyCFunction)hello, METH_NOARGS, hellofunc_docs},
	{"heyman", (PyCFunction)heyman, METH_VARARGS, heymanfunc_docs},
	{"add", (PyCFunction)add, METH_VARARGS, addfunc_docs},

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
