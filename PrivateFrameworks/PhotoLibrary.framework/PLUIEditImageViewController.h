/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIEditImageViewController : PLUIImageViewController  {
    id _delegate;
    int _saveOptions;
    int _mode;
}

@property id delegate;
@property int mode;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (int)imageFormat;
- (int)saveOptions;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (unsigned int)_tileAutoresizingMask;
- (unsigned int)_contentAutoresizingMask;
- (int)cropOverlayMode;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (id)imageTile;
- (void)setImageSavingOptions:(int)arg1;
- (id)initWithPhoto:(id)arg1;
- (id)photo;
- (int)mode;
- (void)setMode:(int)arg1;

@end
