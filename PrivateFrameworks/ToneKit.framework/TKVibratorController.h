/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibratorController : NSObject {
    TLAccessQueue * _accessQueue;
    NSUUID * _activePlayRequestIdentifier;
    NSMutableSet * _pendingStopRequestIdentifiers;
}

@property (nonatomic, readonly) unsigned int vibratorState;

- (void).cxx_destruct;
- (unsigned long)_previewVibrationSystemSoundID;
- (void)_turnOffIfAppropriate;
- (void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)turnOff;
- (void)turnOnWithVibrationPattern:(id)arg1;
- (unsigned int)vibratorState;

@end
