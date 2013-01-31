/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, NSString, UIImage;

@interface MPMediaItemImageRequest : MPImageCacheRequest  {
    NSString *_artworkCacheID;
    int _artworkFormat;
    MPMediaItem *_mediaItem;
    int _placeHolderMediaType;
    double _retrievalTime;
    BOOL _usePlaceholderAsFallback;
    BOOL _crop;
    BOOL _fillToSquareAspectRatio;
    BOOL _canUseSurfaceBackedImage;
}

@property(readonly) MPMediaItem * mediaItem;
@property double retrievalTime;
@property BOOL usePlaceholderAsFallback;
@property BOOL crop;
@property BOOL fillToSquareAspectRatio;
@property int placeHolderMediaType;
@property BOOL canUseSurfaceBackedImage;
@property int artworkFormat;
@property(copy) NSString * artworkCacheID;
@property(readonly) UIImage * unscaledPlaceholderImage;


- (void)dealloc;
- (void)setCanUseSurfaceBackedImage:(BOOL)arg1;
- (BOOL)canUseSurfaceBackedImage;
- (void)setPlaceHolderMediaType:(int)arg1;
- (int)placeHolderMediaType;
- (BOOL)usePlaceholderAsFallback;
- (double)retrievalTime;
- (void)setFillToSquareAspectRatio:(BOOL)arg1;
- (BOOL)fillToSquareAspectRatio;
- (void)setCrop:(BOOL)arg1;
- (BOOL)crop;
- (void)setArtworkFormat:(int)arg1;
- (int)artworkFormat;
- (void)setArtworkCacheID:(id)arg1;
- (id)artworkCacheID;
- (void)composeUniqueKey;
- (id)unscaledPlaceholderImage;
- (void)setRetrievalTime:(double)arg1;
- (BOOL)canRequestSynchronously;
- (id)copyRawImageReturningError:(id*)arg1;
- (id)uniqueKey;
- (void)setUsePlaceholderAsFallback:(BOOL)arg1;
- (void)setRetrievalTimeForPlaybackTime:(double)arg1;
- (id)initWithMediaItem:(id)arg1;
- (id)placeholderImage;
- (id)mediaItem;

@end
