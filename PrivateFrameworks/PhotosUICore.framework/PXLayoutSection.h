/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLayoutSection : NSObject {
    BOOL  _accurate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _frame;
    NSMutableDictionary * _geometriesByKind;
    NSArray * _geometryKinds;
    unsigned int  _identifier;
    int  _index;
}

@property (getter=isAccurate, nonatomic) BOOL accurate;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property (nonatomic, retain) NSArray *geometryKinds;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) int index;
@property (nonatomic) struct CGSize { float x1; float x2; } size;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateGeometriesWithBlock:(id /* block */)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)geometriesWithKind:(int)arg1;
- (id)geometryKinds;
- (unsigned int)hash;
- (unsigned int)identifier;
- (int)index;
- (id)init;
- (BOOL)isAccurate;
- (void)setAccurate:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGeometries:(id)arg1 withKind:(int)arg2;
- (void)setGeometryKinds:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setIndex:(int)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;

@end
