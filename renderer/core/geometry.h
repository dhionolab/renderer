#ifndef GEOMETRY_H
#define GEOMETRY_H

#define EPSILON 1e-6f
#define PI 3.141592653589793f
#define TO_RADIANS(degrees) ((PI / 180) * degrees)
#define TO_DEGREES(radians) ((180 / PI) * radians)

typedef struct {float x, y;} vec2_t;
typedef struct {float x, y, z;} vec3_t;
typedef struct {float x, y, z, w;} vec4_t;
typedef struct {float m[3][3];} mat3_t;
typedef struct {float m[4][4];} mat4_t;

/* vec2 related functions */
vec2_t vec2_new(float x, float y);
vec2_t vec2_add(vec2_t a, vec2_t b);
vec2_t vec2_sub(vec2_t a, vec2_t b);
vec2_t vec2_mul(vec2_t v, float factor);
vec2_t vec2_div(vec2_t v, float divisor);
void vec2_print(const char *name, vec2_t v);

/* vec3 related functions */
vec3_t vec3_new(float x, float y, float z);
vec3_t vec3_from_vec4(vec4_t v);
vec3_t vec3_add(vec3_t a, vec3_t b);
vec3_t vec3_sub(vec3_t a, vec3_t b);
vec3_t vec3_mul(vec3_t v, float factor);
vec3_t vec3_div(vec3_t v, float divisor);
float vec3_length(vec3_t v);
vec3_t vec3_normalize(vec3_t v);
float vec3_dot(vec3_t a, vec3_t b);
vec3_t vec3_cross(vec3_t a, vec3_t b);
vec3_t vec3_saturate(vec3_t v);
vec3_t vec3_modulate(vec3_t a, vec3_t b);
void vec3_print(const char *name, vec3_t v);

/* vec4 related functions */
vec4_t vec4_new(float x, float y, float z, float w);
vec4_t vec4_from_vec3(vec3_t v, float w);
vec4_t vec4_saturate(vec4_t v);
vec4_t vec4_modulate(vec4_t a, vec4_t b);
void vec4_print(const char *name, vec4_t v);

/* mat3 related functions */
mat3_t mat3_identity(void);
vec3_t mat3_mul_vec3(mat3_t m, vec3_t v);
mat3_t mat3_mul_mat3(mat3_t a, mat3_t b);
mat3_t mat3_inverse(mat3_t m);
mat3_t mat3_transpose(mat3_t m);
mat3_t mat3_inverse_transpose(mat3_t m);
void mat3_print(const char *name, mat3_t m);

/* mat4 related functions */
mat4_t mat4_identity(void);
vec4_t mat4_mul_vec4(mat4_t m, vec4_t v);
mat4_t mat4_mul_mat4(mat4_t a, mat4_t b);
mat4_t mat4_inverse(mat4_t m);
mat4_t mat4_transpose(mat4_t m);
mat4_t mat4_inverse_transpose(mat4_t m);
void mat4_print(const char *name, mat4_t m);

#endif
