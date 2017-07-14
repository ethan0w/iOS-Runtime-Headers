/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedImageAtlas : CUINamedLookup {
    struct __CFArray { } * _atlasImages;
    NSDictionary * _images;
    NSArray * _renditions;
}

@property (nonatomic, readonly) BOOL completeTextureExtrusion;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) NSArray *imageNames;
@property (nonatomic, readonly) struct __CFArray { }*images;
@property (nonatomic, readonly) float scale;

- (BOOL)_dimension1ExistsInKeyFormatForThemeRef:(unsigned int)arg1;
- (id)_renditionForKey:(id)arg1 inThemeRef:(unsigned int)arg2;
- (BOOL)completeTextureExtrusion;
- (void)dealloc;
- (struct CGImage { }*)image;
- (id)imageNames;
- (id)imageWithName:(id)arg1;
- (struct __CFArray { }*)images;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(unsigned int)arg5 withSourceThemeRef:(unsigned int)arg6;
- (float)scale;

@end
