/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface _PHPhotoLibraryValidator : PHValidator {
    PLPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)arg1;
- (BOOL)isValidImagePathExtension:(id)arg1;
- (BOOL)isValidVideoPathExtension:(id)arg1;
- (id)photoLibrary;

@end
