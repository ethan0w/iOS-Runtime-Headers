/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLayoutGenerator : NSObject <NSCopying> {
    unsigned int  _itemCount;
    id /* block */  _itemLayoutInfoBlock;
    PXLayoutMetrics * _metrics;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } estimatedSize;
@property (nonatomic, readonly) NSIndexSet *geometryKinds;
@property (nonatomic) unsigned int itemCount;
@property (nonatomic, copy) id /* block */ itemLayoutInfoBlock;
@property (nonatomic, readonly, copy) PXLayoutMetrics *metrics;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { float x1; float x2; })estimatedSize;
- (id)geometryKinds;
- (void)getGeometries:(struct _PXLayoutGeometry { int x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; int x6; }*)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 withKind:(int)arg3;
- (id)init;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (unsigned int)itemCount;
- (id /* block */)itemLayoutInfoBlock;
- (id)metrics;
- (unsigned int)numberOfGeometriesWithKind:(int)arg1;
- (void)setItemCount:(unsigned int)arg1;
- (void)setItemLayoutInfoBlock:(id /* block */)arg1;
- (struct CGSize { float x1; float x2; })size;

@end
