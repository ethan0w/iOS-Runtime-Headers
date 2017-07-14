/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXComposedTileIdentifierConverter : NSObject <PXTileIdentifierConverter> {
    NSArray * _converters;
}

@property (nonatomic, readonly, copy) NSArray *converters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)converters;
- (id)init;
- (id)initWithTileIdentifierConverters:(id)arg1;
- (BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; }*)arg1;
- (BOOL)transformTileIdentifier:(struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; }*)arg1 group:(unsigned int*)arg2;

@end
