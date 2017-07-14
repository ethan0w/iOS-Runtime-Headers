/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKTSDBezierPath : NSObject <NSCoding, NSCopying> {
    struct { 
        unsigned int sfr_flags : 8; 
        unsigned int sfr_pathState : 2; 
        unsigned int sfr_calculatedLengths : 1; 
        unsigned int sfr_unused : 21; 
    }  sfr_bpFlags;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  sfr_controlPointBounds;
    unsigned int  sfr_dashedLineCount;
    float * sfr_dashedLinePattern;
    float  sfr_dashedLinePhase;
    int  sfr_elementCount;
    float * sfr_elementLength;
    int  sfr_elementMax;
    int  sfr_extraSegmentCount;
    int  sfr_extraSegmentMax;
    void * sfr_extraSegments;
    float  sfr_flatness;
    struct PATHSEGMENT { unsigned int x1 : 4; unsigned int x2 : 28; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; } * sfr_head;
    int  sfr_lastSubpathIndex;
    float  sfr_lineWidth;
    float  sfr_miterLimit;
    void * sfr_path;
    float  sfr_totalLength;
}

+ (id)bezierPath;
+ (id)bezierPathWithCGPath:(struct CGPath { }*)arg1;
+ (id)bezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cornerRadius:(float)arg2;
+ (id)bezierPathWithStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2;
+ (void)clipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (float)defaultFlatness;
+ (unsigned int)defaultLineCapStyle;
+ (unsigned int)defaultLineJoinStyle;
+ (float)defaultLineWidth;
+ (float)defaultMiterLimit;
+ (unsigned int)defaultWindingRule;
+ (void)fillRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (float)flatness;
+ (void)initialize;
+ (unsigned int)lineCapStyle;
+ (unsigned int)lineJoinStyle;
+ (float)lineWidth;
+ (float)miterLimit;
+ (void)setDefaultFlatness:(float)arg1;
+ (void)setDefaultLineCapStyle:(unsigned int)arg1;
+ (void)setDefaultLineJoinStyle:(unsigned int)arg1;
+ (void)setDefaultLineWidth:(float)arg1;
+ (void)setDefaultMiterLimit:(float)arg1;
+ (void)setDefaultWindingRule:(unsigned int)arg1;
+ (void)setFlatness:(float)arg1;
+ (void)setLineCapStyle:(unsigned int)arg1;
+ (void)setLineJoinStyle:(unsigned int)arg1;
+ (void)setLineWidth:(float)arg1;
+ (void)setMiterLimit:(float)arg1;
+ (void)setWindingRule:(unsigned int)arg1;
+ (void)strokeLineFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (void)strokeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (unsigned int)windingRule;

