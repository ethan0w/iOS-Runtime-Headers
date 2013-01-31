/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFHighlightLayer : CALayer  {
    struct CGPath { } *_clipPath;
    struct CGPath { } *_borderPath;
    struct CGPoint { 
        float x; 
        float y; 
    } offset;
}

@property struct CGPath { }* clipPath;
@property struct CGPath { }* borderPath;
@property struct CGPoint { float x1; float x2; } offset;


- (void)dealloc;
- (void)setBorderPath:(struct CGPath { }*)arg1;
- (struct CGPath { }*)borderPath;
- (void)setClipPath:(struct CGPath { }*)arg1;
- (struct CGPath { }*)clipPath;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })offset;

@end
