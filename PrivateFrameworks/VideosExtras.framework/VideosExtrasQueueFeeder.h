/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasQueueFeeder : MPQueueFeeder {
    VideosExtrasPlaybackContext * _context;
}

@property (getter=isBackgroundContext, nonatomic, readonly) BOOL backgroundContext;

- (void).cxx_destruct;
- (BOOL)_shouldReloadForContext:(id)arg1;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (BOOL)hasValidItemAtIndex:(unsigned int)arg1;
- (id)identifierAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfItemWithIdentifier:(id)arg1;
- (BOOL)isBackgroundContext;
- (Class)itemClass;
- (unsigned int)itemCount;
- (int)itemTypeForIndex:(unsigned int)arg1;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (BOOL)player:(id)arg1 shouldContinuePlaybackForNetworkType:(int)arg2 returningError:(id*)arg3;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)repeatType;

@end
