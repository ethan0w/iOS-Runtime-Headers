/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPhonePath : MFPath  {
    struct CGPath { } *m_path;
    int m_state;
}


- (int)state;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (struct CGPath { }*)getBezierPath;
- (id)initWithPath:(struct CGPath { }*)arg1 state:(int)arg2;
- (void)appendBezierPath:(struct CGPath { }*)arg1 dc:(id)arg2;
- (int)fill:(id)arg1;
- (int)widen:(id)arg1;
- (int)closeFigure;
- (int)abort;
- (int)stroke:(id)arg1;
- (int)flatten;
- (int)end;
- (int)begin;
- (struct CGPoint { float x1; float x2; })currentPoint;
- (BOOL)isOpen;

@end
