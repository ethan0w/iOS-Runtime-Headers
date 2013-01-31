/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBMirrorFilter : PBFilter  {
    float lastInputX;
    float lastInputY;
    float lastInputAngle;
    boolfirstTime;
    struct CGPoint { 
        float x; 
        float y; 
    } inputPoint;
    float inputOrientation;
}

@property struct CGPoint { float x1; float x2; } inputPoint;
@property float inputOrientation;


- (float)inputOrientation;
- (void)setInputOrientation:(float)arg1;
- (void)applyParametersToCIFilter:(BOOL)arg1 extent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)needsWrapMirror;
- (id)ciFilterName;
- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })inputPoint;
- (void)setDefaults;

@end
