/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTileTechnique : OADImageFillTechnique  {
    float mOffsetX;
    BOOL mIsOffsetXOverridden;
    float mOffsetY;
    BOOL mIsOffsetYOverridden;
    float mScaleX;
    BOOL mIsScaleXOverridden;
    float mScaleY;
    BOOL mIsScaleYOverridden;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    int mAlignment;
    BOOL mIsAlignmentOverridden;
}

+ (id)defaultProperties;

- (float)offsetY;
- (float)offsetX;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)scaleY;
- (float)scaleX;
- (BOOL)isAlignmentOverridden;
- (BOOL)isScaleYOverridden;
- (BOOL)isScaleXOverridden;
- (BOOL)isOffsetYOverridden;
- (BOOL)isOffsetXOverridden;
- (void)setScaleY:(float)arg1;
- (void)setScaleX:(float)arg1;
- (void)setOffsetY:(float)arg1;
- (void)setOffsetX:(float)arg1;
- (int)flipMode;
- (BOOL)isFlipModeOverridden;
- (void)setFlipMode:(int)arg1;
- (id)initWithDefaults;
- (int)alignment;
- (void)setAlignment:(int)arg1;

@end
