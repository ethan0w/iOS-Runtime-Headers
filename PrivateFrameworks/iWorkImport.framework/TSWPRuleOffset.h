/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRuleOffset : NSObject <NSCopying> {
    float  _dX;
    float  _dY;
}

@property (nonatomic, readonly) float dX;
@property (nonatomic, readonly) float dY;

+ (id)ruleOffset;
+ (id)ruleOffsetWithDX:(float)arg1 dY:(float)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)dX;
- (float)dY;
- (id)description;
- (id)init;
- (id)initWithArchive:(const struct Point { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; float x6; }*)arg1 unarchiver:(id)arg2;
- (id)initWithDX:(float)arg1 dY:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (struct CGPoint { float x1; float x2; })pointValue;
- (void)saveToArchive:(struct Point { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; float x6; }*)arg1 archiver:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeValue;

@end
