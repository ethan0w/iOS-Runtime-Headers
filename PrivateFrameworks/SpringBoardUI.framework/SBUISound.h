/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class NSString, NSDictionary;

@interface SBUISound : NSObject  {
    int _soundType;
    unsigned long _systemSoundID;
    unsigned int _soundBehavior;
    NSString *_ringtoneName;
    NSDictionary *_vibrationPattern;
    NSString *_audioCategory;
    BOOL _repeats;
}

@property int soundType;
@property unsigned long systemSoundID;
@property(retain) NSString * ringtoneName;
@property(getter=isRepeating) BOOL repeats;
@property(retain) NSDictionary * vibrationPattern;
@property unsigned int soundBehavior;
@property(retain) NSString * audioCategory;

+ (id)alertSoundWithSystemSoundID:(unsigned long)arg1;

- (BOOL)play;
- (id)description;
- (void)dealloc;
- (BOOL)playWithCompletionHandler:(id)arg1;
- (id)vibrationPattern;
- (void)setVibrationPattern:(id)arg1;
- (id)audioCategory;
- (unsigned int)soundBehavior;
- (BOOL)isRepeating;
- (id)ringtoneName;
- (void)setAudioCategory:(id)arg1;
- (void)setRepeats:(BOOL)arg1;
- (void)setRingtoneName:(id)arg1;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 audioCategory:(id)arg4;
- (void)setSoundBehavior:(unsigned int)arg1;
- (void)setSystemSoundID:(unsigned long)arg1;
- (id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned int)arg2 vibrationPattern:(id)arg3;
- (unsigned long)systemSoundID;
- (id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned int)arg2;
- (void)stop;
- (int)soundType;
- (void)setSoundType:(int)arg1;
- (BOOL)isPlaying;

@end
