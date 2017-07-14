/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCylinder : SCNGeometry {
    float  _cylinderheight;
    int  _cylinderheightSegmentCount;
    int  _cylinderprimitiveType;
    int  _cylinderradialSegmentCount;
    float  _cylinderradialSpan;
    float  _cylinderradius;
}

@property (nonatomic) float height;
@property (nonatomic) int heightSegmentCount;
@property (nonatomic) int radialSegmentCount;
@property (nonatomic) float radius;

+ (id)cylinderWithRadius:(float)arg1 height:(float)arg2;
+ (BOOL)supportsSecureCoding;

- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct __C3DAABB {} *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned short x_10_1_1; struct { bool x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; } x_10_1_2; struct __C3DMeshElement {} *x_10_1_3; struct __C3DMeshSource {} *x_10_1_4; struct __C3DMesh {} *x_10_1_5; } x10; }*)__createCFObject;
- (void)_setupObjCModelFrom:(id)arg1;
- (void)_syncObjCModel:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFSet {} *x_1_1_5; struct __CFArray {} *x_1_1_6; struct __C3DAABB {} *x_1_1_7; unsigned int x_1_1_8 : 1; int (*x_1_1_9)(); struct { unsigned short x_10_2_1; struct { bool x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; } x_10_2_2; struct __C3DMeshElement {} *x_10_2_3; struct __C3DMeshSource {} *x_10_2_4; struct __C3DMesh {} *x_10_2_5; } x_1_1_10; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; int x_2_1_13; int x_2_1_14; int x_2_1_15; int x_2_1_16; int x_2_1_17; int x_2_1_18; int x_2_1_19; int x_2_1_20; int x_2_1_21; int x_2_1_22; int x_2_1_23; unsigned int x_2_1_24; } x2; }*)arg1;
- (id)copy;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 max:(struct SCNVector3 { float x1; float x2; float x3; }*)arg2;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 radius:(float*)arg2;
- (float)height;
- (int)heightSegmentCount;
- (id)init;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFSet {} *x_1_1_5; struct __CFArray {} *x_1_1_6; struct __C3DAABB {} *x_1_1_7; unsigned int x_1_1_8 : 1; int (*x_1_1_9)(); struct { unsigned short x_10_2_1; struct { bool x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; } x_10_2_2; struct __C3DMeshElement {} *x_10_2_3; struct __C3DMeshSource {} *x_10_2_4; struct __C3DMesh {} *x_10_2_5; } x_1_1_10; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; int x_2_1_13; int x_2_1_14; int x_2_1_15; int x_2_1_16; int x_2_1_17; int x_2_1_18; int x_2_1_19; int x_2_1_20; int x_2_1_21; int x_2_1_22; int x_2_1_23; unsigned int x_2_1_24; } x2; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFSet {} *x_1_1_5; struct __CFArray {} *x_1_1_6; struct __C3DAABB {} *x_1_1_7; unsigned int x_1_1_8 : 1; int (*x_1_1_9)(); struct { unsigned short x_10_2_1; struct { bool x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; } x_10_2_2; struct __C3DMeshElement {} *x_10_2_3; struct __C3DMeshSource {} *x_10_2_4; struct __C3DMesh {} *x_10_2_5; } x_1_1_10; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; int x_2_1_13; int x_2_1_14; int x_2_1_15; int x_2_1_16; int x_2_1_17; int x_2_1_18; int x_2_1_19; int x_2_1_20; int x_2_1_21; int x_2_1_22; int x_2_1_23; unsigned int x_2_1_24; } x2; }*)arg1;
- (id)presentationCylinder;
- (id)presentationGeometry;
- (int)primitiveType;
- (int)radialSegmentCount;
- (float)radialSpan;
- (float)radius;
- (void)setHeight:(float)arg1;
- (void)setHeightSegmentCount:(int)arg1;
- (void)setPrimitiveType:(int)arg1;
- (void)setRadialSegmentCount:(int)arg1;
- (void)setRadialSpan:(float)arg1;
- (void)setRadius:(float)arg1;

@end
