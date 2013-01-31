/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADGraphicProperties, EDResources;

@interface CHDDataLabel : NSObject  {
    EDResources *mResources;
    unsigned int mStringIndex;
    unsigned int mContentFormatId;
    int mPosition;
    boolmShowLeaderLines;
    boolmShowCategoryName;
    boolmShowSeriesName;
    boolmShowPercent;
    boolmShowValue;
    boolmShowLegendKey;
    boolmIsPositionAffineTransform;
    double mRotation;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)dataLabelWithResources:(id)arg1;

- (void)setString:(id)arg1;
- (id)string;
- (void)dealloc;
- (void)setStringIndex:(unsigned int)arg1;
- (unsigned int)stringIndex;
- (double)rotationAngle;
- (bool)isPositionAffineTransform;
- (void)setIsPositionAffineTransform:(bool)arg1;
- (bool)isShowLegendKey;
- (bool)isShowPercent;
- (bool)isShowSeriesName;
- (bool)isShowCategoryName;
- (bool)isShowLeaderLines;
- (void)setContentFormat:(id)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setShowSeriesName:(bool)arg1;
- (void)setShowLegendKey:(bool)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setShowPercent:(bool)arg1;
- (void)setShowCategoryName:(bool)arg1;
- (void)setShowLeaderLines:(bool)arg1;
- (id)initWithResources:(id)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (bool)isShowValue;
- (id)contentFormat;
- (unsigned int)contentFormatId;
- (id)graphicProperties;
- (void)setShowValue:(bool)arg1;
- (int)position;
- (void)setPosition:(int)arg1;

@end
