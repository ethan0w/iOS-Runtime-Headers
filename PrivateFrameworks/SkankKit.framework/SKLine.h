/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@interface SKLine : SKLayer  {
    struct CGPoint { 
        float x; 
        float y; 
    } _endPoint;
    BOOL _horizontal;
    float _length;
    float _thickness;
}


- (void)setThickness:(float)arg1;
- (id)initWithPoint:(struct CGPoint { float x1; float x2; })arg1 length:(float)arg2 horizontal:(BOOL)arg3;
- (void)setPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setColor:(struct CGColor { }*)arg1;

@end
