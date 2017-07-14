/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryGlobalPlaylistImportChangeRequestOperation : MPAsyncOperation {
    NSString * _globalPlaylistID;
    MPMediaLibrary * _mediaLibrary;
    id /* block */  _responseHandler;
    BOOL  _shouldLibraryAdd;
}

@property (nonatomic, copy) NSString *globalPlaylistID;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) BOOL shouldLibraryAdd;

- (void).cxx_destruct;
- (void)execute;
- (id)globalPlaylistID;
- (id)mediaLibrary;
- (id /* block */)responseHandler;
- (void)setGlobalPlaylistID:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setShouldLibraryAdd:(BOOL)arg1;
- (BOOL)shouldLibraryAdd;

@end
