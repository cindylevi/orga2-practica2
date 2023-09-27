#include "student.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>

void printStudent(student_t *stud)
{
    printf("Nombre: %s\n", stud->name);
    printf("dni: %u\n", stud->dni);
    printf("Calificaciones: %u, %u, %u,\n", stud->califications[0], stud->califications[1], stud->califications[2]);
    printf("Concepto: %u\n", stud->concept);
}

void printStudentp(studentp_t *stud)
{
    printf("Nombre: %s\n", stud->name);
    printf("dni: %u\n", stud->dni);
    printf("Calificaciones: %u, %u, %u,\n", stud->califications[0], stud->califications[1], stud->califications[2]);
    printf("Concepto: %u\n", stud->concept);
}
