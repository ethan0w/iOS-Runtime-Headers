/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationRecord : NSObject {
    NSArray * _attachments;
    NSString * _audioCategory;
    NSNumber * _audioVolume;
    NSNumber * _badge;
    NSString * _body;
    NSArray * _bodyLocalizationArguments;
    NSString * _bodyLocalizationKey;
    NSString * _categoryIdentifier;
    NSNumber * _contentAvailable;
    NSString * _darwinNotificationName;
    NSString * _darwinSnoozedNotificationName;
    NSDate * _date;
    NSString * _defaultActionTitle;
    NSString * _defaultActionTitleLocalizationKey;
    BOOL  _fromSnooze;
    BOOL  _hasDefaultAction;
    NSString * _identifier;
    NSString * _launchImageName;
    NSNumber * _mutableContent;
    NSArray * _peopleIdentifiers;
    NSDate * _requestDate;
    BOOL  _shouldAlwaysAlertWhileAppIsForeground;
    BOOL  _shouldBadgeApplicationIcon;
    BOOL  _shouldIgnoreRingerSwitch;
    BOOL  _shouldLockDevice;
    BOOL  _shouldPauseMedia;
    BOOL  _shouldPlaySound;
    BOOL  _shouldPresentAlert;
    BOOL  _shouldSoundRepeat;
    BOOL  _snoozeable;
    double  _soundMaximumDuration;
    NSString * _subtitle;
    NSArray * _subtitleLocalizationArguments;
    NSString * _subtitleLocalizationKey;
    NSString * _threadIdentifier;
    NSString * _title;
    NSArray * _titleLocalizationArguments;
    NSString * _titleLocalizationKey;
    NSString * _toneAlertTopic;
    int  _toneAlertType;
    NSString * _toneFileName;
    NSString * _toneIdentifier;
    unsigned long long  _toneMediaLibraryItemIdentifier;
    BOOL  _transient;
    NSDate * _triggerDate;
    NSDateComponents * _triggerDateComponents;
    CLRegion * _triggerRegion;
    int  _triggerRemainingRepeatCount;
    NSCalendar * _triggerRepeatCalendar;
    unsigned int  _triggerRepeatInterval;
    BOOL  _triggerRepeats;
    double  _triggerTimeInterval;
    NSTimeZone * _triggerTimeZone;
    int  _triggerTotalRepeatCount;
    NSString * _triggerType;
    NSDictionary * _userInfo;
    NSString * _vibrationIdentifier;
    NSDictionary * _vibrationPattern;
}

@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic, copy) NSNumber *audioVolume;
@property (nonatomic, copy) NSNumber *badge;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSArray *bodyLocalizationArguments;
@property (nonatomic, copy) NSString *bodyLocalizationKey;
@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, copy) NSNumber *contentAvailable;
@property (nonatomic, copy) NSString *darwinNotificationName;
@property (nonatomic, copy) NSString *darwinSnoozedNotificationName;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *defaultActionTitle;
@property (nonatomic, copy) NSString *defaultActionTitleLocalizationKey;
@property (getter=isFromSnooze, nonatomic) BOOL fromSnooze;
@property (nonatomic, readonly) BOOL hasBadge;
@property (nonatomic, readonly) BOOL hasBody;
@property (nonatomic) BOOL hasDefaultAction;
@property (nonatomic, readonly) BOOL hasPendingTrigger;
@property (nonatomic, readonly) BOOL hasSound;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *launchImageName;
@property (nonatomic, copy) NSNumber *mutableContent;
@property (nonatomic, copy) NSArray *peopleIdentifiers;
@property (nonatomic, copy) NSDate *requestDate;
@property (nonatomic) BOOL shouldAlwaysAlertWhileAppIsForeground;
@property (nonatomic) BOOL shouldBadgeApplicationIcon;
@property (nonatomic) BOOL shouldIgnoreRingerSwitch;
@property (nonatomic) BOOL shouldLockDevice;
@property (nonatomic) BOOL shouldPauseMedia;
@property (nonatomic) BOOL shouldPlaySound;
@property (nonatomic) BOOL shouldPresentAlert;
@property (nonatomic) BOOL shouldSoundRepeat;
@property (getter=isSnoozeable, nonatomic) BOOL snoozeable;
@property (nonatomic) double soundMaximumDuration;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSArray *subtitleLocalizationArguments;
@property (nonatomic, copy) NSString *subtitleLocalizationKey;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *titleLocalizationArguments;
@property (nonatomic, copy) NSString *titleLocalizationKey;
@property (nonatomic, copy) NSString *toneAlertTopic;
@property (nonatomic) int toneAlertType;
@property (nonatomic, copy) NSString *toneFileName;
@property (nonatomic, copy) NSString *toneIdentifier;
@property (nonatomic) unsigned long long toneMediaLibraryItemIdentifier;
@property (getter=isTransient, nonatomic) BOOL transient;
@property (nonatomic, copy) NSDate *triggerDate;
@property (nonatomic, copy) NSDateComponents *triggerDateComponents;
@property (nonatomic, copy) CLRegion *triggerRegion;
@property (nonatomic) int triggerRemainingRepeatCount;
@property (nonatomic, copy) NSCalendar *triggerRepeatCalendar;
@property (nonatomic) unsigned int triggerRepeatInterval;
@property (nonatomic) BOOL triggerRepeats;
@property (nonatomic) double triggerTimeInterval;
@property (nonatomic, copy) NSTimeZone *triggerTimeZone;
@property (nonatomic) int triggerTotalRepeatCount;
@property (nonatomic, copy) NSString *triggerType;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSString *vibrationIdentifier;
@property (nonatomic, copy) NSDictionary *vibrationPattern;