- (struct CGPath { }*)CGPath;
- (void)_addPathSegment:(int)arg1 point:(struct CGPoint { float x1; float x2; })arg2;
- (void)_appendArcSegmentWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)_appendToPath:(id)arg1;
- (id)_copyFlattenedPath;
- (void)_deviceClosePath;
- (void)_deviceCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)_deviceLineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_deviceMoveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_doPath;
- (void)addClip;
- (void)addIntersectionsWithLine:(struct CGPoint { float x1; float x2; })arg1 to:(id)arg2;
- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2;
- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 allIntersections:(BOOL)arg3 reversed:(BOOL)arg4;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPath:(id)arg1 fromSegment:(int)arg2 t:(float)arg3 toSegment:(int)arg4 t:(float)arg5 withoutMove:(BOOL)arg6;
- (void)appendBezierPath:(id)arg1 fromSegment:(int)arg2 toSegment:(int)arg3;
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithPoints:(struct CGPoint { float x1; float x2; }*)arg1 count:(int)arg2;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)bezierPathByFlatteningPath;
- (id)bezierPathByReversingPath;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (const char *)cString;
- (float)calculateLengthOfElement:(int)arg1;
- (void)calculateLengths;
- (id)chisel;
- (void)closePath;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })controlPointBounds;
- (id)copyFromSegment:(int)arg1 t:(float)arg2 toSegment:(int)arg3 t:(float)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { float x1; float x2; })currentPoint;
- (float)curvatureAt:(float)arg1;
- (float)curvatureAt:(float)arg1 fromElement:(int)arg2;
- (void)curveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)dealloc;
- (id)description;
- (unsigned int)elementAtIndex:(int)arg1;
- (unsigned int)elementAtIndex:(int)arg1 allPoints:(struct CGPoint { float x1; float x2; }*)arg2;
- (unsigned int)elementAtIndex:(int)arg1 associatedPoints:(struct CGPoint { float x1; float x2; }*)arg2;
- (int)elementCount;
- (int)elementPercentage:(float*)arg1 forOverallPercentage:(float)arg2;
- (float)elementPercentageFromElement:(int)arg1 forOverallPercentage:(float)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)fill;
- (float)flatness;
- (void)flattenIntoPath:(id)arg1;
- (void)getLineDash:(float*)arg1 count:(int*)arg2 phase:(float*)arg3;
- (void)getStartPoint:(struct CGPoint { float x1; float x2; }*)arg1 andEndPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (struct CGPoint { float x1; float x2; })gradientAt:(float)arg1;
- (struct CGPoint { float x1; float x2; })gradientAt:(float)arg1 fromElement:(int)arg2;
- (id)init;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isClockwise;
- (BOOL)isEmpty;
- (BOOL)isFlat;
- (float)length;
- (float)lengthOfElement:(int)arg1;
- (float)lengthToElement:(int)arg1;
- (unsigned int)lineCapStyle;
- (unsigned int)lineJoinStyle;
- (void)lineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)lineWidth;
- (float)miterLimit;
- (void)moveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })myGradientAt:(float)arg1;
- (struct CGPoint { float x1; float x2; })myGradientAt:(float)arg1 fromElement:(int)arg2;
- (struct CGPoint { float x1; float x2; })nearestAngleOnPathToLine:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })nearestPointOnPathToLine:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })pointAt:(float)arg1 fromElement:(int)arg2;
- (id)pressure;
- (struct CGPoint { float x1; float x2; })rawGradientAt:(float)arg1 fromElement:(int)arg2;
- (void)recursiveSubdivideOntoPath:(id)arg1 into:(id)arg2;
- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(struct { float x1; float x2; })arg2 inElementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 into:(id)arg4;
- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(struct { float x1; float x2; })arg2 into:(id)arg3;
- (void)relativeCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)relativeLineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)relativeMoveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)removeAllPoints;
- (void)setAssociatedPoints:(struct CGPoint { float x1; float x2; }*)arg1 atIndex:(int)arg2;
- (void)setFlatness:(float)arg1;
- (void)setLineCapStyle:(unsigned int)arg1;
- (void)setLineDash:(const float*)arg1 count:(int)arg2 phase:(float)arg3;
- (void)setLineJoinStyle:(unsigned int)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setMiterLimit:(float)arg1;
- (void)setWindingRule:(unsigned int)arg1;
- (void)stroke;
- (void)subdivideBezierWithFlatness:(float)arg1 startPoint:(struct CGPoint { float x1; float x2; })arg2 controlPoint1:(struct CGPoint { float x1; float x2; })arg3 controlPoint2:(struct CGPoint { float x1; float x2; })arg4 endPoint:(struct CGPoint { float x1; float x2; })arg5;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGPoint { float x1; float x2; })transformedCoordinate:(struct CGPoint { float x1; float x2; })arg1 withPressure:(id)arg2;
- (struct CGPoint { float x1; float x2; })transformedTotalCoordinate:(struct CGPoint { float x1; float x2; })arg1 betweenElement:(int)arg2 andElement:(int)arg3 withPressure:(id)arg4 getElement:(int*)arg5 getPercentage:(float*)arg6;
- (struct CGPoint { float x1; float x2; })transformedTotalCoordinate:(struct CGPoint { float x1; float x2; })arg1 inElement:(int)arg2 withPressure:(id)arg3;
- (unsigned int)windingRule;

@end
