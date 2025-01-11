

typedef struct float_vector FLoatVector;

FLoatVector *create(int capacity);
void destroy(FLoatVector **vec_ref);
int size(const FLoatVector *vec);
int capacity(const FLoatVector *vec);
float at(const FLoatVector *vec, int index);
float get(const FLoatVector *vec, int index);
void append(FLoatVector *vec, float val);
void set(FLoatVector *vec, int index, float val);
void print(const FLoatVector *vec);




