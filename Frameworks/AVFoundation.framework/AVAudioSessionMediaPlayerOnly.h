/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVAudioSessionDelegateMediaPlayerOnly>, AVAudioSessionMediaPlayerOnlyInternal, NSString;

@interface AVAudioSessionMediaPlayerOnly : NSObject  {
    AVAudioSessionMediaPlayerOnlyInternal *_audioSession;
}

@property <AVAudioSessionDelegateMediaPlayerOnly> * delegate;
@property(readonly) NSString * category;
@property(readonly) NSString * mode;
@property(readonly) double preferredHardwareSampleRate;
@property(readonly) double preferredIOBufferDuration;
@property(readonly) BOOL inputIsAvailable;
@property(readonly) double currentHardwareSampleRate;
@property(readonly) int currentHardwareInputNumberOfChannels;
@property(readonly) int currentHardwareOutputNumberOfChannels;

+ (void)initialize;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (id)category;
- (id)mode;
- (BOOL)setMode:(id)arg1 error:(id*)arg2;
- (BOOL)setCategory:(id)arg1 error:(id*)arg2;
- (BOOL)isApplicationAudioSession;
- (void)setApplicationAudioSession:(BOOL)arg1;
- (BOOL)setActive:(BOOL)arg1 error:(id*)arg2;
- (void)_setFigPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)_addFPListeners;
- (void)_removeFPListeners;
- (id)_weakReference;
- (double)preferredHardwareSampleRate;
- (int)currentHardwareOutputNumberOfChannels;
- (int)currentHardwareInputNumberOfChannels;
- (double)currentHardwareSampleRate;
- (BOOL)inputIsAvailable;
- (BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2;
- (BOOL)setActive:(BOOL)arg1 withFlags:(int)arg2 error:(id*)arg3;
- (double)preferredIOBufferDuration;
- (BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2;

@end
