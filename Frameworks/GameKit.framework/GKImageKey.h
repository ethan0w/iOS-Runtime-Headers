/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKImageKey : NSObject  {
    NSString *_filePath;
    NSString *_cacheKey;
    NSString *_basename;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    NSString *_imageID;
}

@property(retain) NSString * imageID;
@property(retain) NSString * basename;
@property(readonly) NSString * filePath;
@property(readonly) NSString * cacheKey;
@property struct CGSize { float x1; float x2; } size;

+ (id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2;
+ (id)fileNameWithIdentifierInImageSource:(id)arg1;

- (void)dealloc;
- (id)filePath;
- (id)cacheKey;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)imageID;
- (id)basename;
- (void)setImageID:(id)arg1;
- (void)setBasename:(id)arg1;

@end
