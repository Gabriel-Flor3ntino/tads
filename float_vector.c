#include "float_vector.h"
#include <stdlib.h>
#include<stdio.h>


struct float_vector{
    int capacity; //num máximo de elementos
    int size; //qtde de elementos armazenados atualmente
    float * data; // vetor de floats
};

/**
 * @brief Cria (aloca) um vetor de floats como uma dada capacidade
 * 
 * @param capacity Capacidae do vetor
 * @return FloatVector* Um vetor de floats alocado/criado
 */
FLoatVector *create(int capacity){
    FLoatVector *vec = (FLoatVector*) calloc(1, sizeof(FLoatVector));
    vec->size = 0;
    vec->capacity = capacity;
    vec->data = (float*) calloc(capacity,sizeof(float));


    return vec;
}

void destroy(FLoatVector **vec_ref){
    FLoatVector *vec = *vec_ref;

    free(vec->data);
    free(vec);
    *vec_ref = NULL;

}


void append(FLoatVector *vec, float val){
    if (vec->size == vec->capacity){
        fprintf(stderr,"ERROR in 'append'\n");
        fprintf(stderr, "Vector is full\n");
        exit(EXIT_FAILURE);
    }

    vec->data[vec->size] = val;
    vec->size++;
}


void print(const FLoatVector *vec){
    puts("---------------------------");
    printf("Size: %d\n", vec->size);
    printf("Capacity: %d\n", vec->capacity);
    puts("---");

    for (int i = 0; i < vec->size; i++){
        printf("[%d] = %f\n", i, vec->data[i]);
    }
    puts("--------------------------\n");
}
