/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor, OADLineJoin, OADLineEnd, OADDash, OADFill;

@interface OADStroke : OADProperties <NSCopying> {
    OADColor *mColor;
    OADFill *mFill;
    OADDash *mDash;
    OADLineJoin *mJoin;
    OADLineEnd *mHead;
    OADLineEnd *mTail;
    float mWidth;
    unsigned char mCap;
    unsigned char mCompoundType;
    unsigned char mPenAlignment;
    unsigned int mIsColorOverridden : 1;
    unsigned int mIsCompoundTypeOverridden : 1;
    unsigned int mIsCapOverridden : 1;
    unsigned int mIsWidthOverridden : 1;
    unsigned int mIsJoinOverridden : 1;
    unsigned int mIsDashOverridden : 1;
    unsigned int mIsFillOverridden : 1;
    unsigned int mIsPenAlignmentOverridden : 1;
}

@property(retain) OADLineEnd * head;
@property(retain) OADLineEnd * tail;

+ (id)defaultProperties;
+ (id)blackStroke;
+ (id)nullStroke;

- (id)head;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setTail:(id)arg1;
- (void)setHead:(id)arg1;
- (int)penAlignment;
- (BOOL)isPenAlignmentOverridden;
- (BOOL)isCapOverridden;
- (BOOL)isJoinOverridden;
- (void)setPenAlignment:(int)arg1;
- (void)setStyleColor:(id)arg1;
- (id)initWithDefaults;
- (id)join;
- (void)setCompoundType:(int)arg1;
- (void)setJoin:(id)arg1;
- (void)setCap:(int)arg1;
- (int)cap;
- (void)setDash:(id)arg1;
- (id)tail;
- (void)setParent:(id)arg1;
- (void)setFill:(id)arg1;
- (int)compoundType;
- (BOOL)isCompoundTypeOverridden;
- (id)dash;
- (BOOL)isDashOverridden;
- (BOOL)isFillOverridden;
- (BOOL)isColorOverridden;
- (BOOL)isWidthOverridden;
- (id)color;
- (void)setColor:(id)arg1;
- (void)setWidth:(float)arg1;
- (float)width;
- (id)fill;

@end
