/*
See LICENSE folder for this sample’s licensing information.

Abstract:
Wiggle effect renderer.
*/

@import Foundation;
@import Metal;
@import MetalKit;
@import CoreVideo;

@class WMCamera;

@interface WMRenderer : NSObject<MTKViewDelegate>

@property (nonatomic, assign) float focalMagnificationFactor;

- (nullable instancetype)initWithView:(nonnull MTKView *)view;
- (void)reshape;
- (void)update;
- (void)render;
- (void)setDepthMap:(nonnull CVPixelBufferRef)depthMap intrinsicMatrix:(matrix_float3x3)intrinsicMatrix intrinsicMatrixReferenceDimensions:(CGSize)intrinsicMatrixReferenceDimensions;
- (void)setDepthMapOrientation:(float)angleRad;
- (void)setTextureOrientation:(float)angleRad;
- (void)setTexture:(nonnull UIImage*)image;
- (void)setCamera:(nonnull WMCamera*)camera;
- (nonnull WMCamera*)copyCamera;

@end
