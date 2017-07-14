/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceLandmarksRegion2D : CVMLFaceLandmarksRegion {
    const struct CGPoint { float x1; float x2; } * _points;
}

@property const struct CGPoint { float x1; float x2; }*points;

- (void)dealloc;
- (id)initWithPoints:(struct CGPoint { float x1; float x2; }*)arg1 pointCount:(unsigned int)arg2;
- (struct CGPoint { float x1; float x2; })pointAtIndex:(unsigned int)arg1;
- (const struct CGPoint { float x1; float x2; }*)points;
- (void)setPoints:(const struct CGPoint { float x1; float x2; }*)arg1;

@end
