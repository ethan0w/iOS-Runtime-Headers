/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSImageScalingSpecification : NSObject  {
    float _nominalShortSideLength;
    float _minimumLongSideLength;
    float _maximumLongSideLength;
    int _assetTypeFlags;
}

@property float nominalShortSideLength;
@property float minimumLongSideLength;
@property float maximumLongSideLength;
@property int assetTypeFlags;

+ (id)assetsToGenerateFromImageWithInputSize:(struct CGSize { float x1; float x2; })arg1 toConformToSpecifications:(id)arg2;
+ (id)specificationWithSharedAlbumSpecificationString:(id)arg1;

- (id)description;
- (float)scaleFactorForInputSize:(struct CGSize { float x1; float x2; })arg1;
- (int)assetTypeFlags;
- (void)setMaximumLongSideLength:(float)arg1;
- (void)setMinimumLongSideLength:(float)arg1;
- (void)setNominalShortSideLength:(float)arg1;
- (float)maximumLongSideLength;
- (float)minimumLongSideLength;
- (float)nominalShortSideLength;
- (void)setAssetTypeFlags:(int)arg1;

@end
