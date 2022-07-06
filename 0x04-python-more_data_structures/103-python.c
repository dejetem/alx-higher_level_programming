#include <stdio.h>
#include <stdlib.h>
#include <Python.h>

/**
 * print_python - prints info about python lists and Python bytes objects.
 * @p: address of python object struct
 */

void print_python_bytes(PyObject *p)
{
size_t i, l, size;
char *s;

printf("[.] bytes object info\n");
if (strcmp(p->ob_type->tp_name, "bytes"))

{
printf("  [ERROR] Invalid Bytes Object\n");
return;
}
size = ((PyVarObject *)p)->ob_size;
s = ((PyBytesObject *)p)->ob_sval;
l =  size + 1 > 10 ? 10 : size + 1;
printf("  size: %lu\n", size);
printf("  trying string: %s\n", s);
printf("  first %lu bytes: ", l);
for (i = 0; i < l; i++)
printf("%02hhx%s", s[i], i + 1 < l ? " " : "");
printf("\n");
}


/**
 * print_python - prints info about python lists and Python bytes objects.
 * @p: address of python object struct
 */

void print_python_list(PyObject *p)
{
int i;
printf("[*] Python list info\n");
printf("[*] Size of the Python List = %lu\n", ((PyVarObject *)p)->ob_size);
printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
for (i = 0; i < ((PyVarObject *)p)->ob_size; i++)
{
printf("Element %d: %s\n", i,((PyListObject *)p)->ob_item[i]->ob_type->tp_name);
if (!strcmp(((PyListObject *)p)->ob_item[i]->ob_type->tp_name, "bytes"))
print_python_bytes(((PyListObject *)p)->ob_item[i]);
}
}
