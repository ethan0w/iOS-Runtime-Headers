/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKConfiguration : NSObject {
    NSMutableDictionary * _cachedSettings;
    int  _notificationToken;
    NSObject<OS_dispatch_queue> * _settingsQueue;
}

@property (nonatomic, copy) NSDate *lastCheckInAttemptDate;
@property (nonatomic, copy) NSDate *lastCheckInSuccessDate;
@property (nonatomic) int shouldAddHSA2CreateHeader;
@property (nonatomic) int shouldDisablePETs;
@property (nonatomic) int shouldDisablePiggybacking;
@property (nonatomic) int shouldFakeAuthSuccess;
@property (nonatomic) int shouldSuppressHSA2Suggestions;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)configurationValueForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)lastCheckInAttemptDate;
- (id)lastCheckInSuccessDate;
- (void)setConfigurationValue:(id)arg1 forKey:(id)arg2;
- (void)setLastCheckInAttemptDate:(id)arg1;
- (void)setLastCheckInSuccessDate:(id)arg1;
- (void)setShouldAddHSA2CreateHeader:(int)arg1;
- (void)setShouldDisablePETs:(int)arg1;
- (void)setShouldDisablePiggybacking:(int)arg1;
- (void)setShouldFakeAuthSuccess:(int)arg1;
- (void)setShouldSuppressHSA2Suggestions:(int)arg1;
- (int)shouldAddHSA2CreateHeader;
- (int)shouldDisablePETs;
- (int)shouldDisablePiggybacking;
- (int)shouldFakeAuthSuccess;
- (int)shouldSuppressHSA2Suggestions;

@end
