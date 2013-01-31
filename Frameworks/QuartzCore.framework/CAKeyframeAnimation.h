/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSArray;

@interface CAKeyframeAnimation : CAPropertyAnimation  {
}

@property(copy) NSArray * values;
@property struct CGPath { }* path;
@property(copy) NSArray * keyTimes;
@property(copy) NSArray * timingFunctions;
@property(copy) NSString * calculationMode;
@property(copy) NSArray * tensionValues;
@property(copy) NSArray * continuityValues;
@property(copy) NSArray * biasValues;
@property(copy) NSString * rotationMode;


- (id)timingFunctions;
- (struct CGPath { }*)path;
- (void)CA_prepareRenderValue;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setTimingFunctions:(id)arg1;
- (id)keyTimes;
- (void)setKeyTimes:(id)arg1;
- (id)values;
- (void)setCalculationMode:(id)arg1;
- (void)setValues:(id)arg1;
- (void)setRotationMode:(id)arg1;
- (void)setBiasValues:(id)arg1;
- (void)setContinuityValues:(id)arg1;
- (void)setTensionValues:(id)arg1;
- (id)rotationMode;
- (id)biasValues;
- (id)continuityValues;
- (id)tensionValues;
- (id)calculationMode;
- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; void *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)_copyRenderAnimationForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; void *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg1 layer:(id)arg2;

@end
