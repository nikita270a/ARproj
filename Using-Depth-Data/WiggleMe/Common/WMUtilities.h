/*
See LICENSE folder for this sample’s licensing information.

Abstract:
Utilities.
*/

@import Foundation;
@import CoreGraphics;
@import CoreVideo;
@import ImageIO;
@import AVFoundation;

@interface WMUtilities : NSObject

+ (float)radAngleFromImageOrientation:(CGImagePropertyOrientation)orientation;

// Maintain image contents regardless of the orientation of the device
+ (float)fieldOfViewFromViewport:(CGSize)viewport
                depthOrientation:(float)depthAngleRad
                     focalLength:(float)focalLength
        referenceFrameDimensions:(CGSize)referenceFrameDimensions
             magnificationFactor:(float)magFactor;

+ (nullable NSDictionary *)imagePropertiesFromImageData:(nonnull NSData*)imageData;

+ (nullable AVDepthData *)depthDataFromImageData:(nonnull NSData *)imageData;

@end
