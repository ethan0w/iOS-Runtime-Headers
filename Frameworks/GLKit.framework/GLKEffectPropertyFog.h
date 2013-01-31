/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKEffectPropertyFog : GLKEffectProperty  {
    unsigned char _enabled;
    int _mode;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    } _color;
    float _density;
    float _start;
    float _end;
    int _modeLoc;
    int _colorLoc;
    int _densityLoc;
    int _startLoc;
    int _endLoc;
}

@property unsigned char enabled;
@property int mode;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } color;
@property float density;
@property float start;
@property float end;
@property int modeLoc;
@property int colorLoc;
@property int densityLoc;
@property int startLoc;
@property int endLoc;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (id)description;
- (void)dealloc;
- (id)init;
- (void)setEnd:(float)arg1;
- (void)setStart:(float)arg1;
- (unsigned char)enabled;
- (float)end;
- (float)start;
- (int)mode;
- (void)setMode:(int)arg1;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })color;
- (void)setColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setEnabled:(unsigned char)arg1;
- (void)bind;
- (void)setEndLoc:(int)arg1;
- (int)endLoc;
- (void)setStartLoc:(int)arg1;
- (int)startLoc;
- (void)setDensityLoc:(int)arg1;
- (int)densityLoc;
- (void)setColorLoc:(int)arg1;
- (int)colorLoc;
- (void)setModeLoc:(int)arg1;
- (int)modeLoc;
- (float)density;
- (void)setDensity:(float)arg1;
- (void)setShaderBindings;
- (void)initializeMasks;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (void)dirtyAllUniforms;

@end
