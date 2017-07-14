/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentPreviewImageLoader : NSObject {
    NSData * _data;
    BOOL  _delayLoadingURLs;
    struct UIImage { Class x1; } * _image;
    id /* block */  _imageDidLoadBlock;
    int  _imageOrientation;
    struct UIImage { Class x1; } * _orientedImage;
    struct UIImage { Class x1; } * _originalImage;
    NSArray * _previewImageURLs;
    float  _scale;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic) BOOL delayLoadingURLs;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) id /* block */ imageDidLoadBlock;
@property (nonatomic) int imageOrientation;
@property (nonatomic, retain) UIImage *orientedImage;
@property (nonatomic, retain) UIImage *originalImage;
@property (nonatomic, copy) NSArray *previewImageURLs;
@property (nonatomic) float scale;

+ (struct UIImage { Class x1; }*)orientedImage:(struct UIImage { Class x1; }*)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg4;

- (void).cxx_destruct;
- (BOOL)canLoadImage;
- (id)data;
- (BOOL)delayLoadingURLs;
- (struct UIImage { Class x1; }*)image;
- (id /* block */)imageDidLoadBlock;
- (int)imageOrientation;
- (id)initWithOriginalImage:(struct UIImage { Class x1; }*)arg1 orientedImage:(struct UIImage { Class x1; }*)arg2 data:(id)arg3 scale:(float)arg4 previewImageURLs:(id)arg5 delayLoadingURLs:(BOOL)arg6;
- (void)loadData;
- (struct UIImage { Class x1; }*)loadImage;
- (struct UIImage { Class x1; }*)loadOrientedImage;
- (struct UIImage { Class x1; }*)orientedImage;
- (struct UIImage { Class x1; }*)originalImage;
- (id)previewImageURLs;
- (float)scale;
- (void)setData:(id)arg1;
- (void)setDelayLoadingURLs:(BOOL)arg1;
- (void)setImage:(struct UIImage { Class x1; }*)arg1;
- (void)setImageDidLoadBlock:(id /* block */)arg1;
- (void)setImageOrientation:(int)arg1;
- (void)setOrientedImage:(struct UIImage { Class x1; }*)arg1;
- (void)setOriginalImage:(struct UIImage { Class x1; }*)arg1;
- (void)setPreviewImageURLs:(id)arg1;
- (void)setScale:(float)arg1;

@end
