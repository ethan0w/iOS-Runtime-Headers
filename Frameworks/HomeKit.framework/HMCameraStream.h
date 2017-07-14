/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCameraStream : HMCameraSource {
    _HMCameraStream * _stream;
}

@property (nonatomic, readonly) unsigned int audioStreamSetting;
@property (nonatomic, retain) _HMCameraStream *stream;

- (void).cxx_destruct;
- (unsigned int)audioStreamSetting;
- (id)initWithStream:(id)arg1;
- (void)setAudioStreamSetting:(unsigned int)arg1;
- (void)setStream:(id)arg1;
- (id)stream;
- (void)updateAudioStreamSetting:(unsigned int)arg1 completionHandler:(id /* block */)arg2;

@end
