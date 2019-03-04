/*
See LICENSE folder for this sample’s licensing information.

Abstract:
Matrix utilities.
*/

@import simd;

// Normalized device coordinates
static const matrix_float4x4 matrix_ndc_float4x4;

matrix_float4x4 matrix_from_frustrum(float left, float right, float bottom, float top, float nearZ, float farZ);
matrix_float4x4 matrix_from_perspective(float fovY, float aspect, float nearZ, float farZ);
matrix_float4x4 matrix_from_translation(float x, float y, float z);
matrix_float4x4 matrix_from_rotation(float radians, float x, float y, float z);
matrix_float4x4 matrix_from_scale(float sx, float sy, float sz);

