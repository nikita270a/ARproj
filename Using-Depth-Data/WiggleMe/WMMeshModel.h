/*
See LICENSE folder for this sample’s licensing information.

Abstract:
Mesh model.
*/

@import Metal;
@import CoreVideo;

#import "WMTypes.h"

@interface WMMeshModel: NSObject

@property (nonatomic, readonly) id<MTLBuffer> _Nonnull vertexBuffer;
@property (nonatomic, readonly) id<MTLBuffer> _Nonnull indexBuffer;
@property (nonatomic, assign) matrix_float4x4 modelMatrix;

- (nonnull instancetype)initWithColumns:(int)numColumns
                                   rows:(int)numRows
                            modelMatrix:(matrix_float4x4)modelMatrix
                                 device:(nonnull id<MTLDevice>)device;

- (void)setTextureOrientation:(float)radAngle;
- (void)setDepthMap:(nonnull CVPixelBufferRef)depthMap
    intrinsicMatrix:(matrix_float3x3)intrinsicMatrix
intrinsicMatrixReferenceDimensions:(CGSize)intrinsicMatrixReferenceDimensions;

@end