- (void).cxx_destruct;
- (id)attachments;
- (id)audioCategory;
- (id)audioVolume;
- (id)badge;
- (id)body;
- (id)bodyLocalizationArguments;
- (id)bodyLocalizationKey;
- (id)categoryIdentifier;
- (id)contentAvailable;
- (id)darwinNotificationName;
- (id)darwinSnoozedNotificationName;
- (id)date;
- (id)defaultActionTitle;
- (id)defaultActionTitleLocalizationKey;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBadge;
- (BOOL)hasBody;
- (BOOL)hasDefaultAction;
- (BOOL)hasPendingTrigger;
- (BOOL)hasSound;
- (unsigned int)hash;
- (id)identifier;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFromSnooze;
- (BOOL)isSimilar:(id)arg1;
- (BOOL)isSnoozeable;
- (BOOL)isTransient;
- (id)launchImageName;
- (id)mutableContent;
- (id)peopleIdentifiers;
- (id)requestDate;
- (void)setAttachments:(id)arg1;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioVolume:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setBodyLocalizationArguments:(id)arg1;
- (void)setBodyLocalizationKey:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setContentAvailable:(id)arg1;
- (void)setDarwinNotificationName:(id)arg1;
- (void)setDarwinSnoozedNotificationName:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDefaultActionTitle:(id)arg1;
- (void)setDefaultActionTitleLocalizationKey:(id)arg1;
- (void)setFromSnooze:(BOOL)arg1;
- (void)setHasDefaultAction:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLaunchImageName:(id)arg1;
- (void)setMutableContent:(id)arg1;
- (void)setPeopleIdentifiers:(id)arg1;
- (void)setRequestDate:(id)arg1;
- (void)setShouldAlwaysAlertWhileAppIsForeground:(BOOL)arg1;
- (void)setShouldBadgeApplicationIcon:(BOOL)arg1;
- (void)setShouldIgnoreRingerSwitch:(BOOL)arg1;
- (void)setShouldLockDevice:(BOOL)arg1;
- (void)setShouldPauseMedia:(BOOL)arg1;
- (void)setShouldPlaySound:(BOOL)arg1;
- (void)setShouldPresentAlert:(BOOL)arg1;
- (void)setShouldSoundRepeat:(BOOL)arg1;
- (void)setSnoozeable:(BOOL)arg1;
- (void)setSoundMaximumDuration:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLocalizationArguments:(id)arg1;
- (void)setSubtitleLocalizationKey:(id)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocalizationArguments:(id)arg1;
- (void)setTitleLocalizationKey:(id)arg1;
- (void)setToneAlertTopic:(id)arg1;
- (void)setToneAlertType:(int)arg1;
- (void)setToneFileName:(id)arg1;
- (void)setToneIdentifier:(id)arg1;
- (void)setToneMediaLibraryItemIdentifier:(unsigned long long)arg1;
- (void)setTransient:(BOOL)arg1;
- (void)setTriggerDate:(id)arg1;
- (void)setTriggerDateComponents:(id)arg1;
- (void)setTriggerRegion:(id)arg1;
- (void)setTriggerRemainingRepeatCount:(int)arg1;
- (void)setTriggerRepeatCalendar:(id)arg1;
- (void)setTriggerRepeatInterval:(unsigned int)arg1;
- (void)setTriggerRepeats:(BOOL)arg1;
- (void)setTriggerTimeInterval:(double)arg1;
- (void)setTriggerTimeZone:(id)arg1;
- (void)setTriggerTotalRepeatCount:(int)arg1;
- (void)setTriggerType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVibrationIdentifier:(id)arg1;
- (void)setVibrationPattern:(id)arg1;
- (BOOL)shouldAlwaysAlertWhileAppIsForeground;
- (BOOL)shouldBadgeApplicationIcon;
- (BOOL)shouldIgnoreRingerSwitch;
- (BOOL)shouldLockDevice;
- (BOOL)shouldPauseMedia;
- (BOOL)shouldPlaySound;
- (BOOL)shouldPresentAlert;
- (BOOL)shouldSoundRepeat;
- (double)soundMaximumDuration;
- (id)subtitle;
- (id)subtitleLocalizationArguments;
- (id)subtitleLocalizationKey;
- (id)threadIdentifier;
- (id)title;
- (id)titleLocalizationArguments;
- (id)titleLocalizationKey;
- (id)toneAlertTopic;
- (int)toneAlertType;
- (id)toneFileName;
- (id)toneIdentifier;
- (unsigned long long)toneMediaLibraryItemIdentifier;
- (id)triggerDate;
- (id)triggerDateComponents;
- (id)triggerRegion;
- (int)triggerRemainingRepeatCount;
- (id)triggerRepeatCalendar;
- (unsigned int)triggerRepeatInterval;
- (BOOL)triggerRepeats;
- (double)triggerTimeInterval;
- (id)triggerTimeZone;
- (int)triggerTotalRepeatCount;
- (id)triggerType;
- (id)userInfo;
- (id)vibrationIdentifier;
- (id)vibrationPattern;
- (BOOL)willNotifyUser;

@end
