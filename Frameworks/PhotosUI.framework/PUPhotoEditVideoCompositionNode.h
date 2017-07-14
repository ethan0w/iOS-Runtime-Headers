/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditVideoCompositionNode : PXRunNode <PUVideoCompositionNode> {
    NSData * _imageData;
    <PUImageDataNode> * _imageNode;
    PLPhotoEditModel * _photoEditModel;
    PLPhotoEditRenderer * _renderer;
    AVAsset * _video;
    AVVideoComposition * _videoComposition;
    <PUVideoAssetNode> * _videoNode;
}

@property (getter=isCanceled, readonly) BOOL canceled;
@property (getter=isComplete, readonly) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <PUImageDataNode> *imageNode;
@property (nonatomic, readonly, copy) PLPhotoEditModel *photoEditModel;
@property (getter=isRunning, readonly) BOOL running;
@property (readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVAsset *video;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;
@property (nonatomic, readonly) <PUVideoAssetNode> *videoNode;
@property (getter=isWaiting, readonly) BOOL waiting;

- (void).cxx_destruct;
- (void)_handleDidCreateVideoComposition:(id)arg1 error:(id)arg2;
- (id)imageNode;
- (id)initWithVideo:(id)arg1 imageData:(id)arg2 photoEditModel:(id)arg3;
- (id)initWithVideoNode:(id)arg1 imageNode:(id)arg2 photoEditModel:(id)arg3;
- (id)photoEditModel;
- (void)run;
- (id)video;
- (id)videoComposition;
- (id)videoNode;

@end
