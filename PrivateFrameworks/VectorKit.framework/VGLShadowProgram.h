/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLShadowProgram : VGLRealisticFadeProgram  {
    struct { 
        float x; 
        float y; 
        float z; 
    } _cameraDirection;
    int _uCameraDirection;
    float _ramp;
    int _uRamp;
    float _width;
    int _uWidth;
    float _taper;
    int _uTaper;
}

@property struct { float x1; float x2; float x3; } cameraDirection;
@property float ramp;
@property float width;
@property float taper;

+ (id)program;

- (float)taper;
- (struct { float x1; float x2; float x3; })cameraDirection;
- (float)ramp;
- (void)setTaper:(float)arg1;
- (void)setCameraDirection:(struct { float x1; float x2; float x3; })arg1;
- (void)setRamp:(float)arg1;
- (id)init;
- (void)setWidth:(float)arg1;
- (float)width;

@end
