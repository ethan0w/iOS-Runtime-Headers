/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class AVRemaker, SUAVRemakerOutput;

@interface SUAVRemakerOperation : ISOperation  {
    AVRemaker *_remaker;
    SUAVRemakerOutput *_remakerOutput;
}

@property(readonly) SUAVRemakerOutput * remakerOutput;


- (id)initWithImagePickerInfo:(id)arg1 remakerMode:(id)arg2;
- (void)_remakerNotification:(id)arg1;
- (BOOL)stopRunLoop;
- (id)remakerOutput;
- (void)_beginObservingAVRemaker:(id)arg1;
- (void)_endObservingAVRemaker;
- (id)_newDestinationURLForSourceURL:(id)arg1;
- (id)initWithSourceURL:(id)arg1 remakerMode:(id)arg2 options:(id)arg3;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)run;
- (void)_updateProgress:(id)arg1;

@end
