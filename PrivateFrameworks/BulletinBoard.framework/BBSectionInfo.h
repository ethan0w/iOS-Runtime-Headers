/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSArray, NSString, NSData, BBSectionInfo;

@interface BBSectionInfo : NSObject <NSCopying, NSCoding> {
    NSString *_sectionID;
    NSString *_subsectionID;
    unsigned int _sectionType;
    BOOL _showsInNotificationCenter;
    unsigned int _suppressedSettings;
    unsigned int _pushSettings;
    unsigned int _alertType;
    unsigned int _notificationCenterLimit;
    BOOL _showsInLockScreen;
    BOOL _showsOnBluetoothDevices;
    NSString *_pathToWeeAppPluginBundle;
    NSString *_displayName;
    NSData *_iconData;
    NSArray *_subsections;
    BBSectionInfo *_parentSection;
    NSString *_factorySectionID;
    NSArray *_dataProviderIDs;
    BOOL _suppressFromSettings;
    BOOL _displaysCriticalBulletins;
    int _subsectionPriority;
    BOOL _hideWeeApp;
    unsigned int _version;
    BOOL _showsMessagePreview;
}

@property(copy) NSString * sectionID;
@property(copy) NSString * subsectionID;
@property unsigned int sectionType;
@property BOOL suppressFromSettings;
@property BOOL showsInNotificationCenter;
@property BOOL showsInLockScreen;
@property BOOL showsOnBluetoothDevices;
@property unsigned int notificationCenterLimit;
@property unsigned int pushSettings;
@property unsigned int alertType;
@property BOOL showsMessagePreview;
@property unsigned int suppressedSettings;
@property BOOL hideWeeApp;
@property(copy) NSString * pathToWeeAppPluginBundle;
@property(copy) NSString * displayName;
@property(copy) NSData * iconData;
@property BOOL displaysCriticalBulletins;
@property(copy) NSArray * subsections;
@property BBSectionInfo * parentSection;
@property int subsectionPriority;
@property unsigned int version;
@property BOOL enabled;
@property unsigned int bulletinCount;
@property(copy) NSString * factorySectionID;
@property(copy) NSArray * dataProviderIDs;

+ (BOOL)defaultStateForSetting:(unsigned int)arg1 inSectionType:(unsigned int)arg2;
+ (id)defaultSectionInfoForType:(unsigned int)arg1;

- (void)setIconData:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setDisplayName:(id)arg1;
- (id)iconData;
- (unsigned int)bulletinCount;
- (BOOL)showsOnBluetoothDevices;
- (void)setSubsectionID:(id)arg1;
- (void)setNotificationCenterLimit:(unsigned int)arg1;
- (void)setFactorySectionID:(id)arg1;
- (id)_pushSettingsDescription;
- (id)parentSection;
- (void)setBulletinCount:(unsigned int)arg1;
- (void)setShowsOnBluetoothDevices:(BOOL)arg1;
- (void)setParentSection:(id)arg1;
- (void)_configureWithDefaultsForSectionType:(unsigned int)arg1;
- (void)setHideWeeApp:(BOOL)arg1;
- (id)pathToWeeAppPluginBundle;
- (BOOL)hideWeeApp;
- (void)setPathToWeeAppPluginBundle:(id)arg1;
- (void)_dissociateDataProviderSectionInfo:(id)arg1;
- (void)setAlertType:(unsigned int)arg1;
- (void)setShowsInNotificationCenter:(BOOL)arg1;
- (void)setShowsInLockScreen:(BOOL)arg1;
- (void)_associateDataProviderSectionInfo:(id)arg1;
- (void)_addSubsection:(id)arg1;
- (void)setSubsectionPriority:(int)arg1;
- (void)setSectionType:(unsigned int)arg1;
- (unsigned int)sectionType;
- (void)setSuppressedSettings:(unsigned int)arg1;
- (unsigned int)suppressedSettings;
- (void)setSuppressFromSettings:(BOOL)arg1;
- (BOOL)suppressFromSettings;
- (void)setPushSettings:(unsigned int)arg1;
- (void)setDataProviderIDs:(id)arg1;
- (void)setSubsections:(id)arg1;
- (void)setDisplaysCriticalBulletins:(BOOL)arg1;
- (BOOL)displaysCriticalBulletins;
- (unsigned int)pushSettings;
- (void)_replaceSubsection:(id)arg1;
- (id)_subsectionForID:(id)arg1;
- (id)effectiveSectionInfo;
- (id)effectiveSectionInfoWithFactoryInfo:(id)arg1;
- (id)factorySectionID;
- (int)subsectionPriority;
- (BOOL)showsInLockScreen;
- (unsigned int)alertType;
- (BOOL)showsInNotificationCenter;
- (id)subsectionID;
- (id)subsections;
- (id)dataProviderIDs;
- (unsigned int)notificationCenterLimit;
- (void)setShowsMessagePreview:(BOOL)arg1;
- (BOOL)showsMessagePreview;
- (void)setSectionID:(id)arg1;
- (id)sectionID;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (BOOL)enabled;
- (id)displayName;
- (void)setEnabled:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
